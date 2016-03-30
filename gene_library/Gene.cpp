#include "Gene.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

Gene::Gene(){

	sequenceFileName = "TEST/sequence.txt";

}
Gene::~Gene(){

}

string Gene::getId() const{
	return id;
}

string Gene::getChr() const{
	return chromosome;
}

string Gene::getSequence(){
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
void Gene::setSequence(string filename){
	sequenceFileName = filename;
}