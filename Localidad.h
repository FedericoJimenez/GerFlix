#ifndef LOCALIDAD_H_INCLUDED
#define LOCALIDAD_H_INCLUDED

typedef struct{
    int id;
    char nombreLocalidad[50];
    int estado;
} eLocalidad;

void loc_mostrarUno(eLocalidad aux[]);
void loc_mostrarListado(eLocalidad listado[], int arrayLenght);

#endif // LOCALIDAD_H_INCLUDED
