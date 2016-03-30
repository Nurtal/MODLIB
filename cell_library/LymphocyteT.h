#ifndef DEF_LYMPHOCYTET
#define DEF_LYMPHOCYTET
#include <string>
#include "Lymphocyte.h"

class LymphocyteT : public Lymphocyte{

	//Methods
	public:
	LymphocyteT();
	~LymphocyteT();
	std::string getClasse();
	void setClasse(std::string);

	//Attributs
	private:
	std::string classe;

};

#endif