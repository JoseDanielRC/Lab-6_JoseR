#include "Chasis.h"
Chasis::Chasis(){
       tiporueda="";
       automatica=""; 
    }
Chasis::Chasis(string tiporueda, string automatica){
        this->tiporueda=tiporueda;
        this->automatica=automatica;
    }
string Chasis::getAutomatica(){
    return automatica;
    }
string Chasis::getTiporueda(){
    return tiporueda;
}
void Chasis::setAutomatica(string automatica){
    this->automatica=automatica;
}
void Chasis::setTiporueda(string tiporueda){
    this->tiporueda=tiporueda;
}
string Chasis::toString(){
    return tiporueda;
}