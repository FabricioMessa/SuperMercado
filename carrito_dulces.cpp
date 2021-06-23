#include <iostream>
#include <stdio.h>
#include "productos.h"
#include "caja_final.h"
using namespace std;
#include <fstream>

void carrito_dulces(int dulces, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (dulces){
        case 1:
            float preciofinaloreo;
            preciofinaloreo = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Galleta Oreo || Su costo final de esta operacion es: " << preciofinaloreo << "s/.\n";
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
                    caja_final(preciofinaloreo);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalcaramelo;
            preciofinalcaramelo = cantidad_producto * 0.10;
            cout << "Eligio la cantidad " << cantidad_producto << " de Caramelos de Limon || Su costo final de esta operacion es: " << preciofinalcaramelo << "s/.\n";
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
                    caja_final(preciofinalcaramelo);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalcoca;
            preciofinalcoca = cantidad_producto * 2.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Coca Cola || Su costo final de esta operacion es: " << preciofinalcoca << "s/.\n";
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
                    caja_final(preciofinalcoca);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalfrunas;
            preciofinalfrunas = cantidad_producto * 0.50;
            cout << "Eligio la cantidad " << cantidad_producto << " de Frunas || Su costo final de esta operacion es: " << preciofinalfrunas << "s/.\n";
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
                    caja_final(preciofinalfrunas);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalmarga;
            preciofinalmarga = cantidad_producto * 1.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Margaritas || Su costo final de esta operacion es: " << preciofinalmarga << "s/.\n";
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
                    caja_final(preciofinalmarga);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
