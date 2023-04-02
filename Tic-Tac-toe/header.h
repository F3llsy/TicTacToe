#include <iostream>
#include <stdlib.h>
#include <time.h>
#pragma once
using namespace std;

char field[10];

void singleplayer();
void multiplayer();
void controls();
bool checkFull();
bool checkWin(char);
char keyInput(bool x);
void AI(int);
