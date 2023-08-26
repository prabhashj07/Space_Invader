#ifndef GAME_H
#define GAME_H

#include <vector>
#include <array>
#include <windows.h>

void drawBorder();
void genEnemy(int ind);
void gotoxy(int x, int y);
void setcursor(bool visible, DWORD size);
void setBackgroundColor(int color);
void drawEnemy(int ind);
void eraseEnemy(int ind);
void resetEnemy(int ind);
void genBullet();
void moveBullet();
void drawBullets();
void eraseBullets();
void eraseBullet(int i);
void drawBird();
void eraseBird();
int collision();
int bulletHit();
void gameover();
void updateScore();
void instructions();
void play();

#endif // GAME_H
