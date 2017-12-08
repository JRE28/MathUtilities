#include <iostream>
#include <windows.h>
#include <iostream>
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

static void Sequation() {
	string Iax2;
	string Ibx;
	string Ic;
	int ax2;
	int bx;
	int c;
	cout << "Type the ax^2 member: ";
	cin >> Iax2;		//Gets the first value for ax^2 equation member
	cout << endl;
	cout << "Type the bx member: ";
	cin >> Ibx;		//Gets the second value for bx
	cout << endl;
	cin >> Ic;		//Gets third value for c
}