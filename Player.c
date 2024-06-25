#include "Player.h"
/*
struct Player {
    int x;
    int y;
    char symbol;
};
*/

void drawPlayerOnMap(struct Player Player, char mas[10][21]) {
    mas[Player.y][Player.x] = Player.symbol;
}