#include "Clist.h"
#include<iostream>
using namespace std;


Clist::Clist()
{
	head = nullptr;
}

bool Clist::isempty() {
	if (head == nullptr)
		return true;
	else
		return false;
}

void Clist::insertstart(int val) {

	/*@ Function that insert node at the start.
	  @val will store the value
	*/
	Node* newnode = new Node;
	newnode->data = val;
	if (isempty()) {
		head = newnode;
		newnode->next = head;
	}

	else {
		Node* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}

		temp->next = newnode;
		newnode->next = head;
		head = newnode;
	}
}

void Clist::insertend(int val) {

	/*@ Function that insert node at the end.
	  @val will store the value
	*/
	Node* newnode = new Node;
	newnode->data = val;
	if (isempty()) {
		newnode->next = head;
	}
	else {
		Node* temp = head->next;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = head;
	}
}

void Clist::deletebegin() {

	/*@ Function that delete node from the start.
	  @temp: temp wil store the address
	  @head will point to the address of head->next
	*/
	if (isempty()) {
		cout << "List is empty;";
	}
	else {
		Node* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		head = head->next;
		temp->next = head;
		delete temp;
	}
}

void Clist::display() {

	/*@ Function that will print the values.
	*/
	Node* temp = head;
 do{
		cout << temp->data << " ";
		temp = temp->next;
 } while (temp != head);
}

Clist::~Clist()
{
}
