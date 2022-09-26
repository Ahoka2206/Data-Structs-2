// You may modify ANY part of this file.
// In fact you are encouraged to do so.
#include "list.h"
#include <cstring>
class StringList : public List {
    entry* array;
    int index;
    int capacity=5;

    public:
        StringList() {
            // Perform initial assignments here
            array = (entry*) malloc( sizeof(entry) * capacity);
        }

        void add(entry* e) {
            *(array + (sizeof(entry) * index)) = *e;
            index++;
        }

        void remove(const char* str) {
            for (int i = 0; i < index; i++) {
                entry* existing = array + (sizeof(entry) * i);
                if (!strcmp(existing->country, str)) {
                    // MOVE all entries to the left starting to the next
                    // We are to stop before we reach index-1 so as not to reach index-1+1 where data doesn't exist
                    for (int j = i; j < index - 1; j++) {
                        //        current entry             =            next entry
                        *(array + ( sizeof(entry) * (j) ) ) = *(array + ( sizeof(entry) * (j+1) ) );
                    }
                    index--;
                    i--;
                }
            }
        }

        bool contains(const char* str) {
            for (int i = 0; i < index; i++) {
                entry* existing = array + (sizeof(entry) * i);
                if (!strcmp(existing->country, str)) {
                    return true;
                }
            }
            return false;
        }

        int size() {
            return index;
        }

        
        // WARNING! Do not modify the print method.
        // Doing so will nullify your score for this activity.
        void print() {
            cout << "[";
            for (int i = 0; i < capacity; i++) {
                if (i < index) {
                    entry* e = (array + (sizeof(entry) * i));
                    cout << e->country;
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