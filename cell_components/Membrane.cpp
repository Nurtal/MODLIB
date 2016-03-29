#include "Membrane.h"
#include "../protein_library/Protein.h"
#include <string>
#include <vector>


using namespace std;

/*
 Problem With Vector initialisation
*/



Membrane::Membrane(){

	membraneProtein.reserve(10);

}
Membrane::~Membrane(){

}


void endocytosis(){

}
void exocytosis(){

}
void diffusion(){

}

void addMembraneProtein(Protein prot){
	//FIXE ME
	membraneProtein.push_back(prot);
}
