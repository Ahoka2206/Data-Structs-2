#include "queue.h"
#include "arraylist.h"

class ArrayQueue : public Queue {
    ArrayList* array;
    public:
    ArrayQueue() {
        array = new ArrayList();
    }
    
    void enqueue(int e) {
        // array->add(e);
        array->addAt(e, size()+1);
    }

    int dequeue() {
        return array->removeAt(1);
    }
    int first() {
        return array->get(1);
    }
    int size() {
        return array->size();
    }
    bool isEmpty() {
        return size() == 0;
    }

    void print() {
        array->print();
    }
};