#include "list.h"
#include <cstdlib>

class ArrayList : public List { // : means "is-a" / extend
    int* array;
    int index;

    public:
        // CONSTRUCTOR
        ArrayList() {
            array = (int*) malloc(10);
            index = 0;
        }

        void add(int num) {
            *(array + index) = num;
            index++;
        }

        void remove(int num){ // first num the we found
            // FIND the num
            for (int i = 0; i < index; i++) {
                if (num == *(array + i)) { // we have found the num
                    for (int j = i; j < index - 1; j++) {
                        *(array + j) = *(array + j + 1);
                    }
                    index--;
                    return;
                }
            }
        }
        int get(int pos){
            return *(array + pos - 1);
        }
        int size(){
            return index;
        }
};