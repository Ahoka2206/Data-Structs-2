#include <iostream>
#include "points.h"
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    point* p1 = (point*) malloc(sizeof(point));
    p1->x = x1;
    p1->y = y1;
    cout << "Point 1: ";
    p1->print();

    point* p2 = (point*) malloc(sizeof(point));
    p2->x = x2;
    p2->y = y2;
    cout << endl << "Point 2: ";
    p2->print();
    
    p1->move_x(-5);
    p2->move_y(9); 
    cout << endl << "Point 1: ";
    p1->print();
    cout << endl << "Point 2: ";
	p2->print();
	
    p1->switch_coords();
    cout << endl << "New Coordinates_Point 1: ";
    p1->print();
    
    p2->switch_coords();
    cout << endl << "New Coordinates_Point 2: ";
    p2->print();
    
    point* midpoint = p1->midpoint(p2);
    cout << endl << "Midpoint: ";
    midpoint->print();
    
    double distance = p1->distance(p2);
    cout << endl << "Distance: " << distance;
    
    
    return 0;
}


