/*
Nombre: Juan Sebastian Leon Espinosa
*/

#include <iostream>
#include <string>
#include <unistd.h>
#define ESPERA 10000
/* [<-=->                                   ]
void LoadingBar4(int size, int veces)
*/
void barcoDerecha(int size, const string& estatico, const string& pasaj, string* izq, string* der)
{
    const int MAX_SIZE = size + 1;
    const int STR_SIZE = 100;
    string barra[MAX_SIZE];
    float porcentaje = (float)100 / (float)size;
    

    for (int i = 0; i < size; i++)
        barra[i] = ".";
    barra[size] = "";

    for (int i = 1; i < size - 17; i++)
    {
        cout << izq[0] 
            << izq[1] 
            << izq[2];

        barra[size-i - 17] = ".";
        barra[size-i-16] = "\\";
        barra[size-i-15] = "_";

        barra[size-i-14] = estatico.substr(0, 5);

        barra[size-i -13] = "_";
        barra[size-i -12] = ",";
        barra[size-i -11] = "_";

        barra[size-i -10] = pasaj.substr(0, 4);

        barra[size-i -9] = "_";
        barra[size-i -8] = "/";
        barra[size-i -7] = ".";

        for (int j = 0; j <= size; j++)
            cout << barra[j];

        cout << der[0] 
             << der[1] 
             << der[2]
             << "\r";
  
        usleep(ESPERA);
        cout.flush();
    }

    cout << endl;
}


void barcoIzquierda(int size, const string& estatico, const string& pasaj, string* izq, string* der)
{
    const int MAX_SIZE = size + 1;
    const int STR_SIZE = 100;
    string barra[MAX_SIZE];
    float porcentaje = (float)100 / (float)size;
    

    for (int i = 0; i < size; i++)
        barra[i] = ".";
    barra[size] = "";

    for (int i = 1; i < size - 17; i++)
    {
        cout << izq[0] 
            << izq[1] 
            << izq[2];

        barra[i - 1] = ".";
        barra[i] = "\\";
        barra[i + 1] = "_";

        barra[i + 2] = estatico.substr(0, 5);

        barra[i + 8] = "_";
        barra[i + 9] = ",";
        barra[i + 10] = "_";

        barra[i + 11] = pasaj.substr(0, 4);

        barra[i + 15] = "_";
        barra[i + 16] = "/";
        barra[i + 17] = ".";

        for (int j = 0; j <= size; j++)
            cout << barra[j];

        cout << der[0] 
             << der[1] 
             << der[2]
             << "\r";
  
        usleep(ESPERA);
        cout.flush();
    }

    cout << endl;
}