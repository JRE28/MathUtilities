#include <iostream>
#include <windows.h>
#include <iostream>
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
	int p1;
	int p2;
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
	try 
	{
		p1 = -bx;
		p2 = sqrt((pow(bx, 2))-4*ax2*c);
		eq1 = (p1+p2)/(2*ax2);
		eq1 = (p1-p2)/(2*ax2);
		cout << "Solution X^1: " << eq1;
		cout << "Solution X^2: " << eq2;
	} catch(overflow_error e)
	{
		cout << "Both solutions are 0";
	} catch(domain_error r)
	{
		cout << "Discriminant is a negative number";
	}

}