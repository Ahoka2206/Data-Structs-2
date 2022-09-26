#include "arraylist.h"

class Deque {
    public:
    virtual void addFirst(int e) = 0;
    virtual void addLast(int e) = 0;

    virtual int removeFirst() = 0;
    virtual int removeLast() = 0;

    virtual int size() = 0;
    virtual bool isEmpty() = 0;
};

class ArrayDeque : public Deque {
    ArrayList* array;
    public:
    ArrayDeque() {
        array = new ArrayList();
    }

    void addFirst(int e) {
        array->addAt(e, 1);
    }
    
    void addLast(int e) {
        // array->add(e);
        array->addAt(e, size()+1);
    }

    int removeFirst() {
        return array->removeAt(1);
    }

    int removeLast() {
        return array->removeAt(size());
    }

    int size(){
        return array->size();
    }
    bool isEmpty() {
        return size() == 0;
    }

    void print() {
        array->print();
    }
};