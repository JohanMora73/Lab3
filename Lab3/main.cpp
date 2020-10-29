#include "codificacion.h"
#include "Decodificacion.h"
#include "implementacion.h"
#include "Archivos.h"

int main()
{
    long long int tam, tamdec, tamcontr;                       //Tamaño del texto
    char *data, *binario, *binCodif,*Bindecodif, *Bincodif, *password, *originpass;                              //donde almaceno el contenido del texto
    string Arch_codif="Archivocodificado.txt";
    string archivo_natural="TPrueba.txt";
    string sudo="sudo.txt";
    bool resp;

    int metodo, s, opc;
    //tamdec=tam_txt(Arch_codif);

//    tam=tam_txt(archivo_natural);
//
  //  data=new char[tam];
    //binario=new char[8*tam];
//    binCodif=new char[8*tam];
  //  cout<<"La longitud es: "<<tamdec<<endl;
    //Bindecodif=new char [tamdec];
    //Bincodif=new char [tamdec];



    //cout<<"ingrese el metodo y la semilla de codificacion:"<<endl;
    //cin>>metodo>>s;
    cout<<"Bienvenido, digite 1 para ingresar como administrador o 2 para ingresar como usuario: "<<endl;
    cin>>opc;
    switch(opc){
        case 1:
            tamcontr=tam_txt("sudo.txt");
            password= new char [tamcontr];
            fflush(stdin);
            originpass=new char [tamcontr];
            //fflush(stdin);
            binario=new char [tamcontr];
            //fflush(stdin);
            Bindecodif=new char [tamcontr];
            //fflush(stdin);
            cout<<"Digite su clave de administrador : "<<endl;
            cin>>password;
            cout<<"Digite la semilla : "<<endl;
            cin>>s;
            text2bin(password, s, binario,tamcontr);
            cout<<tamcontr<<":)";
            for(long long int i=0;i<tamcontr;i++){
                cout<<binario[i];
            }
            verificarpass(binario, originpass,sudo, tamcontr,resp, s, Bindecodif);

        break;

        case 2:

        break;
    }

    //codificacion(archivo_natural,metodo,s,data,tam, binario, binCodif);
    //for(long long int i=0;i<tam;i++){
      //  cout<<data[i];
    //}
    //cout<<endl<<endl;
    //for(long long int i=0;i<8*tam;i++){
    //    cout<<binario[i];
    //}
    //cout<<endl<<binario[3]+3<<endl;
    //cout<<"codificado: ";
    //for(long long int i=0;i<8*tam;i++){
      //  cout<<binCodif[i];
   // }
    //cout<<endl;
    //decodificacion(Arch_codif,metodo,s,Bincodif,Bindecodif);

    delete [] data;
    return 0;
}
