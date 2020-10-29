#include "codificacion.h"
#include "Archivos.h"
void codificacion(string name,int metodo,int n, char *data,long long int tam, char *binario, char *binCodif)
{
    leer_txt(name, data, tam);
    text2bin(data,n,binario,tam);
    particion(binario,n, tam, binCodif);
    //cout<<texto<<endl;
    //cout<<binario<<endl;
    //for(long long int i=0;i<tam;i++){
      //  cout<<data[i];
    //}
}

void text2bin(char *texto, int s, char *binario, int len)
{
    int k=0;
    for(long long int i =0;i<len;i++){
        for(int j=0;j<8;j++,k++){                          //convierte cada caracter a binario
            binario[k]=(char(((texto[i]<<j)&(0x80))/128)+48);
        }

    }
}

void particion(char *binario, int n, int len, char *binCodif)
{
    short caso=1;
    char *partido;
    int j=0, unos;
    long long int x;
    partido=new char [n];
    //binCodif=new char [8*len];
    //cout<<endl<<(8*len-1)%n<<"que putas"<<endl;
    for(long long int i=0, k=0;i<8*len;i++,j++){
        partido[j]=(binario[i]);
        if((k+1)*n-1==i || i==8*len-1){
            unos=contar(partido,n);
                Metod1(partido,caso,n);

                if(unos==n-unos) caso=1;
                else if(unos<n-unos) caso=2;
                else caso=3;
                //cout<<"caso: "<<caso<<" unos: "<<unos<<endl;
                if(i==8*len-1){
                for(long long int z=0;z<=(8*len-1)%n;z++){
                    x=i-((8*len-1)%n)+z;
                    binCodif[x]=partido[z];
                    //cout<<x<<" ";
                    //cout<<partido[z];
                }
            }
            else{
            for(long long int z=0;z<n;z++){
                x=i-(n-1)+z;
                binCodif[x]=partido[z];
                //cout<<x<<" ";
                //cout<<partido[z];
            }
            }
            //cout<<endl;
            j=-1;
            k++;

         }
    }
    escribir_txt("Archivocodificado.txt",binCodif, 8*len);

    cout<<endl;
}


void Metod1(char *trama,short caso, long long int len)
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

int contar(char *trama, int n){
    int cont=0;
    for (long long int i=0;i<n;i++){
        //cout<<trama[i];
        if(trama[i]==49){

            cont+=1;
        }
    }
    return cont;
}
