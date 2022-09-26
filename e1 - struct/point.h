#include <iostream>
#include <cmath>
using namespace std;

struct point {
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

    point* midpoint(point* p) {
        point* midpoint = (point*) malloc( sizeof(point) );
        midpoint->x = (this->x + p->x) / 2;
        midpoint->y = (this->y + p->y) / 2;
        return midpoint;
    }

    double distance(point* p) {
        int diff_x = this->x - p->x;
        int diff_y = this->y - p->y;
        int sq_dx = pow(diff_x, 2);
        int sq_dy = pow(diff_y, 2);
        double distance = sqrt(sq_dx + sq_dy);
        return distance;
    }
};