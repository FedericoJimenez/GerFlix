#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

typedef struct
{
    int idUsuario;
    char nombre[50];
    char password[8];
    int estado;
}eUsuario;

void altaUsuario(name, password, eUsuario);
void modifUsuario(id, name, password, eUsuario);
void bajaUsuario(id, estado, eUsuario);

#endif // LIB_H_INCLUDED
