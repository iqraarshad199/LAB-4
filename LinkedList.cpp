#include "LinkedList.h"
#include<iostream>
using namespace std;

LinkedList::LinkedList()
{
	/*@ Function that insert dummy node
*/
	head = new Node();
	head->data = 0;
	head->next = nullptr;
}

bool LinkedList::isempty(){
	/*@ Function that shows if list is empty or not
*/
	return head->next == nullptr;

}

void LinkedList::insertstart(int val) {

	/*@ Function that insert node at the start.
	  @val will store the value
	*/
	Node* newnode = new Node;
	newnode->data = val;
	if (isempty()) {
		head->next = newnode;
	}
	
	else {
		
		newnode->next = head->next;
		head->next = newnode;
	}
}

void LinkedList::insertend(int val) {

	/*@ Function that insert node at the end.
	  @val will store the value
	*/
	Node* newnode = new Node;
	newnode->data = val;
	if (isempty()) {
		head->next = newnode;
	}
	else {
		Node* temp = head->next;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newnode;
	}
}

void LinkedList::deletebegin() {

	/*@ Function that delete node from the start.
	  @temp: temp wil store the address 
	  @head->next will point to the address of next of head->next
	*/
	if (isempty()) {
		cout << "List is empty;";
	}
	Node* temp = head->next;
	head->next = head->next->next;
	delete temp;
}

void LinkedList::deleteend() {
	
	/*@ Function that delete node from the end. 
	  @prev: prev will take the address of temp and will delete the node from the end
	*/
	Node* temp = head->next;
	Node* prev = head;
	while (temp->next!= nullptr) {
		prev = temp;
		temp = temp->next;
	}
	prev->next=nullptr;
	delete temp;
}

void LinkedList::display() {

	/*@ Function that will print the values.
	*/
	Node* temp = head;
	while (temp != nullptr) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}
LinkedList::~LinkedList()
{
}
