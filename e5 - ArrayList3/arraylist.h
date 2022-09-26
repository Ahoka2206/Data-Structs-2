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
        int new_Capacity = ceil(capacity * 1.5);
		int* new_array = (int*) realloc(array, new_Capacity * sizeof(int));
		array = new_array;
		capacity = new_Capacity;
    }
    void dyn_mem_rem(){
        int newCapacity = capacity - capacity / 3;
		int* newarray = (int*) realloc(array, newCapacity * sizeof(int));
		array = newarray;
		capacity = newCapacity;
        if(capacity < 4){
            capacity = 4;
        }
    }

    public:
        // CONSTRUCTOR
        ArrayList() {
            capacity = 4;
            array = (int*) malloc(capacity);
            index = 0;
        }

        int add(int num) {
            if(index == capacity){ // array full already
                dyn_mem_add();
            }
            *(array + index) = num;
            index++;

            return index;// position of the newly added element
        }

        int remove(int num){ // first num that we found
            // FIND the num
            int pos2 = 0;
            for (int i = 0; i < index; i++) {
                if (num == *(array + i)) { // we have found the num
                    pos2 = i+1;
                    for (int j = i; j < index - 1; j++) {
                        *(array + j) = *(array + j + 1);
                    }
                    index--;
                }
            }

            return pos2;
        }

        int get(int pos){
            int yow;
            if (pos <= size() && pos > 0)  // VALID POS
               yow = *(array + pos - 1);
            else
                yow = -1;
    
            return yow;
        }

        int size(){
            return index;
        }

        bool addAt(int num, int pos) {
            bool added = true;
            if(index == capacity){// array full already
                dyn_mem_add();
            }
            
            if(pos < 1 || pos > index+1)
                added =false;
            else{
                for(int i = index; i > pos - 1; i--)
                    *(array + i) = *(array + i - 1);
                    *(array + pos - 1) = num;
                    index++;
                    return true; 
            }
            return added; 
        }

        int removeAt(int pos) {
            if(pos >= capacity || pos < 0){ 
                return -1;
            }else{
                int newel = *(array + pos - 1);

                *(array + pos - 1) = 0;
                for(int i = pos - 1; i < index; i++){
                    *(array + i) = *(array + i + 1);
                    index--;
                }

                if(size() < capacity * 2.0/3){
                    dyn_mem_rem();
                }
                 return newel;
            }
           
        }

        int removeAll(int num) {
            int enter = 0;
            for(int i = 0; i < index; i++){
                 if(num == *(array + i)){
                    for (int j = i; j < index - 1; j++){
                        *(array + j) = *(array + j + 1);
                    }
                    index--;
                    enter++;
                    if(size() < capacity * 2.0/3){
                        dyn_mem_rem();
                    }
                    i--;
                 }
             }
            return enter;
        }
        
        int contains(int num) {
            int dex = 0; 
            for (int i = 0; i < index; i++) {
                if (num == *(array + i)) { // we have found the num
                    dex = i; // pos of the element
            }                    
        }
            return dex;
        }
        
        int count(int num) {
            int count = 0;
            for (int i = 0; i < index; i++){
                if (*(array + i) == num)
                count++;
            }
            return count;
        }

        // WARNING! Do not modify the print method.
        // Doing so will nullify your score for this activity.
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
};
