#include<iostream>
#include "list.h"
#include <cstdlib>
using namespace std;

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


        void addAt(int num, int pos){
            for(int i = index; i > pos -1; i--)\
            *(array + i) = *(array + i - 1);
            *(array + pos -1) = num;
            index++;

        }
         void removeAt(int pos){
             *(array + pos -1) = 0;
             for(int i= pos-1; i< index; i++)
             *(array + i ) = *(array + i + 1);
             index--;

        }
        
		void removeAll(int num){
            int i, j;
            for(i = 0; i < index; i++){//find num
                if(num == *(array + i)){//num is found
                    for (j = i; j < index - 1; j++){//condtion in removing the number
                         *(array + j) = *(array + j + 1);
                    }
                    i--;//deleting
                }
                index--;//minus the count
            }
        }
         void flip(){
         	int j = index - 1;
            int temp = 0;
            for(int i = 0; i < j; i--){
            	temp = *(array + i);
            	*(array + i) = *(array + j)
            	*(array + j) = temp;
        	}
  
        }
         void plus(int num){
			for(int i = 0; i < index; i++){
				*(array + i) += num;
			}
        }
         int summation(){
             int sum=0;
             for(int i=0; i<index; i++)
                sum+= *(array + i);         
             return sum;
        }

        int size(){
            return index;
        }
};

