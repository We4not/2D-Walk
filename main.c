#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Player.h"

int main()
{
    struct Player Player;
    Player.x = 10;
    Player.y = 5;
    Player.symbol = '@';
    char key;
    char mas[10][21];

    do
    {
        system("cls");
        /*
        sprintf(mas[0], "####################");
        for(int i = 1; i < 9; i++) {
            sprintf(mas[i], "#                  #");
        }
        sprintf(mas[9], "####################");
        */
        sprintf(mas[0], "####################");
        sprintf(mas[1], "#..................#");
        sprintf(mas[2], "#...############...#");
        sprintf(mas[3], "#...#....#.#...#...#");
        sprintf(mas[4], "#.............!#...#");
        sprintf(mas[5], "#...#..###.###.#...#");
        sprintf(mas[6], "#...##...#.#...#...#");
        sprintf(mas[7], "#...############...#");
        sprintf(mas[8], "#..................#");
        sprintf(mas[9], "####################");
        drawPlayerOnMap(Player, mas);

        //mas[Player.y][Player.x] = Player.symbol;

        for(int i = 0; i < 10; i++) {
            printf("%s\n", mas[i]);
        }

        key = getch();
        if(key == 'w') {
            Player.y--;
            if(mas[Player.y][Player.x] == '#') {
                Player.y++;
            }
        }
        else if(key == 's') {
            Player.y++;
            if(mas[Player.y][Player.x] == '#') {
                Player.y--;
            }
        }
        else if(key == 'a') {
            Player.x--;
            if(mas[Player.y][Player.x] == '#') {
                Player.x++;
            }
        }
        else if(key == 'd') {
            Player.x++;
            if(mas[Player.y][Player.x] == '#') {
                Player.x--;
            }
        }
    } while (key != 27);
    system("cls");
    return 0;
}