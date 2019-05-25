#ifndef MOTOR_H
#define MOTOR_H
#include <string>
using std::string;
class Motor{
    private: 
        string configuracion;
        string electrico;
    public:
        Motor();
        Motor(string,string);
        string getElectrico();
        string getConfiguracion();
        void setElectrico(string);
        void setConfiguracion(string);
        string toString();
        string toString2();

};
#endif
