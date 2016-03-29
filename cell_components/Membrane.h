#ifndef DEF_MEMBRANE
#define DEF_MEMBRANE

#include "../protein_library/Protein.h"

#include <string>
#include <vector>

class Membrane{

	//Methods
	public:
	Membrane();
	~Membrane();
	void endocytosis();
	void exocytosis();
	void diffusion();
	void addMembraneProtein(Protein);

	//Attributs
	std::vector<Protein> membraneProtein;

};

#endif