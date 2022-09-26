#include <iostream>
#include "arraylist.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    List* list = new ArrayList();
    list->add(10);
    list->add(20);
    list->addAt (30,1);
    list->removeAt(2);
    list->removeAll(1);
    list->flip();
    list->summation();
    list->size();
    
    cout << list-> get(1) << endl << list-> get(2) << endl << list-> get(3)<< endl;

    //list -> removeAt(1);
    //cout << "after removal" <<endl;
   // cout << list-> get(1)  << endl << list-> get(2) << endl;
    //list -> flip();
    //cout << list->summation() << endl;
    //cout << list->get(2) << endl << list->get(1) <<endl<<endl;
    //list->remove(10);
  // cout << "After removal: " << list->get(1) << " with size " << list->size();
    //list->remove(20);
    //cout << "Array is size " << list->size();
    return 0;
}
