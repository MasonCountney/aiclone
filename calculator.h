void calculator() {
	using namespace std;

	double a, b, c;
	char op;  
	cout << "Sure! input your problem like this `92/4`" << endl;
	cout << "[gfBot][calc] ";
  
	cin >> a >> op >> b;
	
	switch (op) {
    		case '*': cout << a * b << endl; break;
		case '/': cout << a/b << endl; break;
		case '+': cout << a+b << endl; break;
		case '-': cout << a-b << endl; break;
    	default: 
    		cout << "Invalid operator!" << endl;
		break;
	};
}
