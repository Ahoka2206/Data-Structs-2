// WARNING! Do not modify this file!
// Doing so will nullify your score for this activity.
#include <iostream>
#include "arraylist.h"
using namespace std;

int main(int argc, char** argv) {
    ArrayList* list = new ArrayList();
    int test;
    cin >> test;
    switch (test) {
        case 1:
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->remove(10) << endl;
            list->print();
            break;
        case 2:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->addAt(20, 2) << endl;
            list->print();
            break;
        case 3:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAt(3) << endl;
            list->print();
            break;
        case 4:
            cout << list->add(10) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(30) << endl;
            cout << list->add(10) << endl;
            cout << list->removeAll(10) << endl;
            list->print();
            break;
        case 5:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->removeAt(3) << endl;
            list->print();
            break;
        case 6:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->removeAt(1) << endl;
            list->print();
            break;
        case 7:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->removeAt(3) << endl;
            cout << list->removeAt(1) << endl;
            cout << list->removeAt(1) << endl;
            list->print();
            break;
        case 8:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(40) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            list->print();
            break;
        case 9:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(40) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            list->print();
            break;
        case 10:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(40) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 11:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(40) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->removeAll(20) << endl;
            cout << list->add(15) << endl;
            cout << list->add(21) << endl;
            list->print();
            break;
        case 12:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(40) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->removeAll(20) << endl;
            cout << list->add(15) << endl;
            cout << list->add(21) << endl;
            cout << list->add(16) << endl;
            cout << list->add(17) << endl;
            list->print();
            break;
        case 13:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(10) << endl;
            cout << list->add(20) << endl;
            cout << list->add(40) << endl;
            cout << list->add(10) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->add(20) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 14:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->addAt(14, 3) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 15:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->addAt(14, 4) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 16:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->removeAt(4) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 17:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->contains(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->contains(50) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 18:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->count(50) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->count(50) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 19:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->get(5) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->get(3) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
        case 20:
            cout << list->add(10) << endl;
            cout << list->add(30) << endl;
            cout << list->add(40) << endl;
            cout << list->add(50) << endl;
            cout << list->add(50) << endl;
            cout << list->count(list->get(5)) << endl;
            cout << list->removeAll(10) << endl;
            cout << list->removeAll(50) << endl;
            cout << list->add(21) << endl;
            cout << list->add(20) << endl;
            cout << list->add(20) << endl;
            list->print();
            cout << list->contains(list->get(5)) << endl;
            cout << list->removeAll(20) << endl;
            list->print();
            break;
    }
    return 0;
}
