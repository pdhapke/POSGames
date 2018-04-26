//Peter Hapke 
//peterdhapke@gmail.com
//3/24/18

/*
Write a program for a text adventure game that takes up 16 locations and includes trying to obtain four gems that if brought to a particular place at a particular time- win the game for the user.    
>> usded 25 locations and 4 pieces of evidence instead of gems

Wiki infocom or text adventure games for examples of interactive fiction.  Would like you to use Classes for the development of this game if possible.
>>Created a game class, a sector class, and a player class. 

Part One: 
Create a map with 16 locations and allow the user to move around the map with commands like North, South, East, West. 
>> Accomplished this with 25 spaces and the user can move around with up/down/left/right as there is no great translation 
of north/east/south/west in space. 

Each location should have a description and possible objects that you can pick up.   Allow the user to pick up objects and put them into their own inventory.   A user should also be able to both drop an object somewhere and be able to pick it up from there later on.   Make it so your game comes to a conclusion when a user gets to a target space and drops the four objects at that location.  Make sure you explain your objects and the location of your target space in the code.   
>>Each location has a story and a description with the ability to drop items and then retrieve them later. Allowed user to look at their inventory
at any time and can jettison instead of drop items. 

Part Two:  
Add obstacles and some sort of a combat system to your game.  
>>Each zone has some sort of interaction or description, while two zones have combat which can be beaten with the proper item otherwise the player loses an item

Also add a time element so that the user doesn't win unless they get to the target space by a certain time or they have to drop their objects at a precise moment to win.
>>Most actions take time to complete and will cost the user an hour or more, while the user is limited to 48 hours total. 


*/






/* 
This is the main program for a simple text based game 

it contains two functions, one that runs tests and the other that actually runs the game
I did this so I could gradually test pieces and switch out the code the main function runs
more easily
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <string>

#include "helpfulfunctions.h"
#include "character.h"
#include "character.cpp"
#include "sector.h"
#include "sector.cpp"
#include "helpfulfunctions.cpp"
#include "GameMain.h"
#include "GameMain.cpp"

using namespace std; 

void testGame(); 
void runGame();


int main(int argc, char** argv) {
	runGame(); 
	return 0; 
}

//testing main
void testGame(){
//used while I was testing granular functions and interfaces
	
}

void runGame(){
	mainScreen(); 
	GameMain game; 
	game.begin();
	
}

