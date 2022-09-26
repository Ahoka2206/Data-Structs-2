#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

struct point{
    int x;
    int y;

    void print(){
        cout << "(" << x << "," << y << ")";
    }
    
    void move_x(int x){
        this->x += x;
    }
    
    void move_y(int y){
        this->y += y;
    }

    void switch_coords(){
        int temp = x;
        x = y;
        y = temp;
    }

    point* midpoint(point* p){
        point* midpoint = (point*) malloc(sizeof(point));
        midpoint->x = (this->x + p->x) / 2;
        midpoint->y = (this->y + p->y) / 2;
    return midpoint;
    }
    
    double distance(point* p){
    	int num1 = this->x - p->x; 
    	int num2 = this->y - p->y; 
    	int pow1= pow(num1,2);
    	int pow2= pow(num2,2);
    	double distance = sqrt(pow1 + pow2);
    	return distance;
	}
};
