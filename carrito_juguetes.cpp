#include <iostream>
#include <stdio.h>
#include "productos.h"
#include "caja_final.h"
using namespace std;
#include <fstream>

void carrito_juguetes(int juguete, int cantidad_producto){
    char decision;
    char answer = 'A';
    switch (juguete){
        case 1:
            float preciofinalmax;
            preciofinalmax = cantidad_producto * 70.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Max Steal || Su costo final de esta operacion es: " << preciofinalmax << "s/.\n";
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
                    caja_final(preciofinalmax);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 2:
            float preciofinalbar;
            preciofinalbar = cantidad_producto * 75.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Barby || Su costo final de esta operacion es: " << preciofinalbar << "s/.\n";
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
                    caja_final(preciofinalbar);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 3:
            float preciofinalcamion;
            preciofinalcamion = cantidad_producto * 10.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Camion de carga || Su costo final de esta operacion es: " << preciofinalcamion << "s/.\n";
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
                    caja_final(preciofinalcamion);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 4:
            float preciofinalpista;
            preciofinalpista = cantidad_producto * 120.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Pista de carreras || Su costo final de esta operacion es: " << preciofinalpista << "s/.\n";
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
                    caja_final(preciofinalpista);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
        case 5:
            float preciofinalajedrez;
            preciofinalajedrez = cantidad_producto * 50.00;
            cout << "Eligio la cantidad " << cantidad_producto << " de Ajedrez || Su costo final de esta operacion es: " << preciofinalajedrez << "s/.\n";
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
                    caja_final(preciofinalajedrez);
                }
            } while ((decision != 'S') && (decision != 'N'));
            break;
    }
}
