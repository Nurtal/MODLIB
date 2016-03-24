#include <iostream>
#include "Cell.h"
#include "Leucocyte.h"
#include "Lymphocyte.h"
#include "LymphocyteT.h"
using namespace std;



int main(){

	Cell machin;
	Leucocyte truc;
	Lymphocyte murlock1;
	LymphocyteT	murlock2;

	murlock2.setClasse("cytotoxique");
	machin.toLife();
	machin.isAlive();
	return 0;
}