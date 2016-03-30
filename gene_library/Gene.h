#ifndef DEF_GENE
#define DEF_GENE

#include <string>


class Gene{


	public:
	//Methods
	Gene();
	~Gene();
	std::string getId() const;
	std::string getChr() const;
	std::string getSequence();
	void setSequence(std::string);

	//Attributs
	private:
	std::string id;
	std::string chromosome;
	std::string sequenceFileName;


};


#endif