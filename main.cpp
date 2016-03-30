#include <iostream>
#include "cell_library/Cell.h"
//#include "cell_library/Leucocyte.h"
#include "cell_library/Lymphocyte.h"
#include "cell_library/LymphocyteT.h"
//#include "protein_library/Protein.h"
#include "gene_library/Gene.h"
#include "scene/Scene.h"
using namespace std;



int main(){


	
	Cell machin;
	Leucocyte truc;
	Lymphocyte murlock1;
	LymphocyteT	murlock2;
	cout << "Processing" << "\n";
	murlock2.setClasse("cytotoxique");
	machin.toLife();
	machin.isAlive();
	machin.setId("machin");
	truc.setId("Leucotruc");
	cout << machin.isAnucleated() << "\n";
	


	//Protein Test
	Protein stuffy = Protein();
	std::string seq = stuffy.getSequence();
	cout << seq << "\n";

	//Gene Test
	Gene mimi = Gene();
	std::string dnaSeq = mimi.getSequence();
	cout << dnaSeq << "\n";

	//Scene Test
	Scene myWorld = Scene();
	double p = 45.65;
	myWorld.setTemperature(p);
	double r = myWorld.getTemperature();
	cout << r << "\n";
	myWorld.addCell(machin);
	myWorld.addCell(truc);
	myWorld.printPopulationStatus();
	truc.kill();
	Scene myNewWorld = Scene();
	myNewWorld.addCell(machin);
	myNewWorld.addCell(truc);
	cout << "-------------" << "\n";
	myNewWorld.printPopulationStatus();




	return 0;
}