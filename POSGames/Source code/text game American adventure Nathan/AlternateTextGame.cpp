/*
This program is a text based game that is played around America. The player is tasked with collecting 4 gems and they only have 30 days 
to complete the job. Each trip through the loop is considered a day and if a player goes directly from one side of the country to the other
it counts as 2 days. Some gems will be easy to retrieve while others will be more difficult. If the player hasn't been killed... and they
collect all 4 gems, they are to meet their boss in San Diego to give him the gems. If the player is able to collect all the gems and
not get killed in the process... Then they will be victorious.
*/

#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include<bits/stdc++.h>
using namespace std;

int main() {
	srand(time(NULL));
	string loc[4][4];
   	string longLoc[4][4];
   	string obj[10];
   	int locobj[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   	int numobj = 5;
   	int num1 = rand()%3;
	int num2 = rand()%3;
   	int x = num1, y = num2, time = 0, current=0;
   	string choice = "";
   	bool receivedLetter = false;
   	bool leave = false;
   	bool stolenEmerald = false;
   	bool aVisited = false;
   	bool cFought = false;
   	bool objFour = false;
   	bool objFive = false;
   	bool objSix = false;
   	bool objSeven = false;
   	bool objEight = false;
   	bool drop = false;
   
   // Location setup as a grid
   loc[0][0] = "in Alaska";
   loc[0][1] = "in YellowStone National Forest";
   loc[0][2] = "deep in Lake Michigan";
   loc[0][3] = "in Bangor Maine";
   loc[1][0] = "in Seattle Washington";
   loc[1][1] = "in Northwest Nebraska";
   loc[1][2] = "in Chicago";
   loc[1][3] = "in Philidelphia";
   loc[2][0] = "in San Fransisco which is beautiful this time of year";
   loc[2][1] = "in the Rocky Mountains in Colorado";
   loc[2][2] = "in Moon Shining country... Kentucky";
   loc[2][3] = "at Norfolk Military Base in Norfolk, Virgnia";
   loc[3][0] = "in San Diego";
   loc[3][1] = "in the epically hot El Paso, Texas";
   loc[3][2] = "seeing Mardi Gras in New Orleans";
   loc[3][3] = "in Port Canaveral, Florida.... Was the Buzz Aldren?";
   
   // Longer description
   longLoc[0][0] = "Alaska is quite cold but people come here to find riches";
   longLoc[0][1] = "Is that lava? I think I heard something once about a super volcano!!";
   longLoc[0][2] = "There are lots of fish in the sea";
   longLoc[0][3] = "Maine... What's even in Maine?";
   longLoc[1][0] = "Rain.. Rain... Go Away... Coffee... Need more Coffee!!";
   longLoc[1][1] = "I hear a lot of mooing.. Yet I can't see any cows. It's so flat here.. You can hear for miles";
   longLoc[1][2] = "Wrigley Field is such a beautiful site!.... What was that noise?";  
   longLoc[1][3] = "City of Brotherly Love?! I think not... That dude threw his Philly Cheesesteak at me!"; 
   longLoc[2][0] = "The Golden Gate Bridge is bigger than I expected";
   longLoc[2][1] = "While searching for somewhere warm, you stumble upon a HUGE blast door.";
   longLoc[2][2] = "Man I love Moon Shine!";
   longLoc[2][3] = "USS Ronald Reagan... Tours start every hour";
   longLoc[3][0] = "There sure is a lot of traffic around here";
   longLoc[3][1] = "It's SOOOOO Hot!!!";
   longLoc[3][2] = "Mmmm smells like booze and urine... There sure are a lot of beads around";
   longLoc[3][3] = "'Home of the Enormous Emerald found on the moon. It is the one and only of its kind'";
   
   // Objects used in the game that can be picked up and dropped: -1 in inventory, -999 is gone
   // puzzle objects are first in line
   obj[0] = "Perfectly Pink Diamond";
   obj[1] = "Beautifully Blue Sapphire";
   obj[2] = "Enormous Emerald";
   obj[3] = "Righteously Red Ruby";
   obj[4] = "Snow";
   obj[5] = "Philly Cheesesteak";
   obj[6] = "glass of Moon Shine";
   obj[7] = "string of Beads";
   obj[8] = "Souvenir Coffee Mug";
   
   cout << "Welcome to the American Adventure"  << endl;
   cout << endl;
   cout << "There were 4 precious stones stolen from the Museum of Natural History 10 years ago." << endl << endl;
   cout << "I have been tasked with retrieving the stones but up until now, they were spread" << endl;
   cout << "all over the world. We have received news that they will all be in America for the next" << endl;
   cout << "month. Here are the keys to the jet. Go get our stones and not only will you be a national" << endl;
   cout << "hero but you will also receive 10 million dollars cash... Plus the Jet. Have fun and stay safe" << endl;
   cout << endl;
   cout << "When you have retrieved all the gems bring them to San Diego... I will be waiting at" << endl;
   cout << "the airport for you. Do NOT disappoint me! I am sending my most trusted man with you" << endl;
   cout << "to keep an eye on you. He will pose as your driver and will assist if possible." << endl;
   cout << endl;
   cout << "Remember, you only have 1 month to complete your mission! So you better get to it!" << endl;
   cout << "\nO yeah, just a hint. You can travel from one end of the country to the other directly" << endl;
   cout << "but beware that this will take 2 days with the limited range on the jet." << endl;
   cout << endl;
   cout << "Enter commands: N-North, S-South, E-East, W-West," << endl;
   cout << "L-Look, G-Get, I-Inventory, D-Drop or Q-Quit" << endl << endl;
   
   while (!((choice == "Q") || (time > 30))){
	   	cout << "\nYou are " << loc[x][y] << endl << endl;
	   	cout << "What next? (N,S,E,W,L,G,I,D,? or Q to Quit)" << endl << endl;
	   	cin >> choice;
	   	if(drop){
	   		if(choice != "D" && choice != "d"){
	   			cout << "You chose poorly. His henchmen pull out their guns and" << endl;
						cout << "gun you down before you have a chance to react..." << endl;
						cout << "YOU LOSE!!!!" << endl;
						choice = "Q";
			}	
		}
	   	
	   	if (choice == "N" || choice == "n"){
		      x--;  time++; 
		} else if (choice == "S" || choice == "s"){
			x++;   time++; 
		} else if (choice == "E" || choice == "e"){
		   y++;   time++; 
		} else if (choice == "W" || choice == "w"){
		   y--;   time++; 
		} else if (choice == "?"){  
		   cout << endl << "Enter commands: N-North, S-South, E-East, W-West, L-Look, G-Get," << endl;
	       cout << " I-Inventory, D-Drop or Q-Quit" << endl << endl;
		}
		//It may be beneficial to travel directly across the map but it will cost them 2 days.
		if (x > 3){
			x = 0;
			time++;
		}
    	if (x < 0){
			x = 3;
			time++;
		}
    	if (y > 3){
			y = 0;
			time++;
		}
    	if (y < 0){
			y = 3;
			time++;
		}
		if (time > 1){ 
			cout << "It is Day " << time << ". You have " << 30-time << " days left." << endl;
		} else {
			cout << "It is Day " << time << ". You have " << 30-time << " days left." << endl;
		}//This is where the majority of the game is handled. The reason for this is because the player needs to actually "look"
		 //to find what they are looking for. No need to look if you have already been there and either picked up what was there
		 //or realized there is nothing there to begin with.
		if (choice == "L" || choice == "l"){
			cout << "You look around." << endl;
			cout << endl << longLoc[x][y] << endl;
			if (loc[x][y] == "in Chicago" && !cFought){
	    		cout << "(L)ook Closer, (K)eep Moving" << endl;
	    		cin >> choice;
	    		if(choice == "L" || choice == "l"){
	    			cout << "Investigating Wrigley... You see Anthony Rizzo's wife with the biggest Pink Diamond on her hand" << endl;
	    			cout << "You instantly realize that you are going to have to go through Riz or run" << endl;
	    			cout << "(F)ight, (C)hallenge to Home Run Derby, (T)ell him the Story";
	    			cin >> choice;
	    			if (choice == "C") {
	    				cout << "Riz beats you 215 - .5.... He felt bad and let a ground rule double count as a \nhalf of a home run.";
	    				cout << "'A deal is a deal... You don't get the Diamond'" << endl;
					} else if (choice == "F") {
						cout << "(P)unch, (K)ick, (B)ite" << endl;
						cin >> choice;
	    				//transform(choice.begin(), choice.end(), choice.begin(), ::toupper);
	    				if (choice == "P" || choice == "p" || choice == "K" || choice == "k" || choice == "B" || choice == "b") {
	    					cout << "Your attack misses... Riz throws ones punch and knocks you out cold." << endl;
	    					cFought = true;
						}
					} else if (choice == "T" || choice == "t") {
						cout << "\n'You know... I wouldn't normally do this... But I appreciate your honesty... Here you go" << endl;
				    	cout << "\nAnthony Rizzo offers you " << obj[0] << "." << endl;
				    	locobj[0] = -1;
					}
				} else {
					cout << "You are a scaredy cat and run away!!" << endl;
				}
			} else if (loc[x][y] == "in Chicago" && cFought){
				cout << "For some reason I head back to Wrigley and of course the first person I see is... Anthony Rizzo" << endl;
				cout << "He approaches me and says 'You back to fight again or you want to tell me what that was all about?!" << endl;
				cout << endl;
				cout << "(T)ell him the Story, (F)ight again" << endl;
				cin >> choice;
				if(choice == "T" || choice == "t"){
					cout << "\n'You know... I wouldn't normally do this... But I appreciate your honesty... Here you go" << endl;
				    cout << "\nAnthony Rizzo offers you " << obj[0] << "." << endl;
				    locobj[0] = -1;
				} else {
					cout << "Rizz is a nice guy but he isn't a fan of stupidity and doesn't even wait for you to swing.. It all goes dark" << endl; 
				}
			} else if (loc[x][y] == "in Northwest Nebraska"){
				if(!receivedLetter){
					cout << "A mysterious woman appears out of no where. Your pants have seemed" << endl;
					cout << "to have become damp. 'Uhh... I spilled some water on them.'" << endl;
					cout << "She hands you a note and then disappears." << endl;
					cout << "(O)pen note, Keep (M)oving, (B)urn the Note" << endl;
					receivedLetter = true;
					cin >> choice;
					if(choice == "O" || choice == "o"){
						cout << "They have found me! I don't have much time. I hid the " << obj[1] << endl;
						cout << "in Locker #227 in the visitor center of Norfolk Military base" << endl;
						cout << "Go there and you enter the combination '722' to access the locker" << endl;
						cout << "Now swallow this letter and hurry on your way" << endl;
						cout << endl;
						cout << "(S)wallow Letter, (B)urn Letter" << endl;
						cin >> choice;
						if(choice == "S" || choice == "s"){
							cout << "\nYou swallow the letter and begin your trek to Florida" << endl;							
						} else if (choice == "B" || choice == "b"){
							cout << "The fumes seem to be making me di...zz.....y....." << endl;
							cout << "Bad choice!! The paper contained a poison that is harmful " << endl;
							cout << "when inhaled but safe when swallowed. Unfortunately...." << endl;
							cout << "\nYOU LOSE!!!";
							choice = "Q";
						}
						
					} else if (choice == "B" || choice == "b"){
						cout << "The fumes seem to be making me di...zz.....y....." << endl;
						cout << "Bad choice!! The paper contained a poison that is harmful " << endl;
						cout << "when inhaled but safe when swallowed. Unfortunately...." << endl;
						cout << "\nYOU LOSE!!!";
						choice = "Q";
					} else {
						cout << "\nYou refused the note and kept moving. When you get back to the car" << endl;
						cout << "your driver asks about the note. You inform him that you refused note" << endl;
						cout << "and your driver informs you that it was the key to finding one of the gems." << endl;
						cout << "\n'Unfortunately sir.. Without that note, we cannot continue'" << endl;
						cout << "He turns and you see he has a gun in his hand... BOOM" << endl;
						cout << "\nYOU LOSE!!!";
						choice = "Q";
					}
				} else {
					cout << "\nWhy would I ever come back to boring ole Nebraska??" << endl;
				}
			} else if (loc[x][y] == "in Alaska" && !aVisited){
				cout << "Before you even step off the plane.. A gentleman comes running up to you" << endl;
				cout << "\n'I heard you were coming.. Hear take this " << obj[3] << ". It has been" << endl;
				cout << "nothing but bad luck for my family and we can't sell it because everyone" << endl;
				cout << "knows your bosses are looking for it and no one is stupid enough to buy it!'" << endl;
				cout << "\nYou reluctantly take it and continue on your way." << endl;
				aVisited = true;
				locobj[3] = -1;
			} else if (loc[x][y] == "at Norfolk Military Base in Norfolk, Virgnia"){
				cout << "You arrive on the jet and your driver brings you to the visitor center" << endl;				
				if(receivedLetter  && locobj[1] != -1){
					cout << "He instructs you to head inside to the lockers to locker 227" << endl;
					cout << "You head inside to locker 227 and try to remember the code..." << endl;
					while(!leave){
						cout << "\nEnter Code: ";
						cin >> choice;
						if(choice == "722"){
							cout << "You peak inside and find a " << obj[1] << endl;
							cout << "You add it to your inventory and continue your journey" << endl;
							locobj[1] = -1;
							leave = true;
						} else {
							cout << "The code is incorrect... (T)ry again or (L)eave" << endl;
							cin >> choice;
							if(choice == "L"){
								leave = true;
							}
						}
					} 			
				} else {
					cout << "You are unsure of the code and must continue on" << endl;
				}
			} else if (loc[x][y] == "in Port Canaveral, Florida.... Was the Buzz Aldren?"){
				cout << "'I never knew the sign referring to the Emerald was of such significance!'" << endl;
				if(!stolenEmerald){
					cout << "\nI call my driver on the phone and ask him to do a job for me" << endl;
					cout << "'I'm going to need you to use your 'skills' and get that" << endl;
					cout << "Emerald for me.. He begins to protest but I hold up my hand" << endl;
					cout << "and say, 'I have been at this for " << time << " days with almost" << endl;
					cout << "zero sleep. You can handle this one! I promise that I will get" << endl;
					cout << "the rest!' Reluctantly, he agrees and heads to get the Emerald" << endl;
					cout << endl;
					cout << "A few hours later, I wake up with a jolt to him slamming the jet" << endl;
					cout << "door and screaming 'I'm getting us out of here! I wouldn't come" << endl;
					cout << "back if you can help it' I thought about asking what he did to" << endl;
					cout << "get the Emerald but I didn't want to know.. 'Let's go' is all" << endl;
					cout << "I could think to say. 'Here you go' he says and goes to the cockpit" << endl;
					x--;
					y--;
					time += 2;
					cout << endl;
					cout << "'We got the Emerald but we lost a 2 days getting away from there" << endl;
					cout << "and making sure we weren't tracked by radar or other means.. Sorry'" << endl;
					locobj[2] = -1;
					stolenEmerald = true;
				} else {
					cout << "My 'driver' decided to run in to the bathroom. When he returned" << endl;
					cout << "to the jet and closed the door, I woke up and peaked out the window" << endl;
					cout << endl;
					cout << "'Were you followed back to the jet after you took the Emerald!?'" << endl;
					cout << "I ask. 'Of course not!' he responds. 'Then why are there police" << endl;
					cout << "surrounding the jet!?' I retort. He responds with, 'Well you" << endl;
					cout << "probably been smart enough to know not to come back to the scene" << endl;
					cout << "of the crime.... Sucks to suck!'" << endl << endl;
					cout << "Next thing I know flash bangs and smoke grenades flying through the" << endl;
					cout << "windows. It becomes tough to breathe......" << endl;
					cout << endl;
					cout << "I wake up in handcuffs... Looks like someone recognized my him and called the police" << endl;
					cout << "YOU LOSE!!!!!" << endl;
					choice = "Q";
				}
			} else if (loc[x][y] == "in San Diego"){
				cout << "You open the door to the jet and step out and he is somehow standing" << endl;
				cout << "perfectly at the bottom of the last step. 'How does he always do that?'" << endl;
				cout << "I think to myself... 'Do you have the gems!?' He asks sternly." << endl;	
				if(locobj[0] == -1 && locobj[1] == -1 && locobj[2] == -1 && locobj[3] == -1){
					cout << "\n'I see you have all the gems.. I am being watched! Tomorrow morning'" << endl;
					cout << "You will open the door to the jet and (D)rop your bag. I will lose my tail." << endl;
					cout << "If you do anything but drop the gems... You are DEAD!'" << endl;
					cout <<	"You only have 2 choices.. (R)un or (D)rop.. Choose wisely" << endl;
					cin >> choice;
					if(choice == "D" || choice == "d"){
						drop = true;
					} else {
						cout << "You chose poorly. His henchmen pull out their guns and" << endl;
						cout << "gun you down before you have a chance to react..." << endl;
						cout << "YOU LOSE!!!!" << endl;
						choice = "Q";
					}
				} else {
					cout << "\n'Sorry sir.... I assure you.. I will have them for you soon...'" << endl;
					cout << "'You better hurry... Tick tick tick... Why are you still standing" << endl;
					cout << "here talking to me!?!? Get moving! Come back when you have my gems'" << endl;
					cout << endl;
					cout << "As always... A chill shoots up my spine and I am on my way." << endl;
					cout << endl;
				}
			}
		} //Loops through your inventory that you have and if it checks to see if the locobj which is how I chose to check if a certain
		  //obj[] was CURRENTLY in the inventory. If if the locobj equals -1 then that means the associated obj[] is currently in inventory. 
		else if (choice == "I" || choice == "i"){
			for (int i=0;i<=8;i++){
				if(locobj[i] == -1){
					cout << obj[i] << endl;
				}
			}
		} //My items are specific to location, so I hardcoded where the player has to be to pick things up. 
		else if (choice == "G" || choice == "g"){
			cout << "You pick up a ";
			if(loc[x][y] == "in Philidelphia" && !objFive){
				cout << obj[5] << endl;
				locobj[5] = -1;
				objFive = true;
			} else if(loc[x][y] == "in the Rocky Mountains in Colorado" && !objFour){
				cout << obj[4] << endl;
				locobj[4] = -1;
				objFour = true;
			} else if(loc[x][y] == "in Moon Shining country... Kentucky" && !objFive){
				cout << obj[6] << endl;
				locobj[6] = -1;
				objSix = true;
			} else if(loc[x][y] == "seeing Mardi Gras in New Orleans"){
				cout << obj[7] << endl;
				locobj[7] = -1;
				objSeven = true;
			} else if(loc[x][y] == "in Seattle Washington"){
				cout << obj[8] << endl;
				locobj[8] = -1;
				objEight = true;
			} else {
				cout << "whole lotta nothin" << endl;
			}
		} //The dropping part stumped me so I made it so they could be dropped but they wouldn't be there when the player comes back. 
		  //I suppose my justification for this is that more likely than not, if you dropped an item somewhere, it probably wouldn't be there
		  //days later when you come back.
		else if (choice == "D" || choice == "d"){
			cout << "You drop: " << endl;
			if(locobj[0] == -1 && locobj[1] == -1 && locobj[2] == -1 && locobj[3] == -1){	
				for(int z=0;z<4;z++){	
					cout << obj[z] << endl;	
				}
					cout << "\nA promise is a promise... He opens the briefcase and shows you the $10 million" << endl;
					cout << "\n'UH HUM... Aren't you forgetting something?' you say while nodding your head" << endl;
					cout << "towards the jet. 'Ahh, you have a great memory' He gives his man the nod and" << endl;
					cout << "he steps off the jet and says, 'It's all yours kid... Be on your way before I change your mind" << endl;
					
					cout << "YOU WIN!!!!!!!" << endl;
					return 0;			
			}			
			for(int i=0;i<10;i++){
				//cout << locobj[i] << endl;
				if(locobj[i] == -1){
					cout << obj[i] << endl;
					locobj[i] = 0;
				}
			}
		}//This checks to see if the use quits or dies and ends the game. 
		else if (choice == "Q" || choice == "q"){
			cout << "Ending Game - thanks for playing" << endl << endl;
			system("pause");
			return 0;
		}
	} if (time > 30){
		cout << "You have run out of time and your trusty side kick receives orders" << endl;
		cout << "to put you down... 'Sorry I have to do this' he says, then it all goes black" << endl;
		cout << "YOU LOSE!!" << endl;
	}
}
