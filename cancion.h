#ifndef CANCION_H
#define CANCION_H

#include <iostream>
#include <iomanip>

using namespace std;

class Cancion
{
private:
    string id;
    string titulo;
    string album;
    string artista;
    double duracion;

public:
    Cancion();

    string getId();
    void setId(const string &value);

    string getTitulo();
    void setTitulo(const string &value);

    string getAlbum();
    void setAlbum(const string &value);

    string getArtista();
    void setArtista(const string &value);

    double getDuracion();
    void setDuracion(double value);

    friend ostream& operator<<(ostream &out, const Cancion &cancion)
    {
        out << setw(3) << cancion.id
            << setw(10) << cancion.titulo
            << setw(10) << cancion.album
            << setw(10) << cancion.artista
            << setw(4) << cancion.duracion;

        return out;
    }

    friend istream& operator>>(istream &in, Cancion &cancion)
    {
        string temp;
        double temp_d;

        cout << "id: ";
        getline(cin, temp);
        cancion.setId(temp);

        cout << "titulo: ";
        getline(cin, temp);
        cancion.setTitulo(temp);

        cout << "album: ";
        getline(cin, temp);
        cancion.setAlbum(temp);
        
        cout << "artista: ";
        getline(cin, temp);
        cancion.setArtista(temp);

        cout << "duracion: ";
        getline(cin, temp);
        temp_d = stod(temp);
        cancion.setDuracion(temp_d);

        return in;
    }
};

#endif // CANCION_H
