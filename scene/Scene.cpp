#include "Scene.h"
#include "../cell_library/Cell.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

Scene::Scene(){

	maxPopSize = 10; //Default value
	cellPopulation.reserve(maxPopSize);

}
Scene::~Scene(){

}


//Get
string Scene::getName() const{
	return name;
}

double Scene::getTemperature() const{
	return temperature; 
}

double Scene::getPH() const{
	return ph;
}

double Scene::getPressure() const{
	return pressure;
}

vector<Cell> Scene::getCellPopulation(){
	return cellPopulation;
}

//Set
void Scene::setName(string nameOfTheScene){
	name = nameOfTheScene;
}

void Scene::setTemperature(double temperatureToSet){
	temperature = temperatureToSet;
}

void Scene::setPH(double phToSet){
	ph = phToSet;
}

void Scene::setPressure(double pressureToSet){
	pressure = pressureToSet;
}

//Other
void Scene::addCell(Cell cellToAdd){
	cellPopulation.push_back(cellToAdd);
}

void Scene::printPopulationStatus(){	
	for(unsigned int i=0; i < cellPopulation.size(); i++){
   		cout << cellPopulation[i].getId() << "\n";
   		cout << "Is Alive :" << cellPopulation[i].isAlive() << "\n";
	}
}

