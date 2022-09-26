#include "list.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

class ArrayList : public List { // : means "is-a" / extend
    int* array;
    int index;
    int capacity;

    void dyn_mem_add(){
        int new_cap = ceil(capacity * 1.5);
        array = (int*) realloc(array, new_cap);
        capacity = new_cap;
    }
    void dyn_mem_rem(){
        int new_cap = capacity - (capacity / 3);
        array = (int*) realloc(array, new_cap);
        capacity = new_cap;
    }
    public:
        // CONSTRUCTOR
        ArrayList() {
            capacity = 4;
            array = (int*) malloc(capacity);
            index = 0;
        }

        void add(int num) {
            if(index == capacity){ // array full already
                dyn_mem_add();
            }
            *(array + index) = num;
            index++;
        }

        void remove(int num){ // first num that we found
            // FIND the num
            for (int i = 0; i < index; i++) {
                if (num == *(array + i)) { // we have found the num
                    for (int j = i; j < index - 1; j++) {
                        *(array + j) = *(array + j + 1);
                    }
                    index--;
                    if(size() < capacity * 2.0/3){
                        dyn_mem_rem();
                    }
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

        void print() {
            cout << "[";
            for (int i = 0; i < capacity; i++) {
                if (i < index) {
                    cout << *(array + i);
                } else {
                    cout << "?";
                }
                
                if (i != capacity - 1) {
                    cout << ", ";
                }
            }
            cout << "]" << endl;
        }

        void addAt(int num, int pos) {
            if(index == capacity){ // array full already
                dyn_mem_add();
            }
            for(int i = index; i > pos - 1; i--)\
            *(array + i) = *(array + i - 1);
            *(array + pos -1) = num;
            index++;
        }

        void removeAt(int pos) {
            *(array + pos - 1) = 0;
            for(int i = pos - 1; i < index; i++)
            *(array + i) = *(array + i + 1);
            index--;
            if(size() < capacity * 2.0/3){
                dyn_mem_rem();
            }
        }

        void removeAll(int num) {
            int i, j;
             for(i = 0; i < index - 1; i++){
                 if(num == *(array + i)){
                     for (j = i; j < index - 1; j++){
                         *(array + j) = *(array + j + 1);
                     }
                    i--;
                    if(size() < capacity * 2.0/3){
                        dyn_mem_rem();
                    }
                 }
                index--;
             }
        }
};
