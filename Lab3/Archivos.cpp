#include "implementacion.h"
#include "Archivos.h"
#include "codificacion.h"
#include "Decodificacion.h"
void escribir_txt(string name,char *data, int lon){

    //string name="TPrueba.txt";
    //char *data;
    //long long int len;
    //cout<<"digite la longitud de la cadena: "<<endl;
    //cin>>len;
    //fflush(stdin);
    //data=new char[len];
    //cout<<"ingrese la cadena"<<endl;
    //gets(data);
    //escribir_txt(name,data,len);
    //delete [] data;

    fstream k(name,fstream::out);
    for(long long int i=0;i<lon;i++){
        k.seekg(i);
        k.put(data[i]);
    }
    k.close();
}

long long int tam_txt(string name){
    long long int tam;
    fstream z(name,fstream::in | fstream::ate);
    tam=z.tellg();
    cout<<"El tamano es: "<<tam<<endl;
    z.close();
    return tam;
}

void leer_txt(string name, char *data, long long int tam){
    //long long int tam;
    //string name= "TPrueba.txt";
    //char *data;
    //tam=tam_txt(name);
    //data=new char[tam];
    //leer_txt(name, data, tam);
    //for(long long int i=0;i<tam;i++){
     //   cout<<data[i];
    //}
    //delete [] data;

    //!AQUI NO FUNCIONA¡
    cout<<endl<<"hola"<<endl;
    fstream z(name,fstream::in);
    z.seekg(0);
    cout<<endl<<"hola2.0"<<endl;
    if(z.is_open()){
        cout<<"Existe y se puede leer "<<endl;
        for (long long int i =0;i<tam;i++){
            data[i]= char(z.get());
        }
    }
    else {cout<<"El archivo de texto no existe"<<endl;}
    z.close();
    cout<<"bye"<<endl;
}
