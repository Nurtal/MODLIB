#ifndef DEF_PROTEIN
#define DEF_PROTEIN

#include "../gene_library/Gene.h"
#include <string>

class Protein{

	//Methods
	public:
	Protein();
	~Protein();
	std::string getId() const;
	std::string getSequence();
	std::string getGeneName();
	Gene getGene() const;
	void setSequence(std::string);
	void setGeneOfOrigin(Gene);

	//Attributs
	private:
	std::string id;
	std::string sequenceFileName;
	Gene gene;



};

#endif