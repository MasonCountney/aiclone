/*
 *
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
		{ "hello", "hi", "howdy", "hola", "hey" },
		{ "Hi!", "Howdy", "Hey", "Hola", "Hello" },

		// Greeting Questions
		{ "how are you", "hows it going", "how are you doing", "test", "test" },
		{ "I'm fine thanks, what did you do today?", "Good youself?", "I'm doing well how about you?", 
			"I'm good, what did you do today?", "Great, what have you been up to?" },

		// Doing good
		{ "im doing well", "im doing good", "im good", "im great", "doing well thanks" },
		{ "Thats good! What did you do today", "Great! What have you been up to?", "I'm glad.",
			"What are your plans for the day", "What will you be upto today"},

		// Doing Bad
		{ "im not doing so hot", "im sad", "ive been better", "im not feeling too well", "bad" },
		{ "Oh no I'm sorry! Is there anything I can do?", "I'm sorry to hear that.", 
			"What can I do to cheer you up?", "I'm sorry", "How can I make you feel better?"},
			
		// It went well
		{ "it went well", "it went good", "it went great", "it was good", "it was great" },
		{ "Thats good I'm glad to hear it!", "I'm glad!", "Congratz", "Good, I'm glad", "Thats great news!"},

		// It went bad
		{ "it didnt go so well", "not good", "could have been better", "bad", "it was awful" },
		{ "On no, I'm sorry  to hear that.", "I'm sorry, is there anything I can do for you?",
			"I'm sorry", "Next time it will be better", "It'll work out"},

		// Went to school
		{ "today i had class", "today i went to school", "i went to school", "i had class", "went to school" },
		{ "How did school go?", "Did you learn anything new?", "Bring me with you some time!", "Did it go well",
			"How did class go?" },

		// work today
		{ "i had to work today", "i worked today", "i went to work", "i worked", "i went to work today" },
		{ "How did work go?", "You work a lot don't you?", "Why work? Just stay here with me!", "How was it?",
			"Did it go ok?"},

		// Hanging out
		{ "hung out with friends", "went out with friends", "today I hung out with friends", 
			"took pictures with friends", "i shot with some friends today" },
		{ "Neat! did you have fun?", "How did it go", "Don't hang out with them anymore, just stay here with me!",
			"You have friends?! Hah just joking!", "Take me with you when you see them next!" },

		// Future activities
		{ "i have lacrosse practice", "i have practice", "i have work", "i have a lacrosse game", 
			"im going to school" },
		{ "I hope it goes well", "I'll see you after then!", "Oh cool! Bring me with!", 
			"Sounds like fun!", "Sounds like a blast" },

		// Lacrosse
		{ "went to lacrosse", "went to lacrosse practice", "had lacrosse practice", 
			"i went to lacrosse practice", "i went to practice" },
		{ "How'd it go?", "How was practice?", "Take me to a game!", "Was it fun?", "Don't leave me here!"},

		//misc
		{ "eat my ass", "eat my butt", "eat ass", "tounge punch my fart box", "eat my ass please"},
		{ "Bend over", "Ok man", "Yes master", " With pleasure", "Yes please!"},

		{ "fuck you", "slut", "whore", "bitch", "cunt" },
		{ "How could you say that!", "How rude.", "I know you are but what am I.", "You're awful", "I'm sorry." }
	};

	// Default responses
	string defaults[] {
		"What?", "I don't get you sometimes...", "Huh?", "Say that again, r e a l l y  s l o w l y."
	};

	string input;
	bool stillGf = true;
	clearScreen();

	while(stillGf = true){

		cout << "[gfBot][~] ";
		getline(cin, input);
		stringConv(input);

		srand(time(NULL));    				// Seeds Random Number and sets random numbers 
		int randHit = 0 + rand() % (5-0);   		// For hit and defaults
		int randDefault = 0 + rand() % (3-0);
		int elements = sizeof(iostr) / sizeof(*iostr);  // Finds total number of lines in I/O array.
								// Which is later used in the loop.
		for(int i = 0; i < (elements/2); i++){
			for(int j = 0; j < 5; j++){
				if(input.compare(iostr[i*2][j]) == 0){
					clearScreen();
					ascii(iostr[i*2+1][randHit]);
				}
			};
		};
	};

	return 0;
}

// Converts text to lowercase and walks through and deletes puncuation.
void stringConv(string &xInput){
	for( int i = 0; i < xInput.length(); i++){
		xInput[i] = tolower(xInput[i]);

		if(ispunct(xInput[i])){
			xInput.erase(i, 1);
		};
	};
}

// Clears buffer, used after getlines.
void clearBuffer(){
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}

void clearScreen(){
	for(int i = 0; i < 75; i++)
		cout << endl;
}

// ASCII ART
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
