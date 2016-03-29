
CXX=g++
CFLAGS=-W -Wall -ansi -pedantic
LDFLAGS=
EXEC=simulator


simulator: main.o cell.o leucocyte.o lymphocyte.o lymphocyteT.o membrane.o nucleus.o cytoplasm.o protein.o 
	$(CXX) -o simulator main.o cell.o leucocyte.o lymphocyte.o lymphocyteT.o membrane.o nucleus.o cytoplasm.o protein.o $(LDFLAGS)

cell.o: Cell.cpp cell_components/Membrane.h cell_components/Nucleus.h cell_components/Cytoplasm.h
	$(CXX) -o cell.o -c Cell.cpp $(CFLAGS)

leucocyte.o: Leucocyte.cpp
	$(CXX) -o leucocyte.o -c Leucocyte.cpp $(CFLAGS)

lymphocyte.o: Lymphocyte.cpp
	$(CXX) -o lymphocyte.o -c Lymphocyte.cpp $(CFLAGS)

lymphocyteT.o: LymphocyteT.cpp
	$(CXX) -o lymphocyteT.o -c LymphocyteT.cpp $(CFLAGS)

membrane.o: cell_components/Membrane.cpp protein_library/Protein.h
	$(CXX) -o membrane.o -c cell_components/Membrane.cpp $(CFLAGS)

nucleus.o: cell_components/Nucleus.cpp
	$(CXX) -o nucleus.o -c cell_components/Nucleus.cpp $(CFLAGS)

protein.o: protein_library/Protein.cpp
	$(CXX) -o protein.o -c protein_library/Protein.cpp $(CFLAGS)

cytoplasm.o: cell_components/Cytoplasm.cpp
	$(CXX) -o cytoplasm.o -c cell_components/Cytoplasm.cpp $(CFLAGS)

main.o: main.cpp Cell.h Leucocyte.h Lymphocyte.h LymphocyteT.h
	$(CXX) -o main.o -c main.cpp $(CFLAGS)

clean:
	rm -rf *.o

mrproper:
	rm -rf $(EXEC)
