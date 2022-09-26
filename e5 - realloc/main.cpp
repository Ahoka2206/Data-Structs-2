#include <iostream>
#include "arraylist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    ArrayList* list = new ArrayList();
    int test;
    cin >> test;
    switch (test) {
        case 1:
            list->add(10);
            list->add(20);
            list->remove(10);
            list->print();
            break;
        /*case 1:
            list->add(10);
            list->add(20);
            list->add(30);
            list->add(40);
            list->add(50);
            list->add(60);
            list->add(70);
            list->remove(20);
            list->remove(70);
            list->remove(30);
            list->remove(10);
            list->remove(40);
            list->remove(50);
            list->remove(60);
            list->print();
            break;*/
        case 2:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->addAt(20, 2);
            list->print();
            break;
        case 3:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->removeAt(3);
            list->print();
            break;
        case 4:
            list->add(10);
            list->add(10);
            list->add(20);
            list->add(30);
            list->add(10);
            list->removeAll(10);
            list->print();
            break;
        case 5:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->removeAt(3);
            list->removeAt(3);
            list->print();
            break;
        case 6:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->removeAt(3);
            list->removeAt(3);
            list->removeAt(1);
            list->print();
            break;
        case 7:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->removeAt(3);
            list->removeAt(3);
            list->removeAt(1);
            list->removeAt(1);
            list->print();
            break;
        case 8:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->add(10);
            list->add(20);
            list->add(40);
            list->add(10);
            list->add(50);
            list->removeAll(10);
            list->print();
            break;
        case 9:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->add(10);
            list->add(20);
            list->add(40);
            list->add(10);
            list->add(50);
            list->removeAll(10);
            list->removeAll(50);
            list->print();
            break;
        case 10:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->add(10);
            list->add(20);
            list->add(40);
            list->add(10);
            list->add(50);
            list->removeAll(10);
            list->removeAll(50);
            list->removeAll(20);
            list->print();
            break;
        case 11:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->add(10);
            list->add(20);
            list->add(40);
            list->add(10);
            list->add(50);
            list->removeAll(10);
            list->removeAll(50);
            list->removeAll(20);
            list->add(15);
            list->add(21);
            list->print();
            break;
        case 12:
            list->add(10);
            list->add(30);
            list->add(40);
            list->add(50);
            list->add(10);
            list->add(20);
            list->add(40);
            list->add(10);
            list->add(50);
            list->removeAll(10);
            list->removeAll(50);
            list->removeAll(20);
            list->add(15);
            list->add(21);
            list->add(16);
            list->add(17);
            list->print();
            break;
    }
    return 0;
}
