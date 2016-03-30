#include "Membrane.h"
#include "../protein_library/Protein.h"
#include <string>
#include <vector>


using namespace std;



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

void Membrane::addMembraneProtein(Protein prot){
	membraneProtein.push_back(prot);
}
