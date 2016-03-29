
CXX=g++
CDFLAGS=-w -wall -ansi -pedantic
LDFLAGS=
EXEC=simulator



simulator: cell.o main.o
	$(CXX) -o simulator cell.o main.o $(LDFLAGS)

cell.o: Cell.cpp
	$(CXX) -o cell.o -c Cell.cpp $(CFLAGS)

main.o: main.cpp Cell.h
	$(CXX) -o main.o -c main.cpp $(CFLAGS)

clean:
	rm -rf *.o

mrproper:
	rm -rf $(EXEC)
