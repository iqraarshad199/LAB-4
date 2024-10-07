#include "LinkedList.h"
#include "Clist.h"

#include<iostream>
using namespace std;
int main() {
	LinkedList l;

	cout << "\n\tList list is:";
	l.insertstart(5);
	l.insertstart(4);
	l.insertstart(3);
	l.insertstart(2);
	l.insertstart(1);

	l.display();

	cout << "\n\n\tList after insertion at end is: ";
	l.insertend(6);
	l.display();

	cout << "\n\n\tList list after deletion at beginning is:";
	l.deletebegin();
	l.display();

	cout << "\n\n\tList list after deletion at end is:";
	l.deleteend();
	l.display();


	Clist list;
	cout << "\n\n\tCircular List:" << endl;
	cout << "\n\tlist is:";

	list.insertstart(1);
	list.insertstart(4);
	list.insertstart(3);
	list.insertstart(2);
	list.insertstart(1);

	list.display();
	cout << endl<< endl;
}