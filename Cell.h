#ifndef DEF_CELL
#define DEF_CELL

#include <string>

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
};

#endif