//Peter Hapke 
//peterdhapke@gmail.com
//3/24/18

/* 
This code lays out the player class and his/her inventory. 
*/

#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std; 

class Player {
	public:
	string name; 
	bool gameOver; 
	int timer; 
	vector<string> inventory; 
	bool hasItem(string item);
	bool addItem(string item); 
	bool removeItem(string item); 
	string viewInventory(); 
	Player(); 	
	Player(bool); 
};


#endif
