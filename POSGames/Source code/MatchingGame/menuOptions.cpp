#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>
#include <time.h>
#include <conio.h>
using namespace std;

int memory();
int memoryMatch();

void getBlue(int difficulty){
	if(difficulty == 1){
		system("Color 17");
		Sleep(1500);
		system("Color 07");
		Sleep(200);
	} else if(difficulty == 2){
		system("Color 17");
		Sleep(1200);
		system("Color 07");
		Sleep(150);
	}else if(difficulty == 3){
		system("Color 17");
		Sleep(800);
		system("Color 07");
		Sleep(100);
	}else if(difficulty == 4){
		system("Color 17");
		Sleep(500);
		system("Color 07");
		Sleep(75);
	} else if(difficulty == 5){
		system("Color 17");
		Sleep(350);
		system("Color 07");
		Sleep(50);
	} else if(difficulty == 6){
		system("Color 17");
		Sleep(250);
		system("Color 07");
		Sleep(50);
	} else {
		system("Color 17");
		Sleep(150);
		system("Color 07");
		Sleep(40);
	}
}
void getGreen(int difficulty){
	if(difficulty == 1){
		system("Color 27");
		Sleep(1500);
		system("Color 07");
		Sleep(200);
	} else if(difficulty == 2){
		system("Color 27");
		Sleep(1200);
		system("Color 07");
		Sleep(150);
	} else if(difficulty == 3){
		system("Color 27");
		Sleep(800);
		system("Color 07");
		Sleep(100);
	} else if(difficulty == 4){
		system("Color 27");
		Sleep(500);
		system("Color 07");
		Sleep(75);
	} else if(difficulty == 5){
		system("Color 27");
		Sleep(350);
		system("Color 07");
		Sleep(50);
	} else if(difficulty == 6){
		system("Color 27");
		Sleep(250);
		system("Color 07");
		Sleep(50);
	} else {
		system("Color 27");
		Sleep(150);
		system("Color 07");
		Sleep(40);
	}
}
void getRed(int difficulty){
	if(difficulty == 1){
		system("Color 47");
		Sleep(1500);
		system("Color 07");
		Sleep(200);
	} else if(difficulty == 2){
		system("Color 47");
		Sleep(1200);
		system("Color 07");
		Sleep(150);
	} else if(difficulty == 3){
		system("Color 47");
		Sleep(800);
		system("Color 07");
		Sleep(100);
	} else if(difficulty == 4){
		system("Color 47");
		Sleep(500);
		system("Color 07");
		Sleep(75);
	} else if(difficulty == 5) {
		system("Color 47");
		Sleep(350);
		system("Color 07");
		Sleep(50);
	} else if (difficulty == 6){
		system("Color 47");
		Sleep(250);
		system("Color 07");
		Sleep(50);
	} else {
		system("Color 47");
		Sleep(150);
		system("Color 07");
		Sleep(40);
	}
}
void getYellow(int difficulty){
	if(difficulty == 1){
		system("Color E7");
		Sleep(1500);
		system("Color 07");
		Sleep(200);
	} else if(difficulty == 2){
		system("Color E7");
		Sleep(1200);
		system("Color 07");
		Sleep(150);
	} else if(difficulty == 3){
		system("Color E7");
		Sleep(800);
		system("Color 07");
		Sleep(100);
	} else if(difficulty == 4){
		system("Color E7");
		Sleep(500);
		system("Color 07");
		Sleep(75);
	} else if(difficulty == 5){
		system("Color E7");
		Sleep(350);
		system("Color 07");
		Sleep(50);
	} else if(difficulty == 6){
		system("Color E7");
		Sleep(250);
		system("Color 07");
		Sleep(50);
	} else {
		system("Color E7");
		Sleep(150);
		system("Color 07");
		Sleep(40);
	}
}

int memory(){
	int playerChoice;
		cout << "1) Play Game" << endl;
		cout << "2) Back to Main" << endl;
		cin >> playerChoice;
		cin.clear();
		cin.ignore();
		system("cls");
		while(playerChoice != 1 && playerChoice != 2){
			//cout << "Invalid Entry! Try Again!" << endl;
			cout << "1) Play Game" << endl;
			cout << "2) Back to Main" << endl;
			cin >> playerChoice;
			cin.clear();
			cin.ignore();
		}
		if (playerChoice == 1){
			system("cls");
			memoryMatch();			
		} else {
		}
}

void colorMemory(){
	srand(time(NULL));
	cout << "The object of the game is to type back the correct color in the order it is shown to you.\n";
	cout << "To type in the color of the background, simply type the first letter of the color.\n\n";
	cout << "For example: (b) for blue, (r)ed, (g)reen, (p)urple.\n";
	cout << "The difficulty will increase every 5 rounds.\n" << endl;
	cout << "You will have 3 seconds to enter each letter. If you\n";
	cout << "do not enter a letter fast enough, you will lose!\n\nGood Luck!\n";
	system("pause");
	system("cls");
	//string colors[10] = { "Color 1", "Color 2", "Color 4", "Color 5"};
	int memoryStore[100];
	int memory[100];
	int loop = 1;
	int round = 1;
	int difficulty = 1;
	int getColor = rand()%4;
	bool error = false;
	string userChoice;
	int choiceConverted;
	
	//memoryStore[loop - 1] = getColor;
	while(!error){
		cout << getColor << endl;
		if (getColor == 4){
			getColor = 3;
		}		
		memoryStore[loop - 1] = getColor;	
		getColor = rand()%4;					
		for(int y=0; y<loop; y++){						
			memoryStore[y];			
			if(memoryStore[y] == 0){
				getBlue(difficulty);			
			} else if(memoryStore[y] == 1){
				getGreen(difficulty);			
			} else if(memoryStore[y] == 2){
				getRed(difficulty);			
			} else if (memoryStore[y] == 3){
				getYellow(difficulty);
			}			
		}
		for(int i=0; i<loop; i++){
			int numInput;
	    	clock_t start = clock();		    
		    cout << "Please enter you Choice: ";
		    while ( ! _kbhit() ) //Check for keyboard hit
		    {
		        //Check if 2 sec timer expired or not
		        if (((clock () - start)/ CLOCKS_PER_SEC ) >= 3) 
		        {
					system("CLS");
					goto IF;
		        }
		    }
			cin >> userChoice;		
			if(userChoice == "b" || userChoice == "B"){
				choiceConverted = 0;
			} else if(userChoice == "g" || userChoice == "G"){
				choiceConverted = 1;
			} else if(userChoice == "r" || userChoice == "R"){
				choiceConverted = 2;
			} else if(userChoice == "y" || userChoice == "Y"){
				choiceConverted = 3;
			} else {
				choiceConverted = -1;
			}
			IF:if(choiceConverted != memoryStore[i]){
				error = true;
				cout << "You made an incorrect guess or you ran out of time!" << endl;
				//cout << "Correct Number: " << memoryStore[i] << endl;
				//cout << "Your Guess: " << choiceConverted << endl;
				cout << "You made it to round " << round << endl << endl;
				system("pause");
				system("cls");
				cout << "1) New Game" << endl;
				cout << "2) Exit to Main Menu" << endl;
				int playerChoice;
				cin >> playerChoice;
				if(playerChoice == 1){
					system("cls");
					colorMemory();
				} else {		
					i = loop;		
				}	
			}			
		}
		system("cls");		
		loop++;	
		if (loop > 5){
			cout << "Congratulations! You completed Round " << round << "! Difficulty Increasing!" << endl;	
			system("pause");
			loop = 1;
			difficulty++;
		}	
		round++;
		system("cls");
	}
	system("Color 07");
}

int memoryMatch() {
	srand(time(NULL));
	int memory[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	int num = rand()%9;
	int memoryStore[100];
	int loop = 1;
	int round = 1;
	int difficulty = 1;
	int userChoice;
	bool error = false;
	
	while(!error){
			memoryStore[loop - 1] = memory[num];
			num = rand()%9;
			system("cls");
			for(int y=0; y<loop; y++){
				cout << "|-------|" << endl;
				cout << "|       |" << endl;
				cout << "|   " << memoryStore[y] << "   |" << endl;
				cout << "|       |" << endl;
				cout << "|-------|" << endl;
				if(difficulty == 1){
					Sleep(1500);
				} else if(difficulty == 2){
					Sleep(1200);
				} else if(difficulty == 3){
					Sleep(800);
				} else if(difficulty == 4){
					Sleep(500);
				} else if(difficulty == 5){
					Sleep(350);
				} else if(difficulty == 6){
					Sleep(250);
				} else {
					Sleep(150);
				}
			}	
			system("cls");								
			cout << "Type the number in order. After every number, press Enter and enter the next number" << endl;	
			cout << endl;		
			//Sleep(800);									
			for(int i=0; i<loop; i++){
				clock_t start = clock();		    
			    cout << "Please enter you Choice: ";
			    while ( ! _kbhit() ) //Check for keyboard hit
			    {
			        //Check if 2 sec timer expired or not
			        if (((clock () - start)/ CLOCKS_PER_SEC ) >= 3) 
			        {
			            system("CLS");
						goto IF;
			        }
			    }			
				cin >> userChoice;				
				IF:if(userChoice != memoryStore[i]){
					error = true;
					cout << "You made an incorrect guess or you ran out of time!" << endl;
					cout << "Correct Number: " << memoryStore[i] << endl;
					//cout << "Your Guess: " << userChoice << endl;
					cout << "You made it to round " << round << endl << endl;
					system("pause");
					system("cls");
					cout << "1) New Game" << endl;
					cout << "2) Exit to Main Menu" << endl;
					int playerChoice;
					cin >> playerChoice;
					if(playerChoice == 1){
						system("cls");
						memoryMatch();
					} else {		
						//i = loop;		
					}	
				}
			}			
			loop++;
			if (loop > 5){
				cout << "Congratulations! You completed Round " << round << "! Difficulty Increasing!" << endl;		
				system("pause");
				loop = 1;
				difficulty++;
			}	
			round++;
		}
	}
	
int main() {
	//srand(time(NULL));
	int userChoice;
	bool exit = false;
	while(!exit){
		cout << "----------Memory----------\n" << endl;
		cout << "Select a choice below to continue\n" << endl;
		cout << "1) Memory" << endl;
		cout << "2) Color Memory" << endl;
		cout << "3) Exit\n" << endl;
		cout << "---------------------------------" << endl;
		cout << "User Selection: ";
		
		cin >> userChoice;	
		
		while(userChoice != 1 && userChoice != 2 && userChoice != 3){
			  	cout << "Invalid Character(s). Try Again!" << endl;
			  	cout << "User Selection: ";
			  	cin >> userChoice;
			  }
		system("CLS");
		
		if(userChoice == 1){
			memory();
		}
		else if(userChoice == 2){
			colorMemory();	
		} 
		else if(userChoice == 3){
			exit = true;
		}	
	}
	return 0;
}
