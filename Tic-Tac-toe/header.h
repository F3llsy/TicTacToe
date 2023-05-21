#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>
#pragma once
using namespace std;

string field;
ofstream op;
ifstream cl;
void cll() {
	cl.open("field.txt");
	while (!cl.eof()) {
		cl >> field;
	}
	cl.close();
	return;
}


void singleplayer();
void multiplayer();
void controls();
bool checkFull();
bool checkWin(char);
char keyInput(bool x);
void AI(int);
