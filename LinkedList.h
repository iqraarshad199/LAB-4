#pragma once
#include "Node.h"
#include<iostream>
class LinkedList
{
private:
	Node*head;
public:

	LinkedList();
	bool isempty();	void insertstart(int val);
	void insertend(int val);
	void deletebegin();
	void deleteend();
	void display();
	~LinkedList();
};

