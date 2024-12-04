#include "core/Gameplay.h"

/* ------------------Gameplay------------------ */
void Gameplay::init(const std::vector<std::string>& usernames, int numberOfBots) {
    this->numberOfPlayers = usernames.size() + numberOfBots;
    players.assign(numberOfPlayers, Player());
    for (int i = 0; i < numberOfPlayers; i++) {
        players[i].id = i;
        if (i < usernames.size()) {
            players[i].username = usernames[i];
            std::vector<std::string> playerData = storage.getPlayerData(usernames[i]);
            if (!playerData.empty()) {
                players[i].gamesPlayed = std::stoi(playerData[1]);
                players[i].chips = std::stoi(playerData[2]);
                players[i].winrate = std::stof(playerData[3]);
                players[i].rank = std::stoi(playerData[4]);
                players[i].favoriteStrategy = playerData[5];
                for (int j = 0; j < 9; j++) {
                    players[i].winningStrategy[j] = std::stoi(playerData[6 + j]);
                }
            }
        } else {
                players[i].username = "BOT " + std::to_string(i - usernames.size() + 1);
        }
    }
    std::mt19937 seed(static_cast<unsigned long>(std::time(0)));
    shuffle(players.begin(), players.end(), seed);
    for (int i = 0; i < numberOfPlayers; i++) {
        std::cout << "Player " << i << ": " << players[i].username << '\n';
    }
    deck.setup();
    deck.shuffle();
}

void Gameplay::dealCards(int numberOfCards) {
    for (int i = 0; i < numberOfPlayers; i++) {
        for (int j = 0; j < numberOfCards; j++) {
            Card& currentPlayerCard = players[i].hand.cards[j];
            int& currentNumberOfOnHandCards = players[i].hand.numberOfOnHandCards;
            Suits& currentCardSuit = currentPlayerCard.suit;
            Ranks& currentCardRank = currentPlayerCard.rank;

            if (currentCardSuit == SUIT_EMPTY && currentCardRank == RANK_EMPTY) {
                currentPlayerCard = deck.cards[deck.remainCards - 1];
                deck.remainCards--;
                currentNumberOfOnHandCards++;
            }
        }
    }
    std::cout << "Remaining cards in the deck: " << deck.remainCards << '\n';
}

void Gameplay::whoWins() {
    Strength strength;
    for (int i = 0; i < numberOfPlayers; i++) {
        players[i].hand.sortCards();
        players[i].hand.handStrength = strength.evaluateHand(players[i].hand);
    }
    winner = 0;
    bool isTie = false;
    int tiePlayer = 0;
    for (int i = 1; i < numberOfPlayers; i++) {
        if (strength.compareHands(players[i].hand, players[winner].hand) == 1) {
            winner = i;
        } else if (strength.compareHands(players[i].hand, players[winner].hand) == 0) {
            isTie = true;
            winner = tiePlayer = i;
        }
    }
    if (isTie && winner == tiePlayer) {
        winner = -1;
    }
}

void Gameplay::savePlayerData(Player& player) {
    player.gamesPlayed++;
    if (player.id == winner) {
        player.winningStrategy[player.hand.handStrength]++;
        player.chips += 20;
    } else {
        player.chips -= 10;
    }
    int gamesWon = 0;
    for (int i = 0; i < 9; i++) {
        gamesWon += player.winningStrategy[i];
        int mostWinningStrategy = 0;
        if (player.winningStrategy[i] >= mostWinningStrategy) {
            mostWinningStrategy = player.winningStrategy[i];
            player.favoriteStrategy = player.hand.handName;
        }
    }
    player.winrate = (float) gamesWon / player.gamesPlayed;
}

void Gameplay::saveAllPlayerData() {
    for (auto& player : players) {
        storage.assignPlayerData(player.username, player.gamesPlayed, player.chips, player.winrate, player.rank, player.favoriteStrategy, player.winningStrategy);
        storage.savePlayerData(player.username);
    }
    leaderboard.updateLeaderboard();
}

std::vector<std::vector<std::string>> Gameplay::showLeaderboard() {
    return leaderboard.showLeaderboard();
}

void Gameplay::resetDeck() {
    deck.reset();
}
/* ------------------End of Gameplay------------------ */