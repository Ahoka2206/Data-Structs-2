#include "node.h"
#include "list.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class LinkedList : public List {
    node* head;
    node* tail;
    int index;

    node* create_node(int num) { // helper function that will create new node 
        node* n = (node*) malloc( sizeof(node) );
        n->element = num;
        n->next = NULL; // make sure that wa siyay gi point 
        return n;
    }

    public:
        LinkedList() {
            index = 0;
            head = NULL;
            tail = NULL;
        }

        ~LinkedList() {
            cout << "DESTRUCTOR";
        }

        void addHead(int num) {
            node* newest = create_node(num); // creating new node
            newest->next = head; // newest will be the new head
            head = newest;
            if (tail == NULL) { //check if tail is null if so,
                tail = newest; //assign the tail as newest
            }
            index++;
        }

        void addTail(int num) {
            node* newest = create_node(num);
            if (tail != NULL) {
                tail->next = newest;
            }
            tail = newest;
            if (head == NULL) {
                head = newest;
            }
            index++;
        }

        int removeHead() {
            int elem = 0; // value of the head
            if (head != NULL) {
                elem = head->element;
                node* rem = head;
                head = head->next;
                if (head == NULL) {
                    tail = NULL;
                }
                free(rem); // free up the space that the removed node have taken up
                index--;
            }
            return elem;
        }
		
		/*
		int removeTail(){
			int elem1 = 0; // assign 0 sa elemenyt na i return 
			if(tail != NULL) { // check if tail is not null, if so, proceed
				elem1 = tail->element; // RV ang next sa tail
				node* rem = tail; // pag remove sa current tail
				tail = tail->next; 
				if (tail == NULL) {
					head == NULL;
				}
				free(rem); 
				index--;
			}
			return elem1;
		}
		*/
        int add(int num) {
            addTail(num);
            return index;
        }
        int remove(int num) {
            node* currnode = head;
            node* prevnode = NULL;
            int pos = 0;
            while (currnode != NULL) {
                pos++;
                if (currnode->element == num) {
                    if (prevnode != NULL) {
                        prevnode->next = currnode->next;
                        if (currnode == tail) {
                            tail = prevnode;
                        }
                        free(currnode);
                        index--;
                    } else { 
                        removeHead(); // kung sa una na number iya ganahan i remove 
                    }
                    return pos;
                } else {
                    prevnode = currnode;
                    currnode = currnode->next;
                }
            }
            return 0;
        }
        int get(int pos) {
            node* currnode = head;
            int count = 0;
            while (currnode != NULL) {
                count++;
                if (pos == count) {
                    return currnode->element;
                } else {
                    currnode = currnode->next;
                }
            }
            return 0;
        }
        int size() {
            return index;
        }
        bool addAt(int num, int pos) {
            if (pos == 1) { // case 1: addHead
                addHead(num);
                return true;
            }
            if (pos == index + 1) { // case 3: addTail
                addTail(num);
                return true;
            }
            node* currnode = head; //addAt(20, 3)
            int count = 0;
            while (currnode != NULL) {
                count++;
                if (pos - 1 == count) {
                    node* newest = create_node(num);
                    newest->next = currnode->next;          // a
                    currnode->next = newest;                // b
                    index++;
                    return true;
                } else {
                    currnode = currnode->next;
                }
            }
            return false;
        }
        int removeAt(int pos) {
            return 0;
        }
        int removeAll(int num) {
            return 0;
        }
        int contains(int num) {
            return 0;
        }
        int count(int num) {
            return 0;
        }
        void print() {
            node* currnode = head;
            if (head == NULL) { // tan awon if empty ba imong node
                cout << "(empty)";
            }
            while (true) { // will always loop through the while statement
                cout << currnode->element;
                if (currnode == tail) { // mahibaw an if naa na sa tail part 
                    cout << endl; // kung naa na bas kinalasan
                    return;
                }
                cout << " -> "; // iprint ni if di pa kinalasan
                currnode = currnode->next; // iprint ang value na naa sa node
            }
        }
};
