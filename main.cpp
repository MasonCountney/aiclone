#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <climits>
#include "temp.h"
#include "calculator.h"

using namespace std;

void stringConv(string &xInput);

void clearBuffer();

int main()
{
	for(int i = 0; i < 70; i++)
		cout << endl;

	/* Checks for file with your name.
	 * Creates it if it doesn't exsist
	 */

	ifstream inf("gfName");
	string newName, name;

	if(!inf){
		system ("touch gfName");
		ofstream output("gfName");
		cout << "Hello! What is your name? ";
		getline(cin, newName);
		output << newName << endl;
		ifstream fs("gfName");
		name = newName;
	};
	
	getline(inf, name);

	bool stillGf = true;

	while(stillGf == true)
	{		

		cout << "[gfBot][~] ";
		string input;
		getline(cin, input);
		stringConv(input);

		//Conversational I/Os
		if(input == "hi")
			cout << "Hello, " << name << "." << endl;

		if(input == "how are you")
			cout << "I'm good how are you?" << endl;
		
		if(input == "how are you doing")
			cout << "I am doing well yourself?" << endl;
		
		if(input == "im fine thank you")
			cout << "Thats good! What did you do today?" << endl;

		if(input == "im good thank you")
			cout << "I'm glad! What did you do today?" << endl;

		if(input == "im ok")
			cout << "Don't be short with me Mister! What have you been up to lately" << endl;

		if(input == "im not feeling well")
			cout << "Oh no! Is there anything I can do to make you feel better?" << endl;

		if(input == "im feeling pretty down")
			cout << "Is there anything I can do to make you feel better?" << endl;
		
		if(input == "today i went to school")
			cout << "How did school go?" << endl;

		if(input == "i mainly worked on you")
			cout << "Did you add any cool new features I should know about?" << endl;
		
		//Functional I/Os
		if(input == "clear"){
			for(int i = 0; i < 70; i++)
				cout << endl;
		};
		
		if(input == "quit")
			stillGf = false;

		if(input == "exit")
			stillGf = false;

		if(input == "e")
			stillGf = false;

		if(input == "q")
			stillGf = false;
		
		if(input == "can you convert this temp"){
			temp();
			clearBuffer();
		};

		if(input == "can you convert this temperature"){
			temp();
			clearBuffer();
		};

		if(input == "convert this temp"){
			temp();
			clearBuffer();
		};

		if(input == "do my math"){
			calculator();
			clearBuffer();
		};

		if(input == "can you help me with math"){
			calculator();
			clearBuffer();
		};

	};	
	cout << "See you later!" << endl;
	return 0;
};



void stringConv(string &xInput){
	
	for( int i = 0; i < xInput.length(); i++){
		xInput[i] = tolower(xInput[i]);
	
		if(ispunct(xInput[i])){
			xInput.erase(i, 1);
		};
	};
}

void clearBuffer(){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}
