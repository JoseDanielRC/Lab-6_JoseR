#include "Motor.h"
Motor::Motor(){
    electrico="";
    configuracion="";

}
Motor::Motor(string configuracion,string electrico){
    this->electrico=electrico;
    this->configuracion=configuracion;
}
string Motor::getElectrico(){
    return electrico;
}
string Motor::getConfiguracion(){
    return configuracion;
}
void Motor::setElectrico(string electrico){
    this->electrico=electrico;
}
void Motor::setConfiguracion(string configuracion){
    this->configuracion=configuracion;
}
string Motor::toString(){
    return configuracion ;
}
