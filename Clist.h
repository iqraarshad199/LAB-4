#pragma once

#include "Node.h"

class Clist
{
public:
	Node* head;
	Clist();
	bool isempty();	void insertstart(int val);
	void insertend(int val);
	void deletebegin();
	void deleteend();
	void display();
	~Clist();
};

