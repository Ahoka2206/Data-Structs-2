class List {
    public:
        virtual void add(int num) = 0;
        virtual void remove(int num) = 0;
        virtual int get(int pos) = 0;
        virtual int size() = 0;
        virtual int addAt(int num, int pos) = 0;
};
