#include <iostream>
#include <string>
#include <unistd.h>
#include "../lib/jlMenuOpciones.h"
#include "../lib/jlLoadingBars.h"
#include "../lib/jlValidacionEntrada.h"
#include "../lib/jlValidacionUsuario.h"
#include "../lib/patColor.h"
#include "../lib/animation.h"

#define TIEMPO 10000

using namespace std;
int main()
{
    setTextColor(textColorCyan);
    string Cedula="1750269407";
    string Correo="juan.leon01@epn.edu.ec";
    string Nombre="Juan Sebastian Leon Espinosa";

    jlCambioMayus(Cedula, Correo, Nombre);
    cout<< "CEDULA: " << Cedula << endl;
    cout<< "CORREO: " << Correo << endl;
    cout<< "NOMBRE: " << Nombre << endl;

    string observador=" ";
    int jlValidacion = jlValidarUsuario("profe", "1234", "sebas", "1750269407", observador);
    if(jlValidacion==1){

    setTextColor(textColorMagenta);
int jlEleccion=0;
  string lobo="lobo ";
    string cape="cape ";
    string uvas="uvas ";
    
     string contenido[3];
        contenido[0]=lobo;
        contenido[1]=cape;
        contenido[2]=uvas;

    string izquierda[4];
        izquierda[0]=lobo;
        izquierda[1]=cape;
        izquierda[2]=uvas;
        izquierda[3]=observador;

    string balsa[2];
        balsa[0]=observador;
        balsa[1]=" ";
    
    string derecha[4];
        derecha[0]="_";
        derecha[1]="_";
        derecha[2]="_";
        derecha[3]=observador;
    
    string pasajero=" ";
    int vuelta=0;
    char decid;
// do{
    setTextColor(textColorGreen);
    cout << izquierda[0] 
        << izquierda[1] 
        << izquierda[2]
        << "........................................................................."
         << derecha[0] 
        << derecha[1] 
        << derecha[2] << endl;
do{
    int jlNumeroOpc=4;
    string jlOpciones="0 Solo\n1 Lobo\n2 Caperucita\n3 Uvas\n4 SALIR\n>Cruzar ";
    jlMenuOpciones(jlOpciones, jlNumeroOpc, jlEleccion);
    cout << "has escogido la opcion " << jlEleccion<< endl << endl;






    if (vuelta % 2 == 0) {
        derecha[3] = observador;
        izquierda[3] = "_";
            if (jlEleccion == 1) {
                derecha[0] = contenido[0];
                pasajero=izquierda[0];
                izquierda[0] = "_";

            }
            else if (jlEleccion == 2) {
                derecha[1] = contenido[1];
                pasajero=izquierda[1];
                izquierda[1] = "_";
            }
            else if (jlEleccion == 3) {
                derecha[2] = contenido[2];
                pasajero=izquierda[2];
                izquierda[2] = "_";
            }
            
    }

    if (vuelta % 2 != 0) {
        izquierda[3] = observador;
        derecha[3] = " ";
            if (jlEleccion == 1) {
                izquierda[0] = contenido[0];
                pasajero=derecha[0];
                derecha[0] = "_";
            }
            else if (jlEleccion == 2) {
                izquierda[1] = contenido[1];
                pasajero=derecha[1];
                derecha[1] = "_";
            }
            else if (jlEleccion == 3) {
                izquierda[2] = contenido[2];
                pasajero=derecha[2];
                derecha[2] = "_";                
            } else{
                 pasajero=" ";
            }
                
    }



        if(izquierda[3]!=observador)
    {
        if ( izquierda[1]==cape && izquierda[2]==uvas)
        {
            cout << "Caperuza se trago las uvas!!";
            return 0;
        } 

        if (izquierda[1]==cape && izquierda[0]==lobo)
        {
            cout << "El lobo se trago a la caperuza!!";
            return 0;
        } 
    }

 if(derecha[3]!=observador)
    {
        if ( derecha[1]==cape && derecha[2]==uvas)
        {
            cout << "Caperuza se trago las uvas!!";
            return 0;
        } 

        if (derecha[1]==cape && derecha[0]==lobo)
        {
            cout << "El lobo se trago a la caperuza!!";
            return 0;
        } 
    }
    clearScreen();
    if (vuelta%2!=0)
        barcoDerecha(70, observador, pasajero, izquierda, derecha);
    if (vuelta%2==0)
        barcoIzquierda(70, observador, pasajero, izquierda, derecha);
    vuelta++;

     if ( derecha[0]==lobo && derecha[1]==cape && derecha[2]==uvas)
        {
            cout<<"bien, ganaste!!!";
            return 0;
        }
    }while(jlEleccion!=4);

    }
 cout << "presione 1 para seguir jugando \n presione cualquier otra tecla para salir ";
//     cin >> decid;
//  } while(decid=="1");

}
