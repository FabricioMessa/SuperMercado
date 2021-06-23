#include <iostream>
#include <stdio.h>
using namespace std;
#include <fstream>

void caja_final(float precio){
    cout << "\n";
    ofstream boleta;
    boleta.open("Boleta.txt");
    boleta << "El precio final a pagar es de " << precio << "s/. Que tenga buen d�a.\n";

}
