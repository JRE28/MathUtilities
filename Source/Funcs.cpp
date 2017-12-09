#include <iostream>
#include <windows.h>
#include <iostream>
#include <sstream>
#include <cmath>
#include "Funcs.h"
using namespace std;


void fprint(string phr, unsigned int speed, bool endli) {
	const int orlimit = 60;		//The constant value for the limit
	int its = 1;	//A variable to hold the times that the text has folded
	int limit = 60;		//The limit of characters in each line(varies)
	for(int st = 0; st < phr.length(); st++) {
		if(phr[limit]!= ' ') {
			limit++;
		}
		if(st == limit) {
			cout << endl;
			st++;
			++its;
			limit = orlimit * its;
		}
		cout << phr[st];
		Sleep(speed);
	}
	if(endli == true) {
		cout << endl;
	}
}

void Sequation() {
	string Iax2;
	string Ibx;
	string Ic;
	int ax2;
	int bx;
	float p1;
	float p2;
	int discr;
	int eq1;
	int eq2;
	int c;
	cout << "Type the ax^2 member's value: ";
	cin >> Iax2;		//Gets the first value for ax^2 equation member
	cout << endl;
	cout << "Type the bx member's value: ";
	cin >> Ibx;		//Gets the second value for bx
	cout << endl;
	cout << "Type the c member: ";
	cin >> Ic;		//Gets third value for c
	cout << endl;
	ax2 = atoi(Iax2.c_str());	//Transforming
	bx = atoi(Ibx.c_str());		//the strings 
	c = atoi(Ic.c_str());		//into ints
	p1 = -bx;
	discr = (bx*bx)-4*ax2*c;
	if(discr < 0) 
	{
		cerr << "No real solution, the discriminant is negative" << endl;
		goto END;
	}
	p2 = sqrt((bx*bx)-4*ax2*c);
	eq1 = (p1+p2)/(2*ax2);
	eq2 = (p1-p2)/(2*ax2);
	if(eq1 == 0 && eq2 == 0)
	{
		cerr << "Both solutions are 0\nThe discriminant is equal to 0" << endl; 
	}
	else
	{
		cout << p1 << endl;
		cout << p2 << endl;
		cout << "Solution X^1: " << eq1 << endl;
		cout << "Solution X^2: " << eq2 << endl;
	}
	END: cout << "Program ended" << endl;
}