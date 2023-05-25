#include <iostream>
#include <string>
using namespace std;

class  Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class Doublelinkedlist {
private:
	Node* START;
public:

	Doublelinkedlist();
	void addNote();
	bool search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void ascending();
	void descending();	
	void hapus();
	void searchData();
};

Doublelinkedlist::Doublelinkedlist() {
	START = NULL;
}

void Doublelinkedlist::addNote() {
	int nim;
	string nm;
	cout << "\nEnter the roll number  of the student: ";

}