#include <iostream>

void temp(){
	using namespace std;

	cout << "Input a temp to convert. (Ex. 72f or 20c): ";
	
	int temp;
	char type;
	
	cin >> temp >> type;

	switch(type){
		case 'c':
		case 'C':
			cout << temp*9/5+32 << "f" << endl;
			break;
		case 'f':
		case 'F':
			cout << (temp-32)*5/9 << "c" << endl;
			break;
		default:
			cout << "Invalid input" << endl;
			break;
	};
}
