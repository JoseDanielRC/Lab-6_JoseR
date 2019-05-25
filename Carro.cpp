#include "Carro.h"
#include "Motor.h"
#include "Chasis.h"
#include "Color.h"
    Carro::Carro(){
        nombre="";
        numero="";
}
    Carro::Carro(string nombre, string numero,Motor motor,Chasis chasis){
        this->nombre=nombre;
        this->numero=numero;
        this->motor=motor;
        this->chasis=chasis;
       
        
}
    string Carro::getNombre(){
        return nombre;
}
    void Carro::setNombre(string nombre){
        this->nombre=nombre;
}
    string Carro::getNumero(){
        return numero;
}
    void Carro::setNumero(string numero){
        this->numero=numero;
}
    Motor Carro::getMotor(){
        return motor;
}
    Chasis Carro::getChasis(){
        return chasis;
}
string Carro::toString2(int num){
    if(num!=0){
        return "C";
    }else{
        return "P";
    }
}
string Carro::toString(){
    return motor.toString()+chasis.toString()+color.toString();
}