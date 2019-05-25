main.out: main.o Carro.o Motor.o Color.o Chasis.o
	g++ main.o Carro.o Motor.o Color.o Chasis.o -o main.out
main.o: main.cpp Carro.h Motor.h Color.h Chasis.h 
	g++ -c main.cpp
Motor.o: Motor.cpp Motor.h
	g++ -c Motor.cpp
Chasis.o: Chasis.cpp Chasis.h
	g++ -c Chasis.cpp
Color.o: Color.cpp Color.h
	g++ -c Color.cpp
Carro.o: Carro.cpp Carro.h Motor.cpp Motor.h Color.cpp Color.h Chasis.cpp Chasis.h
	g++ -c Carro.cpp  