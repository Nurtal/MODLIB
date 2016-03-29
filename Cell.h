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

	//Attributs
 	private:
 	bool alive;
 	Membrane membrane;
 	Nucleus nucleus;
 	Cytoplasm cytoplasm;
};

#endif