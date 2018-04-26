//Peter Hapke 
//peterdhapke@gmail.com
//3/24/18

/* 
This code fills in the details of the map and the main game function and sector class definitions.
It then creates the map by building all of the sector objects and placing
them in the map 2-d vector
*/

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <sstream>



using namespace std; 

//this function takes a directional text and then moves a player along accordingly
//error checking for direction is done by returning a boolean value if it is a valid direction
//and the position was updated 
bool GameMain::move(string direction){
	bool validDirection = false; 
	
	if(direction == "up"){
		if ((y - 1) < 0){
			validDirection = false; 
		} else {
			y--; 
			validDirection = true;
			
		}
	} else if (direction == "down"){
		if ((y + 1) >= map.size()){
			validDirection = false; 
		} else {
			y++; 
			validDirection = true;
		}
	} else if (direction == "left"){
		if ((x - 1) < 0){
			validDirection = false; 
		} else {
			x--; 
			validDirection = true;
		} 	
	} else if (direction == "right"){
	if ((x + 1) >= map[0].size()){
			validDirection = false; 
		} else {
			x++; 
			validDirection = true;
		}	
	}	
	if(validDirection){
		cout << "Course set captain!" << endl<< endl; 
	} else {
		cout <<endl<< "The sector in that direction is uncharted..." << endl; 
	}
	
	return validDirection; 
}; 

//displays the map as a an ASCII art picture for the user, with the users position marked with an x
string GameMain::displayMap(){
	stringstream output; 
	string markedMap = asciiMap; 
	
	output << "##### Current  Map ##### We are located at the 'x' ####" << endl; 
	
	
	//find the right index number to change
	int index = 8; //the first row takes 8 characters and is the boundary of the map
	index = index + 1; //the map text string starts with a border pipe so add one
	index = index + x; //add the x coordinate of the player directly because it denotes columns
	index = index + 8*y; //add the y coordinate by adding the length of a row for each y index
	
	
	//change the character at the proper index to an x to mark the player position
	if(index < markedMap.size() && index >= 0){
		markedMap[index] = 'x'; 
	}
	
	//add the new map to the output
	output << markedMap; 
	return output.str(); 	
}; 


//this function loads the game map
void GameMain::loadWorld(){

	stringstream output; 
	system("CLS"); 
	//setup the story here so that the brief time the player is reading the computer can run a few lines and prepare the game
	cout << "Captain on the bridge!" << endl; 
	cout << "It seems we have a problem Captain " << player.name << ". " << endl; 
	cout << "One of our crew, Private Huln, has been arrested for the murder of a Jovin trader." << endl; 
	cout << "It appears he was seen at the crime scence, the victims blood was found on his clothes," << endl; 
	cout << "only memory crystals are allowed from accused, and the weapon was bought with Terran currency." << endl; 
	cout << endl;
	cout << "If we are to mount a defense we will need to gather our own evidence." << endl;  
	cout << "We should try to gather four strong pieces of evidence to exonerate Private Huln." << endl <<endl; 
	cout << "Speaking with the Private it appears that he may have been set up. He can recall" << endl;		
	cout << "colliding with a Ulen, but says it was not the same species who was killed." << endl;  			//blood breadcrumb
	cout << "As a matter of fact he was speaking with a Parvc when the alleged attack took place." << endl; //alibi breadcrumb
	cout << "From the reports of the rest of the crew, it seems only three used Terran currency to" << endl; //payment breadcrumb
	cout << "make purchases during our shore leave. The items purchased were a transfer capacitor " << endl; //payment breadcrumb
	cout << "from a local Ulen, a subspace modulator from a nearby Jovin, and a phase columnator  " << endl; //payment breadcrumb
	cout << "from a passing Reon." << endl << endl; 
	
	cout << "The trial will begin in 48 HOURS and must present FOUR pieces of EVIDENCE. " << endl; 
	cout << "Anything we want to prepare must be completed and brought here before then." << endl;
	
		//give some space 
	cout << endl <<endl; 
	cout << "--Press Enter to continue--" <<endl;
	cin.get();
	

	//this is the base map look as ascii art, it will not work because
	//the unicode character is not recognized, the following code converts this map
	//to the proper form for the compiler
	/*
	output << " _____ " << endl; 
	output << "|'.o..|" << endl; 
	output << "|....~|" << endl; 
	output << "|....~|" << endl; 
	output << "|Oº. .|" << endl; 
	output << "|....:|" << endl; 
	output << " ¯¯¯¯¯ " << endl; 
	*/	
	
	//the asciiMap that corresponds to this loaded world
	//this map is 8 characters wide and 6 tall, with an additional character 
	//added to the width by the endl command
	output << " _____ " << endl; 
	output << "|'.o..|" << endl; 
	output << "|....~|" << endl; 
	output << "|....:|" << endl; 
	output << "|O*. .|" << endl; 
	output << "|....:|" << endl; 
	output << " ----- " << endl;

	asciiMap = output.str(); 
	
	//set the starting position
	x = 1 ;
 	y = 3 ;
	
	{
		//build all 25 of the sectors
		Sector sec1(sec01RunFunction); 
		Sector sec2(sec02RunFunction); 
		Sector sec3(sec03RunFunction); 
		Sector sec4(sec04RunFunction); 
		Sector sec5(sec05RunFunction); 
		Sector sec6(sec06RunFunction); 
		Sector sec7(sec07RunFunction); 
		Sector sec8(sec08RunFunction); 
		Sector sec9(sec09RunFunction); 
		Sector sec10(sec10RunFunction); 
		Sector sec11(sec11RunFunction); 
		Sector sec12(sec12RunFunction); 
		Sector sec13(sec13RunFunction); 
		Sector sec14(sec14RunFunction); 
		Sector sec15(sec15RunFunction); 
		Sector sec16(sec16RunFunction); 
		Sector sec17(sec17RunFunction); 
		Sector sec18(sec18RunFunction); 
		Sector sec19(sec19RunFunction); 
		Sector sec20(sec20RunFunction); 
		Sector sec21(sec21RunFunction); 
		Sector sec22(sec22RunFunction); 
		Sector sec23(sec23RunFunction); 
		Sector sec24(sec24RunFunction); 
		Sector sec25(sec25RunFunction); 
	
	
		//setup the vectors for each row  of sector s
		vector<Sector> row1;
		vector<Sector> row2;
		vector<Sector> row3;
		vector<Sector> row4;
		vector<Sector> row5;
	
		//build the rows
		//row1
		row1.push_back(sec1);
		row1.push_back(sec2);
		row1.push_back(sec3);
		row1.push_back(sec4);
		row1.push_back(sec5);
		
		//row2
		row2.push_back(sec6);
		row2.push_back(sec7);
		row2.push_back(sec8);
		row2.push_back(sec9);
		row2.push_back(sec10);
		
		//row3
		row3.push_back(sec11);
		row3.push_back(sec12); //this is the starting location
		row3.push_back(sec13);
		row3.push_back(sec14);
		row3.push_back(sec15);
		
		//row4
		row4.push_back(sec16);
		row4.push_back(sec17);
		row4.push_back(sec18);
		row4.push_back(sec19);
		row4.push_back(sec20);
		
		//row5
		row5.push_back(sec21);
		row5.push_back(sec22);
		row5.push_back(sec23);
		row5.push_back(sec24);
		row5.push_back(sec25);
	
		//push all the row sector vectors to the total map
		map.push_back(row1);
		map.push_back(row2);
		map.push_back(row3);
		map.push_back(row4);
		map.push_back(row5);
	}
	
	
}; 	
void GameMain::begin(){
	//run the game loop until the game is over
	while(!player.gameOver){
		system("CLS"); 
		//check for game over condition and choose one of two time displays
		if (player.timer < 0){
			player.gameOver = true; 
		}
		if (player.timer >= 0){
			cout << "===== " << player.timer << " hours remaining =====" <<endl; 	
		} else {
			cout << "===== The Trial is starting! Hurry! =====" <<endl; 
		}
		
		//show the map and ask for an action
		cout << displayMap(); 
		cout << "How would you like to proceed Captain?" << endl; 
		cout << "Time required / Action " << endl;
		cout << "  (1 hour)    You can look around the current location by typing - inspect" << endl; 
		cout << "  (1 hour)    You can travel to another sector of space by typing - warp" << endl; 
		cout << "  ( none )    You can scan the area for flotsom by typing - scan" << endl;
		cout << "  ( none )    You can inspect the ships stores by typing- cargo" << endl; 
		cout << endl; 
		
		//get the base player action
		string courseOfAction = getAction(); 
	
		//render the player action in a new area
		cout <<endl; 
		cout << "~~~~~~~~~~~~~~~ Action ~~~~~~~~~~~~~~~" << endl; 
		
		//fill in the action based on the choice above
		if (courseOfAction == "warp"){	
			player.timer--; 	
			cout << "Let the know helm which direction you want to travel by typing";		
			while(!move(getDirection(" up, down, left, or right?"))){}; 
			cout << wordWrap(" ** The FTL engine spins up and the ship lurches into hyperspace **") << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		} else if(courseOfAction == "inspect"){
			player.timer--; 
			exploreSector();
		} else if(courseOfAction == "cargo"){
			cout << player.viewInventory()<< endl; 
			cout << "You can jettison items you no longer want ( none )  or leave.";
			if (getAction("jettison", "leave") == "jettison"){
				cout << "type the name of the item you want to eject into space: ";
				string ejectItem = getAction(player.inventory); 
				if (ejectItem != "exit"){
					player.removeItem(ejectItem);
					map[y][x].dropItem(ejectItem);
					
					cout << "--Press Enter to continue--" <<endl;
					cin.get();
				} 
			}
		} else if (courseOfAction == "scan"){
			//list and pick up items
			cout << "Scanning the sector sir!" << endl; 
			cout << "It looks like we found..." << endl; 
			cout << map[y][x].listItemsInSector(); 
			
			if (map[y][x].itemsInSector.size() != 0){
				cout << "What item would you like to retrive (1 hour)?: "; 
				string retrive = getAction(map[y][x].itemsInSector); 
				
				if(retrive != "exit"){
					map[y][x].pickUpItem(retrive); 
					player.addItem(retrive); 
					player.timer--; 
					
				}
				
				
			}
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		}
	
		
		
	}
	
	//once the loop is ended declare victory or loss
	if(player.timer >=0){
		cout << wordWrap("!!!!! You Win !!!!!") <<endl; 
		cout << wordWrap("Based on all the evidence you were able to provide Private Huln's case was dismissed. It seems no one doubts his innocence...though there are still a few questions unanswered.") <<endl; 
		
	} else {
		gameOverScreen(); 
		cout << wordWrap("It seems you took too long trying to gather evidence. Private Huln was put to death according to the customs of an alien judicial system.") <<endl; 
		
	}
	
	//the player read the screen
	cout << "--Press Enter to quit--" <<endl;
	cin.get();

			

}


