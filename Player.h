#ifndef PLAYER_H
#define PLAYER_H

struct Player {
    int x;
    int y;
    char symbol;
};
/*
void InitPlayer();
*/
void drawPlayerOnMap(struct Player Player, char mas[10][21]);

#endif