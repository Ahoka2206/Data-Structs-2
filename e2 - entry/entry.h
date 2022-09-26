#include <iostream>
using namespace std;

struct entry {
	int score;
	//string name;
	const char* name = (char*) malloc ( sizeof(char)*40 );
	//string country;
	const char* country = (char*) malloc ( sizeof(char)*3 );
	
	bool compare(entry* other){
		if(this->score > other->score){
			return true;
		}
		return false;
	}
	
	void print(){
		cout << name << "(" << country << ") - " << score << endl;
	}
};
