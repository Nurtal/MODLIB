#include "Cell.h"
#include <string>

using namespace std;

Cell::Cell(){
	bool alive = true;
}

Cell::~Cell(){

}

//Get
bool Cell::isAlive(){
	return alive;
}


//Set
void Cell::toLife(){
	alive = true;
}
void Cell::kill(){
	alive = false;
}