#include "Cell.h"
#include "../cell_components/Membrane.h"
#include "../cell_components/Nucleus.h"
#include "../cell_components/Cytoplasm.h"
#include <string>

using namespace std;

Cell::Cell(){
	alive = true;
	anucleated = false;
	multinucleated = false;
	membrane = Membrane();
	cytoplasm = Cytoplasm();
}

Cell::~Cell(){

}

//Get
bool Cell::isAlive(){
	return alive;
}
bool Cell::isAnucleated(){
	return anucleated;
}
bool Cell::isMultinucleated(){
	return multinucleated;
}

string Cell::getId(){
	return id;
}

//Set
void Cell::toLife(){
	alive = true;
}
void Cell::kill(){
	alive = false;
}
void Cell::initNucleus(){
	if(!(anucleated) && !(multinucleated)){
		nucleus = Nucleus();
	}
}

void Cell::setId(string idToSet){
	id = idToSet;
}