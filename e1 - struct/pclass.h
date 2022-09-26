#include <iostream>
#include <cmath>
using namespace std;

class Point {
    public:
        // FIELDS - data
        int x;
        int y;

        // METHODS - operations
        void print() { // print the data of our point
            cout << "(" << x << ", " << y << ")";
        }

        void move_x(int x) {
            this->x += x;
        }

        void move_y(int y) {
            this->y += y;
        }

        void switch_coords() {
            int temp = x;
            x = y;
            y = temp;
        }

        Point* midpoint(Point* p) {
            Point* midpoint = (Point*) malloc( sizeof(Point) );
            midpoint->x = (this->x + p->x) / 2;
            midpoint->y = (this->y + p->y) / 2;
            return midpoint;
        }

        double distance(Point* p) {
            int diff_x = this->x - p->x;
            int diff_y = this->y - p->y;
            int sq_dx = pow(diff_x, 2);
            int sq_dy = pow(diff_y, 2);
            double distance = sqrt(sq_dx + sq_dy);
            return distance;
        }
};