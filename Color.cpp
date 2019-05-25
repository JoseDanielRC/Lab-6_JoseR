#include "Color.h"
Color::Color(){
    color="";
    acabado="";
}
Color::Color(string color,string acabado){
    this->color=color;
    this->acabado=acabado;

}
string Color::getColor(){
    return color;
}
string Color::getAcabado(){
    return acabado;
}
void Color::setColor(string color){
    this->color=color;
}
void Color::setAcabado(string acabado){
    this->acabado=acabado;
}
string Color::toString(){
    return color+" "+acabado;
}