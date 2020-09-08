all:
	g++ QuadraticEquation.cpp -o QuadraticEquation.o

QuadraticEquation.o: QuadraticEquation.cpp
	g++ -c -Wall QuadraticEquation.cpp
