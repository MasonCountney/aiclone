/*
 * Created By Yugen
 *
 */


#include <iostream>
#include <cmath>
#include <string.h>
#include <climits>

using namespace std;

void stringConv(string &xInput);

void clearBuffer();
void clearScreen();

void top(string input);
void bottom(string input);
void ascii(string zinput);

int main(){

	string iostr[][5]{

		/* Even row are inputs.
		 * Responses are the input row number plus 1.
	  	 */

		// Greetings
		{"hello", "hi", "howdy", "hola", "hey"},
		{"Hi!", "Howdy", "Hey", "Hola", "Hello"},

		// Greeting Questions
		{"how are you", "hows it going", "how are you doing", "test", "test"},
		{"I'm fine thanks", "Good youself?", "I'm doing well how about you", "Good", "Fine"},

		//Insults
		{"fuck you", "slut", "whore", "bitch", "cunt"},
		{"How could you say that!", "How rude.", "I know you are but what am I", "You're awful", "I'm sorry."}
	};

	string input;
	bool stillGf = true;
	clearScreen();

	while(stillGf = true){

		cout << "[gfBot][~] ";
		getline(cin, input);
		stringConv(input);
		clearScreen();

		srand(time(NULL));
		int rint = 0 + rand() % (5-0+1);

		for(int i = 0; i < 3; i++){
			for(int j = 0; j < 5; j++){
				if(input.compare(iostr[i*2][j]) == 0)
						ascii(iostr[i*2+1][rint]);
			};
		};
	};

	return 0;
}

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

void clearScreen(){
	for(int i = 0; i < 75; i++)
		cout << endl;
}

void top(string input){
	for(int i = 0; i < input.length(); i++)
		cout << "`";
}

void bottom(string input){
	for(int i = 0; i < input.length(); i++)
		cout << ",";
}

void ascii(string zinput){
	cout << "       _,,,_"              << endl;
	cout << "     .'     `'."           << endl;
	cout << "    /     ____ \\ "        << endl;
	cout << "   |    .'_  _\\/   |``";  top(zinput); cout << "|" << endl;
	cout << "   /    ) a  a|    | "     << zinput << " |" << endl;
	cout << "  /    (    > |   <,,,";    bottom(zinput); cout << "|" << endl;
	cout << " (      ) ._  /"           << endl;
	cout << " )    _/-.__.'`\\"         << endl;
	cout << "(  .-'`-.   \\__ )"        << endl;
	cout << " `/      `-./  `."         << endl;
	cout << "  |    \\      \\  \\"     << endl;
	cout << "  |     \\   \\  \\  \\"   << endl;
	cout << "  |\\     `. /  /   \\ "   << endl;
}
