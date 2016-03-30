#include <iostream>
#include <fstream>
#include <sstream>
#include "Protein.h"
#include <string>


using namespace std;

Protein::Protein(){

	sequenceFileName = "TEST/sequence.txt";

}
Protein::~Protein(){

}


//get
string Protein::getId() const{
	return id;
}

string Protein::getSequence(){
	string line;
	string sequence = "";
	ifstream sequenceFile(sequenceFileName.c_str());
	if(sequenceFile.is_open()){
		while(getline(sequenceFile, line)){
			sequence = sequence + line;
		}
		sequenceFile.close();
	}
	return sequence;
}


//set