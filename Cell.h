#ifndef DEF_CELL
#define DEF_CELL

#include <string>
#include "cell_components/Membrane.h"
#include "cell_components/Nucleus.h"
#include "cell_components/Cytoplasm.h"

class Cell{

	//Methods
	public:
	Cell(); //constructeur
	~Cell(); //destructeur
	bool isAlive();
	void toLife();
	void kill();
	bool isAnucleated();
	bool isMultinucleated();
	void initNucleus();

	//Attributs
 	private:
 	bool alive;
 	bool anucleated;
 	bool multinucleated;
 	Membrane membrane;
 	Cytoplasm cytoplasm;
 	Nucleus nucleus;
};

#endif