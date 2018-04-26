//Peter Hapke 
//peterdhapke@gmail.com
//3/24/18

/* 
This code is the main code for the game and details the story for each sector
of the map individually. I did this so that each sector would share the same code, but differ
in the details so I could change the interactions. 
*/

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std; 

//complete item list
/*

Various spare parts
Warp drive
Bloody clothing sample 		> 	Contact info for Cree  >  Blood - blood sample from Cree
Lead on the Parvc 	> 	Letter of Introdocuton to Liool 	> 	Alibi -  witness statement
Terran Arms dealer passphrase >  Evidence - Terran currency
Memory crystal
Enhanced Shields
Beam Cannon
Precious Metal Asteriod
Translation Device
Recorded dark energy data
Pure Ice Comet
Mining Sensors
*/

//this function is used to inspect the items in the current sector for the play to possibly pick up
string Sector::listItemsInSector(){
	stringstream output; 
	if(itemsInSector.size() != 0){
		for (int i = 0; i < itemsInSector.size(); i++){
			output << i + 1 << ".) " << itemsInSector[i] << endl; 
		}
	} else {
		output << "...nothing" << endl; 
	}
	return output.str(); 
}

//function to allow the player to drop an item in the current sector 
bool Sector::dropItem(string item){
	itemsInSector.push_back(item);
}

//used to check if the current sector has a certain item
bool Sector::hasItemInSector(string item){
		for (int i = 0; i < itemsInSector.size(); i++){
			if (itemsInSector[i] == item){
				return true; 
			}
	}
	return false; 
}

//used by the player to pick up an item, deleting it from the sector
bool Sector::pickUpItem(string item) {
		if(hasItemInSector(item)){
			for (int i = 0; i < itemsInSector.size(); i++){
				if (itemsInSector[i] == item){
					itemsInSector.erase(itemsInSector.begin() + i);
					return true; 
				}
			}
		}
	return false; 
}

//this is the template sector function which will be used as a base for all sectors
//all functions are named with two digits so that DevC will list the functions in order for faster access
bool sec00RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			//increment the step of the story so it progresses from one to the next. 
			//this could have used an if/then clause but I wrote it originally so that some sectors could
			//more easily have many steps in their story. Possibly moving back and fourth through them. This did not happen
			//because it was already so much work to get them working with two steps
			sec->currentStoryStep++; 
			
			//create the text of the story
			output << "story"; 
			
			//set the basic description to be used
			sec->description = output.str(); 
		
		break; 
		case 1:
			//default first step in the story
			//describe the current sector
			cout << sec->description << endl; 
			
			//run any code needed in here
			
			//prompt for an enter so the text can be read before continuing 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
};

//these are the used sector functions




//sector 1
bool sec01RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector is empty save for the sole commet traveling through interstellar space. Here on the edge of the charted territories there is very little in the way of life. Though peacful it is best to get back to finding evidence of Huln's innocence."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
}; 

//sector 2
bool sec02RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			sec->dropItem("Pure Ice Comet"); 
			output << "This sector has an unusually high concentration of water worlds and icy comets. Often a source of H20 mining for mapped space."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
}; 

//sector 3
bool sec03RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector lies on the edge of established space. Most of the worlds here are inhabited by homesteaders and farmers. Each world boasts a new and exotic commodity, usually the reason the planet was settled in the first place.";  
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			
			if(player->hasItem("Lead on the Parvc")){
				
				cout << wordWrap("Captain there are no signs of a Parvc ship, it looks like this is as far as our lead takes us.") <<endl; 
				string choice = getAction("investigate", "leave"); 
			
				if (choice == "investigate"){
					
					cout << wordWrap("Sir, there is a response from the nearby planet. It seems they have seen a Parvc ship but it left suddenly. Apparently the Captain, Looil, had a a reaction to the local flora and needed medical attention. The planet is willing to give us a letter of introduction if we make sure the Parvc captain doesn't mark the planet as inhospitable to the guilds.") << endl; 
					player->removeItem("Lead on the Parvc"); 
					player->addItem("Letter of Introdocuton to Liool");
					sec->currentStoryStep++; 
				}
			}
			
						
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 4
bool sec04RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "There is an electrical storm in this sector! It is going to take time to navigate this anomally";  
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			if (player->hasItem("Mining Sensors")){
 
				cout << wordWrap("Thankfully due to our upgraded sensors we can navigate this without losing much time.") << endl; 
				
			} else {
				cout << wordWrap("We might lose more time than we can afford navigating this storm....") << endl; 
				cout << "--You have lost 2 hours"; 
				player->timer-=2; 
			}
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
}; 

//sector 5
bool sec05RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "There are reports of strange sightings here on the edge of mapped space..."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			cout << wordWrap("There is a strange ship on sensors captain! They seem to be broadcasting a message")<<endl; 
			cout << "======Message=======" <<endl; 
			cout << wordWrap("^#$SNAL#RNFCJ<KLAQWREO{P)Q!@NFN A<>SMJFN>ASFKQ@OIRTPWQE#PRFPQUI CA<!*&@&#@&^#@QWED !YU#WEDR QPC WEOSDC QOIWD}")<<endl<<endl; 	 
			cout << "What should we do Captain?" <<endl;
			choice = getAction("reply", "leave"); 
			
				if (choice == "reply"){
					
					cout << wordWrap("...We do not understand your communication, please know we mean you no harm...") << endl; 
					cout << ".."<< endl; 
					cout << "..."<< endl; 
					cout << "The ship has ejected something into space, maybe they want us to take it, what do you want to do?"<< endl; 
					
					choice = getAction("take", "leave");
					if(choice == "take") {
						
						cout << wordWrap("It appears to be a communications device.") << endl;
						cout << wordWrap("Translation Device: We are pleased to offer you this gift. The people of this sector need to know we bring word of our great savior! He is the one true being and all who.....") << endl << endl; 
						cout << wordWrap("Thank you... We we surely let the rest of the sector know.") << endl; 
						player->addItem("Translation Device"); 
						sec->currentStoryStep++; 
					} else {
						if(!sec->hasItemInSector("Translation Device")){
							sec->dropItem("Translation Device"); 
						}	
					}	
				}
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 6
bool sec06RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice;
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector is known for the psychics and memory transfer devices loved by the Ulen"; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			cout << wordWrap("This would be a great place to obtain a memory crystal from Private Huln, perhaps it can help in his defense. There are several communications asking if we are looking to buy. What should we do Captain?")<<endl; 			 	
				choice = getAction("buy", "leave"); 
			
				if (choice == "buy"){
					
					cout << wordWrap("A memory crystal of a possible crime? I would be happy to help! Perhaps you will even tell your friends yes? Here, here, lets get started.") << endl; 
					cout << ".."<< endl; 
					cout << "..."<< endl; 
					cout << "...."<< endl; 
					cout << wordWrap("Your crystal is ready! Thank you for the business.")<<endl; 
					 
					player->addItem("Memory crystal");
					sec->currentStoryStep++; 
				}
			 	
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
				cout << sec->description << endl; 
				cout << "--Press Enter to continue--" <<endl;
				cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 7
bool sec07RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "The sector is strangely quite. It looks like any other sector but the communications traffic is absent..."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
		//	 >  
			cout << sec->description << endl; 
			if (player->hasItem("Terran Arms dealer passphrase")){
			 	cout << wordWrap("This looks like a place an arms dealer would frequent, we have a passphrase that might draw their attention. What should we do Captain?") <<endl; 
			 	
				 string choice = getAction("broadcast", "leave"); 
			
				if (choice == "broadcast"){
					
					cout << wordWrap("Captain there is a large ship headed our direction! They are asking us what we want to purchase!") << endl; 
					cout << ".."<< endl; 
					cout << "..."<< endl; 
					cout << "...."<< endl; 
					cout << wordWrap("I see, you want to gather evidence to help your crewmate. You understand that I cannot give testimony. But I might be able to 'pay' you for information on how you came about that passphrase.")<<endl; 
					cout << ".."<< endl; 
					cout << wordWrap("The telepath world, of course. Looks like we will have to give that sector a wider area. Thanks for help captain, here, for your troubles.") <<endl; 
					player->addItem("Evidence - Terran currency");
					player->removeItem("Terran Arms dealer passphrase"); 
					
					sec->currentStoryStep++; 
				}
			 	
			 }
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 8
bool sec08RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This area of space is known for the secretive nature of an alien race. No one has ever learned their language"; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			if (player->hasItem("Translation Device")){
				cout<< wordWrap("Translation Device: Shhhh go away we are hiding...")<<endl;
			} else {
				cout<< wordWrap(" We are recieving a faint transmission: 1651 46568 4983 4685469 84368 36941685 894654 49685 45 9 87 3")<<endl;
			}
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	 
	}
	
	return success; 
}; 

//sector 9
bool sec09RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			sec->eventItem = ""; 
			output << "This sector has an enemy ship! We should run away or be prepared to fight."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			 
			 if (player->hasItem("Beam Cannon")){
			 	cout << wordWrap("Captain should we fight or run?") <<endl; 
			 	string choice = getAction("fight", "run"); 
			
				if (choice == "fight"){
					cout << wordWrap("The enemy is no match for our weapons, we easily destroy the ship.")<<endl; 
					
					if(sec->eventItem != ""){
						cout << wordWrap("...it seems we get to pick up an object we lost last time we fought.")<<endl; 
						player->addItem(sec->eventItem); 
						sec->eventItem = ""; 
					}
										
				} else {
					cout << wordWrap("The enemy ship can see we are armed and does not seem willing to follow us.")<<endl;
				}
			 	
			 } else {
			 	cout << wordWrap("The enemy ship is firing and we have no weapons to defend ourselves! We need to run away.")<<endl;
			 	
				if (sec->eventItem == ""){
					cout << wordWrap("..")<<endl;
			 		cout << wordWrap("...")<<endl;
			 		cout << wordWrap("We have been hit and some of our cargo has been lost!")<<endl;
			 	
			 		sec->eventItem = player->inventory[(player->inventory.size()-1)];
			 		player->removeItem(sec->eventItem);
				} 		
			 }
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
}; 

//sector 10
bool sec10RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "There appears to be a Parvc ship floating in space here, the engines and lifesupport seem intact. It must be something else...."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			 if (player->hasItem("Letter of Introdocuton to Liool")){
			 	cout << wordWrap("The Parvc ship might be the one we are looking for, but they are not responding. What should we do captain?") <<endl; 
			 	
				 string choice = getAction("board", "leave"); 
			
				if (choice == "board"){
					
					cout << wordWrap("Captain the entire crew is unconsious! It seems they had an alergic reaction to the foodstuffs they were trading. They almost made it back to the medical facility in the next sector before they all fell unconcious. We can wake them all with the medications we have in our clinic.") << endl; 
					cout << ".."<< endl; 
					cout << "..."<< endl; 
					cout << "...."<< endl; 
					cout << wordWrap("Thank you for saving my ship Captain! My name is Liool and you have earned the favor of the guild today...oh a letter of introduction? I see so you have been looking for me. In that case I would be happy to help you out as thanks for saving my crew. I will send you everything I know.")<<endl; 
					
					
					player->removeItem("Letter of Introdocuton to Liool"); 
					player->addItem("Alibi -  witness statement");
					sec->currentStoryStep++; 
				}
			 	
			 }
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << wordWrap("This sector contains no habitable planets and does not see many ships pass through") << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 11
bool sec11RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
		output << "This sector is full of old wreckage from a past battle."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			if(!player->hasItem("Beam Cannon")){
				cout<< wordWrap("There seems to be some useful salvage in the wreckage. Should we inspect it further?")<<endl; 
				choice = getAction("inspect", "leave");
				if(choice == "inspect"){
					cout << wordWrap("We managed to find an old model beam cannon among the wreckage. While it is old it should give us some protection.")<<endl; 
					player->addItem("Beam Cannon"); 
					sec->currentStoryStep++; 
				}
						}
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 12 

bool sec12RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This system is home to strange solar activity.";
			output << ""; 
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			cout << wordWrap("Captain there is a strange reading coming from the starboard side of the ship. I see nothing on the sensors but there is a massive amount of energy coming from a meter wide patch of space. All sensors are recording but we do not know what to make of it.")<<endl;
			player->addItem("Recorded dark energy data"); 
				sec->currentStoryStep++; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
			
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 13
bool sec13RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
		output << "We are being contacted by a trader named Joilen"; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			if (player->hasItem("100 Credits")){
				cout << wordWrap("I have numerous wares for sale. Please take some time to look at my supplies and let me know how that phase columnator is workin out. I have translators, sensors, and even weapons for purchase. What would you like to buy?") << endl; 
				choice = getAction("leave", "translator", "sensors", "weapons"); 
				if(choice == "translator"){
					cout << wordWrap("That will be 100 credits, enjoy!") << endl; 
					player->addItem("Translation Device"); 
					player->removeItem("100 Credits");
				} else if(choice == "sensors"){
					cout << wordWrap("That will be 100 credits, enjoy!") << endl; 
					player->addItem("Mining Sensors"); 
					player->removeItem("100 Credits");
				} else if (choice == "weapons"){
					cout << wordWrap("That will be 100 credits, enjoy!") << endl; 
					player->addItem("Beam Cannon"); 
					player->removeItem("100 Credits");
				}
				
			}else {
				cout << "If you have credits I have wares!" << endl; 
			}
			
			cout << "--Press Enter continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
}; 

//sector 14
bool sec14RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector is known for its shipyards and manufacturing centers. I think we picked up a transfer capacitor from one of the merchants who frequents this sector."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			if(player->hasItem("Precious Metal Asteriod")){
				cout << wordWrap("We might be able to sell the Precious Metal Asteriod here, they are always looking for raw materials. What should we do?")<<endl;
				choice = getAction("sell", "leave");
				if (choice=="sell"){
					cout << wordWrap("It seems like we were right. The shipyards were eager for the precious metals needed to build the more advanced systems and were willing to pay us in credits") << endl; 				
					player->addItem("100 Credits"); 
				}
			}
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
}; 

//sector 15
bool sec15RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
		output << "This sector is home to a famous medical space station. They may be able to help identify the blood on Private Hulns clothing."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			
			
			if(player->hasItem("Bloody clothing sample")){
				cout << "Would you like to have a doctor take a look at the blood?" << endl;
				
				string choice = getAction("yes", "no", "exit");
				
					if(choice == "yes"){
						cout << wordWrap("You take Huln's bloody clothing to an expert in xenogenomics and wait as he inspects the blood. He seems surprised when his machines beep and reveal that the blood is in fact Ulen -which could not have come from the victim.") << endl;
						cout << endl <<wordWrap("More interesting he tells you that the sample belongs to a local individual, a Cree, who is know to travel within the lowest mapped quadrent!")<<endl; 
						
						player->removeItem("Bloody clothing sample");
						player->addItem("Contact info for Cree"); 
						sec->currentStoryStep++; 
					} else {
						cout << "We should be leaving..."<<endl;
					}
				
			}
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << wordWrap("Thanks to the information gathered at this medical station the last time you visited you found a lead to follow.")<<endl; 
			cout << "--Press Enter to continue--" <<endl << endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 16
bool sec16RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice;
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector is known for the gossip found at all the local shops. It seems a world full of telepaths is terrible at keeping secrets."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			cout << wordWrap("This might be the best place to gather information, the best place to start is the merchant who sold the subspace modulator to our crewman.") <<endl; 
			choice = getAction("investigate", "leave"); 
			
			if (choice == "investigate"){
				cout << wordWrap("...after hours of asking around you manage to hear a rumor that might prove useful, there is a Terran arms dealer that works in an upper sector just 3 jumps from here. Using a special passphrase you can arrange a meeting.") << endl; 
				player->addItem("Terran Arms dealer passphrase"); 
				sec->currentStoryStep++; 
			}
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

///////
//Starting space
///////
//sector 17
bool sec17RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output;
	string action;  
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "The trial is about to start..."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:	
		case 2: //left one piece of evidence
		case 3: //left two pieces of evidence
		case 4: //left three pieces of evidence
			cout << sec->description << endl; 
			cout << "If you have any evidence to offer please do so here."<<endl;
						
			if(player->hasItem("Memory crystal")){
				cout << "The accused is allowed a memory crystal" << endl; 
				cout << "Would you like to hand over the crystal as evidence?"<<endl; 
				choice = getAction("yes", "no");
				if(choice == "yes"){
					player->removeItem("Memory crystal"); 
					sec->currentStoryStep++; 
				}
				 
			} 
			if(player->hasItem("Evidence - Terran currency")){
				cout << "This is the currency used to buy the weapon! It even has fingerprints..." << endl; 
				cout << "Would you like to hand over the currency as evidence?"<<endl;
				choice = getAction("yes", "no");
				if(choice == "yes"){
					player->removeItem("Evidence - Terran currency"); 
					sec->currentStoryStep++; 
				}
			}
			if(player->hasItem("Blood - blood sample from Cree")){
				cout << "This blood matches what we found, and it proves the victim is alive!" << endl; 
				cout << "Would you like to hand over the blood sample as evidence?"<<endl; 
				choice = getAction("yes", "no");
				if(choice == "yes"){
					player->removeItem("Blood - blood sample from Cree"); 
					sec->currentStoryStep++; 
				}
			}
			if(player->hasItem("Alibi -  witness statement")){
				cout << "This alibi means Huln was not in the area..." << endl; 
				cout << "Would you like to enter the alibi as evidence?"<<endl; 
				choice = getAction("yes", "no");
				if(choice == "yes"){
					player->removeItem("Alibi -  witness statement"); 
					sec->currentStoryStep++; 
				}
			}
			if(sec->currentStoryStep >= 5){
				cout << wordWrap("The trial is starting! Please return to your ship and gather what you need to make your case") << endl; 
			}
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
	

		break; 
		default:  //run this if ths story is over and 4 pieces of evidence have been left
			cout << "As you approach the courthouse you see everyone leaving the building."<<endl;
			player->gameOver = true; 
		break; 	
	}
	
	return success; 
}; 

//sector 18
bool sec18RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice;
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector is known for the Parvc trade guilds. Anyone that wants to trade in the empire must go through a registered guild."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			cout << wordWrap("This might be the best place to track down the Parvc trader Private Huln was speaking to.") <<endl; 
			choice = getAction("investigate", "leave"); 
			
			if (choice == "investigate"){
				cout << wordWrap("...after hours of asking around you manage to find a lead. It seems there were only a handful of parvc traders on the planet at the time and most of them run a regular route from here to the upper sectors to trade in exotic foods from the fringe worlds.") << endl; 
				player->addItem("Lead on the Parvc"); 
				sec->currentStoryStep++; 
			}
						
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get(); 
		break; 	
	}
	
	return success; 
}; 
//sector 19
bool sec19RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector is along a busy shipping course"; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << wordWrap("There is a ship sending out a distress beacon. They are low on parts and need help to repair their ship") << endl; 
			
			if(player->hasItem("Various spare parts")){
				cout << wordWrap("We have some spare parts we could share, what would you like to do?") << endl; 
				choice = getAction("help", "leave"); 
				if (choice == "help"){
					player->removeItem("Various spare parts"); 
					cout << "The other ship's Captain is greatful and wishes us luck in our mission." << endl; 
					sec->currentStoryStep++; 
				}
			}
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 20
bool sec20RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector is full of testing fields for new technologies"; 
		
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			cout << wordWrap("There is a researching frantically sending us a request to test his new equipment. Apparently he has been looking for a heavily sheilded ship to test out his new force field generator and thinks we would be a great option. What would you like to do?")<<endl; 
				choice = getAction("help", "leave"); 
				if (choice == "help"){
					player->addItem("Enhanced Shields"); 
					cout << wordWrap("Our ship is now equiped with better shields which should prove useful in open space. Unfortunatly our ship is now also chared on the port side.")<< endl; 
					sec->currentStoryStep++; 
				}
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 21
bool sec21RunFunction(Sector *sec, Player* player){
bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			sec->eventItem = ""; 
			output << "This sector has a small squadron of enemy fighters! We should run away or be prepared to fight."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			 
			 if (player->hasItem("Enhanced Shields")){
			 	cout << wordWrap("Thanks to our upgraded shields the enemy fighters weapons no longer have the firepower to damage our ship. What should we do?") <<endl; 
			 	string choice = getAction("fight", "leave"); 
			
				if (choice == "fight"){
					cout << wordWrap("The enemy is no match for our ship")<<endl; 
					
					if(sec->eventItem != ""){
						cout << wordWrap("...it seems we get to pick up an object we lost last time we fought.")<<endl; 
						player->addItem(sec->eventItem); 
						sec->eventItem = ""; 
					}
										
				} else {
					cout << wordWrap("The enemy ships know they cannot hurt us and are running away.")<<endl;
				}
			 	
			 } else {
			 	cout << wordWrap("The enemy ships are firing and our shields are no match. We need to run away.")<<endl;
			 	
				if (sec->eventItem == ""){
					cout << wordWrap("..")<<endl;
			 		cout << wordWrap("...")<<endl;
			 		cout << wordWrap("We have been hit and some of our cargo has been lost!")<<endl;
			 	
			 		sec->eventItem = player->inventory[(player->inventory.size()-1)];
			 		player->removeItem(sec->eventItem);
				} 		
			 }
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
}; 

//sector 22
bool sec22RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			sec->dropItem("Precious Metal Asteriod"); 
			output << "This sector is known for metallic asteriods"; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
		
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();	
		break; 
		default:  //run this if ths story is over
		
		break; 	
	}
	
	return success; 
}; 

//sector 23
bool sec23RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector lies adjacent to an asteriod field. There are few ships around and those that are present belong to miners trying to gather what minerals they can from the metal rich rocks."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
				cout << "Captain!" << endl; 
				cout << wordWrap("We are detecting the a mining ship asking for assitance, apparently they need a hand breaking apart an asteriod. What would you like to do?")<<endl;
				choice = getAction("help", "leave"); 
				if (choice == "help"){
					cout << wordWrap("Thank you for agreeing to help! We need to remove a piece of this asteriod but lack the firepower to do so. We can upgrade your sensors to scan through the rock if you can use your ship to help pull the metal core free." )<< endl;
					player->addItem("Mining Sensors"); 
					cout << wordWrap("...")<<endl;
					cout << wordWrap("Thank you for the help! You can keep the modified sensors, this core is all that we need.") << endl; 
					
					sec->currentStoryStep++; 
				} else {
					cout << "We should leave, there is not much time before the trial." << endl; 
				}
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();	
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 24
bool sec24RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector contains a busy shipping lane. It is best to keep moving to avoid collisons."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			if(player->hasItem("Contact info for Cree")){
				cout << "Captain!" << endl; 
				cout << wordWrap("We are detecting the ship belonging to the Ulen named Cree. What would you like to do?")<<endl;
				string choice = getAction("contact", "ignore"); 
				if (choice == "contact"){
					cout << "--We have recieved acknowledgement of our transmission --" << endl <<endl; 
					cout << wordWrap("My name is Cree, captain of the ship Qllzdrict, is there something in particular you are looking for?")<< endl; 
					cout << wordWrap("A murder? I have no idea about that! But I was just near that station. I remember tripping in the trade district, Terrans and your high gravity hrmph! I do remember leaving some blood where I fell. I would be happy to give a sample and a statement saying I am not dead.") << endl; 
				
					player->addItem("Blood - blood sample from Cree"); 
					sec->currentStoryStep++; 
				} else {
					cout << "We should leave before we interfere with the shipping lanes." << endl; 
				}
				
			}
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << wordWrap("It appears Cree is no longer in this sector. We should leave before we interfere with the shipping lanes.") << endl; 
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 

//sector 25
bool sec25RunFunction(Sector *sec, Player* player){
	bool success = true; 
	stringstream output; 
	string choice; 
	switch(sec->currentStoryStep){
		case 0:  //case zero is called upon initialization so it contains the default text of the story and sets it accordingly
			sec->currentStoryStep++; 
			
			output << "This sector houses a number of research stations looking to scan the surrounding sectors and understand our galaxy."; 
			
			sec->description = wordWrap(output.str());
		break; 
		case 1:
			cout << sec->description << endl; 
			
			if(player->hasItem("Recorded dark energy data")){
				cout << wordWrap("I am sure someone here would be interested in our (Recorded dark energy data) perhaps we could donate our data to someone researching dark energy. What do you want to do captain?") << endl; 
				choice = getAction("donate", "leave"); 
				if(choice == "donate"){
					cout << wordWrap("You manage to find a scientist who is overjoyed to recieve the data. He is not able to give you much in compensation but can find a few credits to reward your efforts.")<<endl;					
					player->removeItem("Recorded dark energy data");
					player->addItem("100 Credits"); 
					sec->currentStoryStep++; 
				}
				
			}
			
			
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 
		default:  //run this if ths story is over
			cout << sec->description << endl; 
			
			cout << "--Press Enter to continue--" <<endl;
			cin.get();
		break; 	
	}
	
	return success; 
}; 
