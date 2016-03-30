#ifndef DEF_PROTEIN
#define DEF_PROTEIN

#include <string>

class Protein{

	//Methods
	public:
	Protein();
	~Protein();
	std::string getId() const;
	std::string getSequence();

	//Attributs
	private:
	std::string id;
	std::string sequenceFileName;




};

#endif