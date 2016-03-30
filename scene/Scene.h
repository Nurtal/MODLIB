#ifndef DEF_SCENE
#define DEF_SCENE

#include "../cell_library/Cell.h"
#include <string>
#include <vector>

class Scene{
	
	//Methods
	public:
	Scene();
	~Scene();
	std::string getName() const;
	double getTemperature() const;
	double getPH() const;
	double getPressure() const;
	std::vector<Cell> getCellPopulation();
	void setName(std::string);
	void setTemperature(double);
	void setPH(double);
	void setPressure(double);
	void addCell(Cell);
	void printPopulationStatus();

	//Attributs
	private:
	std::string name;
	double temperature;
	double ph;
	double pressure;
	int maxPopSize;
	std::vector<Cell> cellPopulation;






};

#endif