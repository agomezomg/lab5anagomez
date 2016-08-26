clases:	main.o matrixes.o
	g++ main.o matrixes.o -o clases

clases.o: clases.cpp matrixes.h
	g++ -c main.cpp

matrixes: matrixes.h matrixes.cpp
	g++ -c matrixes.cpp

clean:
	rm *.o matrixes 
