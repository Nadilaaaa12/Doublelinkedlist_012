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
	boo1 search(int rollNo, Node** previous, Node** current);
	boo1 deleteNode(int rollNo);
	boo1 listEmpty();
	void ascending();
	void descending();	
	void hapus();
	void searchData();
};

Doublelinkedlist::Doublelinkedlist() {
	START = NULL;
}