#ifndef COLOR_H
#define COLOR_H
#include <string>
using std::string;
class Color{
    private:
        string color;
        string acabado;
    public:
        Color();
        Color(string,string);
        string getColor();
        string getAcabado();
        void setColor(string);
        void setAcabado(string);     
        string toString();
         
        
};
#endif