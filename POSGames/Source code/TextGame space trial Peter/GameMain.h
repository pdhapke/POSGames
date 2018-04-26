//Peter Hapke 
//peterdhapke@gmail.com
//3/24/18

/* 
This code lays out the  map and main game functions so that a world map can be built using sector pieces in a 2-d vector
each sector piece would give all the scenario and code needed for that particular location, helping to modularize the pieces. 
This allows the pieces to be randomly distributed later (if I have time) and the vector nature allows the size of the map
to change without having to go back and change the variable type

finally the world constructor function calls the load world funtion so that different base contructors can be swapped out
later to allow for save games to be implemented. 
*/

#pragma once
#ifndef GAMEMAIN_H
#define GAMEMAIN_H
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>


using namespace std; 

class GameMain {
	public:
		vector<vector<Sector> >  map;
		Player player; 
		bool move(string); 
		string displayMap(); 
		bool exploreSector(){return map[y][x].run(&player);}; 
		void begin(); 
		GameMain(){
			player.gameOver = false; 
			loadWorld();
			
		}; 
		
		
	private:
		int x; 
		int y; 
		bool gameOver; 
		string asciiMap;
		void loadWorld(); 	
};

#endif
