#include <iostream>
#include "linkedlist.h"
using namespace std;

int main() {
    LinkedList* l = new LinkedList();
    l->addTail(20);
    l->addHead(10);
    l->addTail(30);
    cout << l->removeHead() << endl;
    cout << l->add(40) << endl;
    l->add(50);
    l->add(60);
    l->add(70);
    l->add(80);
    l->print();
    cout << l->remove(40) << endl;
    l->print();
    cout << l->addAt(90, 8) << endl;
    l->print();
    return 0;
}