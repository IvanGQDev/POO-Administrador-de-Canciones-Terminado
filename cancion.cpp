#include "cancion.h"

Cancion::Cancion()
{
    
}

string Cancion::getId()
{
    return id;
}

void Cancion::setId(const string &value)
{
    id = value;
}

string Cancion::getTitulo() 
{
    return titulo;
}

void Cancion::setTitulo(const string &value)
{
    titulo = value;
}

string Cancion::getAlbum() 
{
    return album;
}

void Cancion::setAlbum(const string &value)
{
    album = value;
}

string Cancion::getArtista() 
{
    return artista;
}

void Cancion::setArtista(const string &value)
{
    artista = value;
}

double Cancion::getDuracion() 
{
    return duracion;
}

void Cancion::setDuracion(double value)
{
    duracion = value;
}
