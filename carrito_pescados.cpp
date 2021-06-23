#include <iostream>
#include <stdio.h>
#include "productos.h"
#include "caja_final.h"
using namespace std;
#include <fstream>

void carrito_pescados(int verduras, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (verduras)
    {
        case 1:
            float preciofinalbonito;
            preciofinalbonito = cantidad_producto * 3.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Bonito || Su costo final de esta operacion es: " << preciofinalbonito << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalbonito);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalfurel;
            preciofinalfurel = cantidad_producto * 2.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Furel || Su costo final de esta operacion es: " << preciofinalfurel << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalfurel);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalcamaron;
            preciofinalcamaron = cantidad_producto * 2.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Camaron || Su costo final de esta operacion es: " << preciofinalcamaron << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalcamaron);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalanchoveta;
            preciofinalanchoveta = cantidad_producto * 4.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Anchobeta || Su costo final de esta operacion es: " << preciofinalanchoveta << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalanchoveta);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalglobo;
            preciofinalglobo = cantidad_producto * 3.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pez globo || Su costo final de esta operacion es: " << preciofinalglobo << "s/.\n";
            cout << "\nSe adjunta para la suma final";
            do
            {
                cout << "\nDesea hacer otra operacion?(S/N): ";
                cin >> decision;
                if (decision == 'S')
                {
                    productos(answer);
                }
                else if(decision == 'N')
                {
                    cout<<"Pasa a caja final";
                    caja_final(preciofinalglobo);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
