#include <iostream>
#include "Cell.h"
#include "Leucocyte.h"
#include "Lymphocyte.h"
#include "LymphocyteT.h"
#include "protein_library/Protein.h"
using namespace std;



int main(){


	/*
	Cell machin;
	Leucocyte truc;
	Lymphocyte murlock1;
	LymphocyteT	murlock2;
	cout << "Processing" << "\n";
	murlock2.setClasse("cytotoxique");
	machin.toLife();
	machin.isAlive();
	cout << machin.isAnucleated() << "\n";
	*/


	//Protein Test
	Protein stuffy = Protein();
	std::string seq = stuffy.getSequence();
	cout << seq << "\n";




	return 0;
}