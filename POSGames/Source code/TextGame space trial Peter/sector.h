//Peter Hapke 
//peterdhapke@gmail.com
//3/24/18
 
/* 
This code lays out the sector function declarations which will be a part of each individual sector. 
These functions run a different section of the story based on the step the story is on
*/

#pragma once
#ifndef SECTOR_H
#define SECTOR_H
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std; 
/* The following website link from stack overflow was very helpful in 
creating this pseudo morphic class of objects
https://stackoverflow.com/questions/5582869/how-do-i-store-a-function-to-a-variable
*/
//this is my favorite bit of code
class Sector {
	public:
		typedef bool (*FunctionPointer)(Sector*, Player*);  //returns a bool if the function executes properly
		bool run(Player *player){return runFunction(this, player);};
		int currentStoryStep;
		string description;
		Sector(FunctionPointer functionToRun) {runFunction = functionToRun; currentStoryStep = 0; run(new Player(true)); };
		vector<string> itemsInSector; 
		string listItemsInSector(); 
		bool dropItem(string); 
		bool pickUpItem(string); 
		bool hasItemInSector(string); 
		string eventItem; 
		
	private:
		FunctionPointer runFunction; 
};

//this is the template sector function which will be used as a base for all sectors
bool sec00RunFunction(Sector *sec, Player*);

//these are the used sector functions
bool sec01RunFunction(Sector *sec, Player*); 
bool sec02RunFunction(Sector *sec, Player*); 
bool sec03RunFunction(Sector *sec, Player*); 
bool sec04RunFunction(Sector *sec, Player*); 
bool sec05RunFunction(Sector *sec, Player*); 
bool sec06RunFunction(Sector *sec, Player*); 
bool sec07RunFunction(Sector *sec, Player*); 
bool sec08RunFunction(Sector *sec, Player*); 
bool sec09RunFunction(Sector *sec, Player*); 
bool sec10RunFunction(Sector *sec, Player*); 
bool sec11RunFunction(Sector *sec, Player*); 
bool sec12RunFunction(Sector *sec, Player*); 
bool sec13RunFunction(Sector *sec, Player*); 
bool sec14RunFunction(Sector *sec, Player*); 
bool sec15RunFunction(Sector *sec, Player*); 
bool sec16RunFunction(Sector *sec, Player*); 
bool sec17RunFunction(Sector *sec, Player*); 
bool sec18RunFunction(Sector *sec, Player*); 
bool sec19RunFunction(Sector *sec, Player*); 
bool sec20RunFunction(Sector *sec, Player*); 
bool sec21RunFunction(Sector *sec, Player*); 
bool sec22RunFunction(Sector *sec, Player*); 
bool sec23RunFunction(Sector *sec, Player*); 
bool sec24RunFunction(Sector *sec, Player*); 
bool sec25RunFunction(Sector *sec, Player*); 


#endif
