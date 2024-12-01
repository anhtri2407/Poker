// Description: Header file for precompiled header
// Purpose: To include all the necessary header files in one place

#ifndef PCH_H
#define PCH_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>

// Text colors for console output
// Purpose: Indicates different types of debug messages in the console
#define RED_TEXT    "\033[1;31m"
#define GREEN_TEXT  "\033[1;32m"
#define YELLOW_TEXT "\033[1;33m"
#define BLUE_TEXT   "\033[1;34m"
#define RESET_TEXT  "\033[0m"

// Constants for button dimensions and positions
constexpr int SMALL_BUTTON_WIDTH = 50;
constexpr int SMALL_BUTTON_HEIGHT = 50;
constexpr int SMALL_BUTTON_SPACING = 20;
constexpr int BOTTOM_MARGIN = 20;
constexpr int START_X = 20;
constexpr int START_Y = 600 - (5 * SMALL_BUTTON_HEIGHT + 4 * SMALL_BUTTON_SPACING + BOTTOM_MARGIN);

constexpr int BIG_BUTTON_WIDTH = 240;
constexpr int BIG_BUTTON_HEIGHT = 80;
constexpr int BIG_BUTTON_SPACING = 20;

constexpr int PVP_BUTTON_X = 280;
constexpr int PVP_BUTTON_Y = 370;
constexpr int PVE_BUTTON_X = 280;
constexpr int PVE_BUTTON_Y = 470;

constexpr int NEXT_BUTTON_X = 730;
constexpr int NEXT_BUTTON_Y = 530;

// Constants for card dimensions
constexpr int CARD_WIDTH = 100;
constexpr int CARD_HEIGHT = 150;

constexpr const char* CARD_2_C = "assets/imgs/cards/2-C.png";
constexpr const char* CARD_2_D = "assets/imgs/cards/2-D.png";
constexpr const char* CARD_2_H = "assets/imgs/cards/2-H.png";
constexpr const char* CARD_2_S = "assets/imgs/cards/2-S.png";

constexpr const char* CARD_3_C = "assets/imgs/cards/3-C.png";
constexpr const char* CARD_3_D = "assets/imgs/cards/3-D.png";
constexpr const char* CARD_3_H = "assets/imgs/cards/3-H.png";
constexpr const char* CARD_3_S = "assets/imgs/cards/3-S.png";

constexpr const char* CARD_4_C = "assets/imgs/cards/4-C.png";
constexpr const char* CARD_4_D = "assets/imgs/cards/4-D.png";
constexpr const char* CARD_4_H = "assets/imgs/cards/4-H.png";
constexpr const char* CARD_4_S = "assets/imgs/cards/4-S.png";

constexpr const char* CARD_5_C = "assets/imgs/cards/5-C.png";
constexpr const char* CARD_5_D = "assets/imgs/cards/5-D.png";
constexpr const char* CARD_5_H = "assets/imgs/cards/5-H.png";
constexpr const char* CARD_5_S = "assets/imgs/cards/5-S.png";

constexpr const char* CARD_6_C = "assets/imgs/cards/6-C.png";
constexpr const char* CARD_6_D = "assets/imgs/cards/6-D.png";
constexpr const char* CARD_6_H = "assets/imgs/cards/6-H.png";
constexpr const char* CARD_6_S = "assets/imgs/cards/6-S.png";

constexpr const char* CARD_7_C = "assets/imgs/cards/7-C.png";
constexpr const char* CARD_7_D = "assets/imgs/cards/7-D.png";
constexpr const char* CARD_7_H = "assets/imgs/cards/7-H.png";
constexpr const char* CARD_7_S = "assets/imgs/cards/7-S.png";

constexpr const char* CARD_8_C = "assets/imgs/cards/8-C.png";
constexpr const char* CARD_8_D = "assets/imgs/cards/8-D.png";
constexpr const char* CARD_8_H = "assets/imgs/cards/8-H.png";
constexpr const char* CARD_8_S = "assets/imgs/cards/8-S.png";

constexpr const char* CARD_9_C = "assets/imgs/cards/9-C.png";
constexpr const char* CARD_9_D = "assets/imgs/cards/9-D.png";
constexpr const char* CARD_9_H = "assets/imgs/cards/9-H.png";
constexpr const char* CARD_9_S = "assets/imgs/cards/9-S.png";

constexpr const char* CARD_10_C = "assets/imgs/cards/10-C.png";
constexpr const char* CARD_10_D = "assets/imgs/cards/10-D.png";
constexpr const char* CARD_10_H = "assets/imgs/cards/10-H.png";
constexpr const char* CARD_10_S = "assets/imgs/cards/10-S.png";

constexpr const char* CARD_J_C = "assets/imgs/cards/J-C.png";
constexpr const char* CARD_J_D = "assets/imgs/cards/J-D.png";
constexpr const char* CARD_J_H = "assets/imgs/cards/J-H.png";
constexpr const char* CARD_J_S = "assets/imgs/cards/J-S.png";

constexpr const char* CARD_Q_C = "assets/imgs/cards/Q-C.png";
constexpr const char* CARD_Q_D = "assets/imgs/cards/Q-D.png";
constexpr const char* CARD_Q_H = "assets/imgs/cards/Q-H.png";
constexpr const char* CARD_Q_S = "assets/imgs/cards/Q-S.png";

constexpr const char* CARD_K_C = "assets/imgs/cards/K-C.png";
constexpr const char* CARD_K_D = "assets/imgs/cards/K-D.png";
constexpr const char* CARD_K_H = "assets/imgs/cards/K-H.png";
constexpr const char* CARD_K_S = "assets/imgs/cards/K-S.png";

constexpr const char* CARD_A_C = "assets/imgs/cards/A-C.png";
constexpr const char* CARD_A_D = "assets/imgs/cards/A-D.png";
constexpr const char* CARD_A_H = "assets/imgs/cards/A-H.png";
constexpr const char* CARD_A_S = "assets/imgs/cards/A-S.png";

constexpr const char* CARD_JOKER = "assets/imgs/cards/JOKER.png";
constexpr const char* CARD_BACK = "assets/imgs/cards/BACK.png";

#endif // PCH_H