//Peter Hapke 
//peterdhapke@gmail.com
//3/24/18

/* 
This section complete the class definition of the player object  and adds the 
functions which access and display the player inventory
*/

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std; 
bool Player::hasItem(string item){
	for (int i = 0; i < inventory.size(); i++){
		if (inventory[i] == item){
			return true; 
		}
	}
	return false; 
}

//add an item to the player inventory and notify the player
bool Player::addItem(string item){
	inventory.push_back(item);
	cout << "--you have gained: " << item << endl; 
} 

//take an item from the players inventory and notify the player
bool Player::removeItem(string item){
	if(hasItem(item)){
		for (int i = 0; i < inventory.size(); i++){
		if (inventory[i] == item){
			cout << endl; 
			cout << "--you have lost: " << inventory[i] << endl; 
			inventory.erase(inventory.begin() + i);
			return true; 
		}
	}
	}
	return false; 
}

//create a string output of the player inventory numbered for reading
string Player::viewInventory(){
	stringstream output; 
	for (int i = 0; i < inventory.size(); i++){
		output << i + 1 << ".) " << inventory[i] << endl; 
	}
	return output.str(); 	
}
//constructor
Player::Player(){
	string confirm; 
	bool isName = false; 
	//ready the player inventory. 
	inventory.push_back("Warp drive");
	inventory.push_back("Various spare parts");
	inventory.push_back("Bloody clothing sample");
	
	//set the player timer. 36 hours did not leave enough room so 48 hours was 
	timer = 48; 
	
	//get the players name and confirm it 
	cout << "What is your name? : ";
	do{
		getline(cin, name); 
		
		cout << "Is your name " << name << "? Enter yes to confirm: ";
		getline(cin, confirm); 
		
		if (confirm == "yes"){
			cout << "Great then we can get started" << endl;
			cout << "*********************************************************" << endl << endl; 
			isName = true; 
		} else {
			cout << "Okay....I will ask again then." << endl; 
			cout << "What is REALLY your name? : "; 
		}
	}while(!isName);
	
	
}
//an empty player constructor made so that the the gamemain constructor does not need to make new players while it creates the sectors 
Player::Player(bool emptyplayer){
}; 
