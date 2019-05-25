#ifndef CHASIS_H
#define CHASIS_H
#include <string>
using std::string;
class Chasis{
    private: 
        string tiporueda;
        string automatica;
    public:
        Chasis();
        Chasis(string,string);
        string getAutomatica();
        string getTiporueda();
        void setAutomatica(string);
        void setTiporueda(string);
        string toString();
       

};
#endif