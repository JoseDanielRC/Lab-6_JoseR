#ifndef CARRO_H
#define CARRO_H
#include <string>
#include "Motor.h"
#include "Chasis.h"
#include "Color.h"
using std::string;
class Carro{
    private:
        Motor motor;
        Chasis chasis;
        Color color;
        string nombre;
        string numero;
    public:
        Carro();
        Carro(string,string,Motor,Chasis);
        string getNombre();
        string getNumero();
        void setNombre(string);
        void setNumero(string);  
        Motor getMotor();
        Chasis getChasis(); 
        string toString(); 
        string toString2(int);   
        
};
#endif