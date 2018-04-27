
#include "Serie.h"
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}


void retornarSerie(int idSerie, eSerie series[], int cant){

    int s;

    for (s=0; s<cant;s++){
        if (series[s].idSerie == idSerie){
            printf("\nID: %d \nNombre: %s \nGenero: %s \nCantidad de temporadas: %d",series[s].idSerie, series[s].nombre, series[s].genero, series[s].cantidadTemporadas);

    return 0;
        }
    }
}


void mostrarListaSeries(eSerie listaDeSeries[], int tamSerie){

    int i;

    for(i = 99; i<105; i++){
        retornarSerie(i, listaDeSeries, tamSerie);
    }
}


int u;
    int s;

    for(u = 0; u<cantU; u++){
        for (s = 0; s<cantS; s++){
            if (userList[u].idSerie == seriesList[s].idSerie){
                printf("\n%d %s %d %s", userList[u].idUsuario, userList[u].nombre, seriesList[s].idSerie, seriesList[s].nombre);
                break;
            }else if(userList[u].estado == 0){
                break;
            }
        }
    }



