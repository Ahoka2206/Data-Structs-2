#include "entry.h"
class Board{
    virtual void add(entry* e) = 0;
    virtual void remove(const char* person) = 0;
    virtual entry* get(int pos) = 0;
    virtual void print() = 0;
};
