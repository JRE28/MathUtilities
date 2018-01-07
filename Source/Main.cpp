#include <iostream>
#include <cmath>
#include "windows.h"
#include "Funcs.h"
using namespace std;


int main(void)
{
	int size = 2;
	string options[] = {"Equation^2", "Cuadratics"};
	fprint("Type in what do you want to do:", 50);
	printArray(options,size);

}
