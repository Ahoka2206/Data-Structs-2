#include "board.h"
#include <cstdlib>
#include <cstring>
using namespace std;

class BoardArray : public Board{
    entry* array;
    int index;

    public:
    BoardArray (){ // CONSTRUCTOR
        array = (entry*) malloc ( sizeof(entry) * 10 );
        index= 0;
    }
    
    void add(entry* e){
        int i;
        for (i = 0; i < index; i++){
            entry* existing = array + (i * sizeof(entry));
            if (e->compare(existing)){
                break;
            }
        }

        for (int j = index - 1; j >= i; j--){
            *(array + (sizeof(entry) * (j+1))) = *(array + (sizeof(entry) * j ));
        }
        
        *(array + (sizeof(entry) * i )) = *e;
        index++;

    }

   void remove(const char* person){
       for(int i = 0; i < index; i++){
           entry* existing = array + (i * sizeof(entry));
           if (!strcmp(existing->name, person)){
                for (int j = i; j < index; j++){
                        *(array + (sizeof(entry) * (j))) = *(array + (sizeof(entry) * (j+1) ));
                }
                index--;
                break;
           }
       }
    }

    entry* get(int pos){
        return array + ( sizeof(entry) * (pos - 1));
    }

    void print(){
        for (int i = 0; i < index; i++){
            entry* existing = array + (i * sizeof(entry));
            cout << i << " : ";
            existing->print();
        }
    }

    void addAt(entry* u, int pos){
        for (int i = index; i > pos - 1; i--){
        *(array + (sizeof(entry) * (i))) = *(array + (sizeof(entry) * (i - 1) ));
        *(array + (sizeof(entry) * (i - 1) )) = *u;
        index++;
        }
    }
    void removeAt(int pos){
        *(array + ( sizeof(entry) * (pos - 1)));
        for (int i = index; i > pos - 1; i--){
        *(array + (sizeof(entry) * (i))) = *(array + (sizeof(entry) * (i - 1) ));
        index--;
        }
    }
    //void removeAll(int num) = 0;
    //void flip() = 0;
};
