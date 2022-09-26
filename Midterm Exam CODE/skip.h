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
            return -1;
        }
        int size() {
            return index;
        }
        
        bool contains(int num) {
            node* currnode = head;
            int pos = 0;
            while (currnode != NULL) {
                pos++;
                if (currnode->element == num) {
                    return true;
                } else {
                    currnode = currnode->next;
                }
            }
            return false;
        }

        int skip(int n, int start_pos, int end_pos) {
            int count = 0;
            node* currnode = head;
            node* prevnode = NULL;
            int pos = 0;
            while (currnode != NULL) {
                pos++;
                if (pos > end_pos) {
                    return count;
                }
                if (pos >= start_pos && ((pos - start_pos) % n == 0)) {   // relative pos is divisible by n
                    count++;
                    if (prevnode != NULL) {
                        prevnode->next = currnode->next;
                        if (currnode == tail) {
                            tail = prevnode;
                        }
                        free(currnode);
                        index--;
                        currnode = prevnode->next;
                    } else {
                        removeHead();
                        currnode = head;
                    }
                } else {
                    prevnode = currnode;
                    currnode = currnode->next;
                }
            }
            return count;
        }

        int remove_redundant() {
            int count = 0;
            LinkedList* check = new LinkedList();
            node* currnode = head;
            node* prevnode = NULL;
            while (currnode != NULL) {
                if (check->contains(currnode->element)) {
                    count++;
                    if (prevnode != NULL) {
                        prevnode->next = currnode->next;
                        if (currnode == tail) {
                            tail = prevnode;
                        }
                        free(currnode);
                        index--;
                        currnode = prevnode->next;
                    } else {
                        removeHead();
                        currnode = head;
                    }
                } else {
                    check->add(currnode->element);
                    prevnode = currnode;
                    currnode = currnode->next;
                }
            }
            return count;
        }

        void flip() {
            * first 
        }
        
        // WARNING! Do not modify this method below!
        // Doing so will nullify your score for this activity.
        void print() {
            node* currnode = head;
            if (head == NULL && tail == NULL) {
                cout << "(empty)";
                return;
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