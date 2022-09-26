// WARNING! Do not modify this file!
// Doing so will nullify your score for this activity.
class List {
    public:
        virtual int add(int num) = 0;
        virtual int remove(int num) = 0;
        virtual int get(int pos) = 0;
        virtual int size() = 0;
        virtual bool addAt(int num, int pos) = 0;
        virtual int removeAt(int pos) = 0;
        virtual int removeAll(int num) = 0;
        virtual int contains(int num) = 0;
        virtual int count(int num) = 0;
        virtual void print() = 0;
};
