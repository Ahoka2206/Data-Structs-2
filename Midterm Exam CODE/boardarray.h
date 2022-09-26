// You may modify ANY part of this file.
// In fact you are encouraged to do so.
#include "board.h"
#include "stringlist.h"
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
class BoardArray : public Board {
    entry* array;
    int index;
    int capacity;
    // add your StringList here
    StringList* ban;
public:
    BoardArray() {
        capacity = 5;
        array = (entry*) malloc ( sizeof(entry)*5 );
        index = 0;
        // add your StringList initialization here
        ban = new StringList();
    }

    bool add(entry* e) {
        if (ban->contains(e->country)) {
            return false;
        }
        // Step 1: Find its rightful place
        int i;
        for (i = 0; i < index; i++) {
            // Get and compare the existing entry
            entry* existing = array + (i * sizeof(entry)); // 0 + 0 * 5 = 0
            if (e->compare(existing)) { // return true if e is greater, rightful place
                break;
            }
        }

        // Step 2: Move the lesser entries to the right
        int j = index-1;
        if (j == 4) {
            j = 3;
        }
        for (; j >= i; j--) {
            //        next (second) entry         =            current entry
            *(array + ( sizeof(entry) * (j+1) ) ) = *(array + ( sizeof(entry) * j ) );
        }

        // Step 3: Add the entry
        if (i < 5) {
            *(array + ( sizeof(entry) * i ) ) = *e;
            if (index < 5) {
                index++;
            }
            return true;
        }
        
        return false;
    }

    entry* get(int pos) {
        return array + (sizeof(entry) * (pos-1) );
    }
    
    bool ban_indefinitely(entry* e) {
        ban->add(e);
        bool found = false;
        for (int i = 0; i < index; i++) {
            entry* existing = array + (sizeof(entry) * i);
            if (!strcmp(existing->country, e->country)) {
                found = true;
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

        return found;
    }

    bool unban(const char* nation) {
        if (ban->contains(nation)) {
            ban->remove(nation);
            return true;
        }
        return false;
    }

    // WARNING! Do not modify the print method.
    // Doing so will nullify your score for this activity.
    void print() {
        for (int i = 1; i <= capacity; i++) {
            cout << i << ": ";
            if (i <= index) {
                entry* existing = get(i);
                existing->print();
            } else {
                cout << "?" << endl;
            }
        }
    }
};