clases:	main.o matrix.o
	g++ main.o matrix.o -o clases

clases.o: clases.cpp matrix.h
	g++ -c main.cpp

matrix: matrix.h matrix.cpp
	g++ -c matrix.cpp

clean:
	rm *.o matrix 
