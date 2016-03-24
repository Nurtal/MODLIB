#include "LymphocyteT.h"
#include <string>
using namespace std;

LymphocyteT::LymphocyteT(){

	classe = "undef";

}

LymphocyteT::~LymphocyteT(){
	
}

//get
string LymphocyteT::getClasse(){
	/*
	* Return the classe of Lymphocyte T,
	* could be [FIXEME]
	*/
	return classe;
}



//set
void LymphocyteT::setClasse(string classeToSet){
	if(classeToSet == "cytotoxique"){
		classe = classeToSet;
	}else if(classeToSet == "auxiliaire"){
		classe = classeToSet;
	}else if(classeToSet == "suppresseurs"){
		classe = classeToSet;
	}else{
		classe = "undef";
	}
}