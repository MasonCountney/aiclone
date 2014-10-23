#include <iostream>
#include <string.h>
#include "google.h"
#include <fstream>
#include "fileGet.h"

int get()
{
	using namespace std;

	bool stillGf = true;
	int randNumber = 1;

	while(stillGf == true)
	{
		cout << "~: ";
/*This is where I grab my input, convert it to lowercase - 
	and then check it on different if statments. */
		string input;
		getline(cin, input);

		transform( input.begin() , input.end() , input.begin() , (int (*)(int))tolower );
		if(input == "")
		{
			cout << "I'm sorry I didn't catch that." << endl;
		}
	
		if(input == "hello")
		{
			cout << "Hi!" << endl;
		};
		
		if(input == "how are you")
		{
			cout << "I'm good how are you?" << endl;
		};
		
		if(input == "im good thank you")
		{
			cout << "Thats good! What did you do today today?" << endl;
		};
		
		if(input == "what do you want to do")
		{
			cout << "Program me some new I/Os!" << endl;
		};
		
		if(input == "i mainly worked on you")
		{
			cout << "Did you add any cool new features I should know about?"
			 << endl;
		};
	
		if(input == "clear")
		{
			cout << endl  << endl << endl << endl << endl << endl
			 << endl << endl << endl << endl << endl << endl << endl
			 << endl << endl << endl << endl << endl << endl << endl
			 << endl << endl << endl << endl << endl << endl << endl
			 << endl << endl << endl << endl << endl << endl << endl;
		};

		if(input == "help")
		{
			cout << "Welcome to the gfBot ver. qt-3.14 help page." << endl;
			cout << "Conversational inputs:" << endl
			<< "Hello" << endl
			<< "How are you" << endl
			<< "ect." << endl << endl

			<< "Do my math - Basic calculator" << endl
			<< "Read this to me - File reader" << endl
			<< "What should I do? - Suggestions when bored" << endl
			<< "Tell me a joke - Tells jokes" << endl
			<< "Convert to c/f - Converts tempetures" << endl
			<< "Q, quit, exit - To quit the program" << endl << endl;
		};

		if(input == "quit")
		{
			stillGf = false;
		};
	
		if(input == "q")
		{
			stillGf = false;
		}

		if(input == "exit")
		{
			stillGf = false;
		}
	
		if(input == "what should i do" && randNumber == 1)
		{
			cout << "Talk with me of course" << endl;
		};
		
		if(input == "what should i do" && randNumber == 2)
		{
			cout << "How about update your kernel?" << endl;
		};
		
		if(input == "what should i do" && randNumber == 3)
		{
			cout << "Add some new features to me!" << endl;
		};
		
		if(input == "what should i do" && randNumber == 4)
		{
			cout << "Have you browsed /g/ or /p/ lately?" << endl;
		};
		
		if(input == "what should i do" &&randNumber == 5)
		{
			cout << "Go on rizon" << endl;
		};
		
		if(input == "do my math")
		{
			cout << "Ok! What would you like me to do?" << endl;
			Calculator();
		}

		if(input == "thanks")
		{
			cout << "Your welcome!" << endl;
		}
		if(input == "convert to f")
		{
			cout << "Sure what tempature would you like to convert?" << endl;		
			tempC();
		};

		if(input == "convert to c")
		{
			cout << "Sure what tempature would you like to convert?" << endl;		
			tempF();
		};
		
		if(input == "google that for me")
		{
			cout << "What would you like me to google?" << endl;
			Google();
		};

		if(input == "read this to me")
		{
			fileGet();
		}

		if(input == "who made this")
		{
			ifstream inf("gf.config");

			if(!inf)
			{
				cout << "Could not find file." << endl;
			};

			while(inf)
			{
				string strInput;
				getline(inf, strInput);
				cout << strInput << endl;;
			};
		};

		if(input == "tell me a joke" && randNumber == 1)
		{
			cout << "   What is smarter than a talking bird?" << endl;
			cout << "A spelling bee." << endl;
		};

		if(input == "tell me a joke" && randNumber == 2)
		{
			cout << "   Where does the general put his armies?" << endl;
			cout << "In his slevies." << endl;
		};

		if(input == "tell me a joke" && randNumber == 3)
		{
			cout << "   Why was the tomato blushing?" << endl;
			cout << "It saw the salad dressing." << endl;
		};

		if(input == "tell me a joke" && randNumber == 4)
		{
			cout << "   What do you call a cow with no legs? " << endl;
			cout << "Ground beef." << endl;
		};

		if(input == "tell me a joke" && randNumber == 5)
		{
			cout << "   What do you call a broken window? " << endl;
			cout << "A pain in the glass." << endl;
		};
//Random events

		randNumber = randNumber + 1;
	
		if(randNumber > 5)
			randNumber = 1;
//END
	};
};
