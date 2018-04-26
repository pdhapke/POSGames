//Peter Hapke 
//peterdhapke@gmail.com
//3/24/18

//sets up the headers for some helpful functions 
//These are a series of helpful functions that can be called from anywhere to make the programing easier. 


#pragma once
#ifndef HELPFULFUNCTIONS_H
#define HELPFULFUNCTIONS_H
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std; 

int randomNumber(int start_inclusive, int end_inclusive);
string getDirection(string promptText);
string getAction();
string getAction(string, string);
string getAction(string, string, string);
string getAction(string, string, string, string);
string getAction(vector<string>);
string wordWrap(string given); 
void mainScreen(); 
void gameOver();

#endif
