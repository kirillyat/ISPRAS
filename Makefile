all:
	g++ QuadraticEquation.cpp main.cpp -o QE

qe: main.cpp

QuadraticEquation.o: QuadraticEquation.cpp
	g++ -c -Wall QuadraticEquation.cpp
