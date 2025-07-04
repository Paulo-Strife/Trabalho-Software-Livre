CXX = g++
CXXFLAGS = -Wall -O2

BINARIOS = primo matriz matriz_op

all: $(BINARIOS)

primo: primo.cpp
	$(CXX) $(CXXFLAGS) -o primo primo.cpp

matriz: matriz.cpp
	$(CXX) $(CXXFLAGS) -o matriz matriz.cpp

matriz_op: matriz_op.cpp
	$(CXX) $(CXXFLAGS) -o matriz_op matriz_op.cpp

run-primo: primo
	./primo

run-matriz: matriz
	./matriz

run-matriz-op: matriz_op
	./matriz_op

clean:
	rm -f $(BINARIOS)
