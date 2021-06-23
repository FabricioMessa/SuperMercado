#include <iostream>
#include <stdio.h>
#include "productos.h"
#include "caja_final.h"
using namespace std;
#include <fstream>

void carrito_frutas(int fruta, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (fruta){
        case 1:
            float preciofinalpina;
            preciofinalpina = cantidad_producto * 1.20;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pinha || Su costo final de esta operacion es: " << preciofinalpina << "s/.\n";
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
                    caja_final(preciofinalpina);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalmanzana;
            preciofinalmanzana = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Manzana || Su costo final de esta operacion es: " << preciofinalmanzana << "s/.\n";
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
                    caja_final(preciofinalmanzana);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalplatano;
            preciofinalplatano = cantidad_producto * 0.40;
            cout << "Eligio la cantidad " << cantidad_producto << " de Platano || Su costo final de esta operacion es: " << preciofinalplatano << "s/.\n";
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
                    caja_final(preciofinalplatano);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalpera;
            preciofinalpera = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pera || Su costo final de esta operacion es: " << preciofinalpera << "s/.\n";
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
                    caja_final(preciofinalpera);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalsandia;
            preciofinalsandia = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Sandia || Su costo final de esta operacion es: " << preciofinalsandia << "s/.\n";
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
                    caja_final(preciofinalsandia);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
