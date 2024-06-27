#include "Player.h"
/*
struct Player {
    int x;
    int y;
    char symbol;
};
*/

/*
void InitPlayer(int x, int y, char symbol)
{
    struct Player Player;
    Player.x = 10;
    Player.y = 5;
    Player.symbol = '@';
}
*/

void drawPlayerOnMap(struct Player Player, char mas[10][21]) {
    mas[Player.y][Player.x] = Player.symbol;
}