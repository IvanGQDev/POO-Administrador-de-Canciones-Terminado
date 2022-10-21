#ifndef SPOTIFY_H
#define SPOTIFY_H

#include "cancion.h"

class Spotify
{
private:
    Cancion favoritos[50];
    size_t cont;

public:
    void agregarFavoritos(const Cancion &cancion);
    void mostrar();
    void respaldar();
    void recuperar();
    Spotify();

};

#endif // SPOTIFY_H
