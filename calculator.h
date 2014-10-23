#include <iostream>
#include <cmath>

void Calculator() {
	using namespace std;
	char done = 'y';

	while(done == 'y')
	{
		float a, b, c;
		a = 1;
		char op;  
		cout << "Math >> ";
	  
		cin >> a >> op >> b;
		if (!a) {
			cout << "Invalid input!" << endl;
	
			done = 'y';
    			return; 
		}
	  
		switch (op) {
		    	case '*': c = a * b; break;
			case '/': c = a/b; break;
			case '+': c = a+b; break;
			case '-': c = a-b; break;
			case '^': c = pow(a, b); break;
    			case '#': c = sqrt(b); break;
		default: 
    			cout << "Invalid operator!" << endl;
  	}
  	
  		cout << c << endl;
  		cout << "Continue? (y/n) ";
  		cin >> done;
	}
}
