#include "Cell.h"
#include "cell_components/Membrane.h"
#include "cell_components/Nucleus.h"
#include "cell_components/Cytoplasm.h"
#include <string>

using namespace std;

Cell::Cell(){
	bool alive = true;
	Membrane membrane;
	Nucleus nucleus;
	Cytoplasm cytoplasm;
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