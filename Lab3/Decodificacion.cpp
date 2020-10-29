#include "Decodificacion.h"
#include "Archivos.h"

void decodificacion(string name, int metodo, int n, char *Bincodif, char *Bindecodif, long long int tam)
{
    //long long int tam;
    cout<<"Hola"<<endl;
    //tam=tam_txt(name);
    //cout<<"longiud del sudo: "<<tam<<endl;
    leer_txt(name,Bincodif,tam);

    cout<<"Obtencion del binario: ";
    for(long long int i=0;i<tam;i++){
        cout<<Bincodif[i];
    }
    short caso=1;
    char *partido;
    int j=0, unos;
    long long int x;
    partido=new char [n];
    for(long long int i=0, k=0;i<tam;i++,j++){
        partido[j]=(Bincodif[i]);
        if((k+1)*n-1==i || i==tam-1){
            unos=contar2(partido,n);
                Metodo1(partido,caso,n);

                if(unos==n-unos) caso=1;
                else if(unos<n-unos) caso=2;
                else caso=3;
                if(i==tam-1){
                for(long long int z=0;z<=(tam-1)%n;z++){
                    x=i-((tam-1)%n)+z;
                    Bindecodif[x]=partido[z];
                    //cout<<x<<" ";
                    //cout<<partido[z];
                }
            }
            else{
            for(long long int z=0;z<n;z++){
                x=i-(n-1)+z;
                Bindecodif[x]=partido[z];
                //cout<<x<<" ";
                //cout<<partido[z];
            }
            }
            //cout<<endl;
            j=-1;
            k++;

         }
    }
    escribir_txt("Archivodecodificado.txt",Bindecodif, tam);

    cout<<endl;
}

void Metodo1(char *trama,short caso, long long int len)
{
    for(long long int i=0;i<len;i++)
    switch(caso){
    case 1:
        if(trama[i]==48){trama[i]=49;}
        else{trama[i]=48;}
    break;

    case 2:
        if(i%2!=0){
            if(trama[i]==48){trama[i]=49;}
            else{trama[i]=48;}
        }
    break;

    default:
        if((i+1)%3==0){
            if(trama[i]==48){trama[i]=49;}
            else{trama[i]=48;}
        }
    break;
    }
}

int contar2(char *trama, int n){
    int cont=0;
    for (long long int i=0;i<n;i++){
        //cout<<trama[i];
        if(trama[i]==49){

            cont+=1;
        }
    }
    return cont;
}

