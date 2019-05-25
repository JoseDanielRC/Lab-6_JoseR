#include<iostream>
#include <string>
#include "Carro.h"
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
Carro*** inicializacion(Carro***matrizcarros){
        matrizcarros= new Carro**[5];
        for(int i=0;i<5;i++){
                matrizcarros[i]=new Carro*[4];
                }
        return matrizcarros;
}
void imprimirmatriz(Carro***matrizcarros){
        for(int i=0;i<5;i++){
                for ( int j = 0; j < 4;j++)
                {
                    cout<<"["<<matrizcarros[i][j]->toString2(j)<<"]";
                }
                cout<<endl;
                }
        
}
int main(){
    char resp='s';
    int opcion=0,cont=0;
    string nombre="",numero="",tipomotor="",conmotor="",tiporueda="",transmicion="",colorc="",acabado="";
    Carro***matrizcarros=inicializacion(matrizcarros);
    vector<Carro*> producidos;

    while(resp=='s'){
        cout<<"1.Agregar una linea de produccion\n"
            "2. Ver lineas de produccion\n"
            "4. Ver listado de carros producidos\n"
            "5. Avanzar"<<endl;
            cin>>opcion;
            switch (opcion)
            {
            case 1:
                if (cont<5){            
                    cout<<"Ingrese nombre de auto"<<endl;
                    cin>>nombre;
                    cout<<"Ingrese numero de auto"<<endl;
                    cin>>numero;
                    cout<<"Ingrese tipo de motor"<<endl;
                    cin>>tipomotor;
                    cout<<"Ingrese configuracion de motor"<<endl;
                    cin>>conmotor;
                    cout<<"Ingrese tipo de rueda de auto"<<endl;
                    cin>>tiporueda;
                    cout<<"Ingrese transmision "<<endl;
                    cin>>transmicion;
                    cout<<"Ingrese color de auto"<<endl;
                    cin>>colorc;
                    cout<<"Ingrese acabado de auto"<<endl;
                    cin>> acabado;   
                    Motor motor(tipomotor,conmotor);
                    Chasis chasis(tiporueda,transmicion);
                    Color color(colorc,acabado);
                    matrizcarros[cont][0]=new Carro(nombre,numero,motor,chasis);         
            }
                break;
            
            case 2:
                    imprimirmatriz(matrizcarros);
                break;
            case 4:
            for (int i = 0; i < producidos.size(); i++)
            {
                cout<<producidos[i];
            }
            

                break;
            case 5:
            for (int i = 0; i <5; i++)
            {
                for (int j = 0; j <4 ; j++)
                {
                    if(j!=4){
                    matrizcarros[i][j]=matrizcarros[i][j+1];
                    //matrizcarros[i][1]=new Carro(matrizcarros[i][0]->getNombre(),matrizcarros[i][0]->getNumero(),matrizcarros[i][0]->getMotor(),matrizcarros[i][0]->getChasis());
                    }else if(j==4&&matrizcarros[i][j]!=NULL){
                producidos.push_back(matrizcarros[i][j]);
                }
                
                
                }
            }
            
                break;
            }
    }

return 0;
}