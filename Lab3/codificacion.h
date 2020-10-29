#ifndef CODIFICACION_H
#define CODIFICACION_H
#include "Archivos.h"
void codificacion(string name,int metodo,int n, char *data, long long int tam, char *binario, char *binCodif);
void text2bin(char *texto, int semilla, char *binario, int len);
void particion(char *binario,int n, int tam, char *binCodif);
void Metod1(char *trama,short caso, long long int len);
int contar(char *trama, int n);
#endif // CODIFICACION_H
