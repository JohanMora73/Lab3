#ifndef ARCHIVOS_H
#define ARCHIVOS_H
#include <iostream>
#include <fstream>   //Para leer y escribir archivos de texto
#include <string>
#include <stdlib.h>
using namespace std;
void escribir_txt(string name,char *data, int len);
long long int tam_txt(string name);
void leer_txt(string name, char *data, long long int tam);
#endif // ARCHIVOS_H

