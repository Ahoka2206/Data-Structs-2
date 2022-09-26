#include "node.h"
#include "list.h"
#include <cstdlib>
#include <iostream>
using namespace std;

class LinkedList : public List {
    node* head;
    node* tail;
    int index;

    node* create_node(int num) {
        node* n = (node*) malloc( sizeof(node) );
        n->element = num;
        n->next = NULL;
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
            node* newest = create_node(num);
            newest->next = head;
            head = newest;
            if (tail == NULL) {
                tail = newest;
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
            int elem = 0;
            if (head != NULL) {
                elem = head->element;
                node* rem = head;
                head = head->next;
                if (head == NULL) {
                    tail = NULL;
                }
                free(rem);
                index--;
            }
            return elem;
        }

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
                        removeHead();
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
            if (head == NULL) {
                cout << "(empty)";
            }
            while (true) {
                cout << currnode->element;
                if (currnode == tail) {
                    cout << endl;
                    return;
                }
                cout << " -> ";
                currnode = currnode->next;
            }
        }
};