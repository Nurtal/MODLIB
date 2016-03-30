
CXX=g++
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
EXEC=simulator


simulator: main.o cell.o leucocyte.o lymphocyte.o lymphocyteT.o membrane.o nucleus.o cytoplasm.o protein.o gene.o scene.o 
	$(CXX) -o simulator main.o cell.o leucocyte.o lymphocyte.o lymphocyteT.o membrane.o nucleus.o cytoplasm.o protein.o gene.o scene.o $(LDFLAGS)

cell.o: cell_library/Cell.cpp cell_components/Membrane.h cell_components/Nucleus.h cell_components/Cytoplasm.h
	$(CXX) -o cell.o -c cell_library/Cell.cpp $(CFLAGS)

leucocyte.o: cell_library/Leucocyte.cpp
	$(CXX) -o leucocyte.o -c cell_library/Leucocyte.cpp $(CFLAGS)

lymphocyte.o: cell_library/Lymphocyte.cpp
	$(CXX) -o lymphocyte.o -c cell_library/Lymphocyte.cpp $(CFLAGS)

lymphocyteT.o: cell_library/LymphocyteT.cpp
	$(CXX) -o lymphocyteT.o -c cell_library/LymphocyteT.cpp $(CFLAGS)

membrane.o: cell_components/Membrane.cpp protein_library/Protein.h
	$(CXX) -o membrane.o -c cell_components/Membrane.cpp $(CFLAGS)

nucleus.o: cell_components/Nucleus.cpp
	$(CXX) -o nucleus.o -c cell_components/Nucleus.cpp $(CFLAGS)

protein.o: protein_library/Protein.cpp
	$(CXX) -o protein.o -c protein_library/Protein.cpp $(CFLAGS)

cytoplasm.o: cell_components/Cytoplasm.cpp
	$(CXX) -o cytoplasm.o -c cell_components/Cytoplasm.cpp $(CFLAGS)

gene.o: gene_library/Gene.cpp
	$(CXX) -o gene.o -c gene_library/Gene.cpp $(CFLAGS)

scene.o: scene/Scene.cpp
	$(CXX) -o scene.o -c scene/Scene.cpp $(CFLAGS)

main.o: main.cpp cell_library/Cell.h cell_library/Leucocyte.h cell_library/Lymphocyte.h cell_library/LymphocyteT.h
	$(CXX) -o main.o -c main.cpp $(CFLAGS)

clean:
	rm -rf *.o

mrproper:
	rm -rf $(EXEC)
