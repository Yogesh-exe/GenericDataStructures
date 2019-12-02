//============================================================================
// Name        : DataStrucures.cpp
// Author      : Yogeshwar Bagul
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	LinkedList<int> ll;
	for(int i=0;i<10;i++)
	{
		ll.insert(i);
	}


	ll.insert(11,4);

	ll.print();

	return 0;
}
