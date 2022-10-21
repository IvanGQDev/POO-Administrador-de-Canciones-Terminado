#include <iostream>
#include "spotify.h"
using namespace std;

int main()
{
    Spotify spotify;
    string op;

    while (true) {
        cout << "1) Agregar cancion a favoritos" << endl;
        cout << "2) Mostrar favoritos" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "0) Salir" << endl;

        getline(cin, op);

        if (op == "1") {
            Cancion cancion;
            cin >> cancion;

            spotify.agregarFavoritos(cancion);
        }
        else if (op == "2") {
            spotify.mostrar();
        }
        else if (op == "3")
        {
            spotify.respaldar();
        }
        else if (op == "4")
        {
            spotify.recuperar();
        }        
        else if (op == "0") {
            break;
        }
    }
    return 0;
}
