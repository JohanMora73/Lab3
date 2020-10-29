#include "implementacion.h"
#include "Archivos.h"
#include "codificacion.h"
#include "Decodificacion.h"

void verificarpass(char *clave, char *clave_orig, string name, long long int len, bool resp, int s, char *clave_origdec){
    cout<<endl<<"por que?"<<endl;
    //leer_txt(name,clave_orig,len);
    cout<<endl;
    //for(long long int i=0;i<len;i++){
      //  cout<<clave_orig[i];
    //}
    decodificacion(name,1, s, clave_orig, clave_origdec,len);
    //for(long long int i=0;i<len;i++){

      //  cout<<clave[i]<<" "<<clave_origdec[i];
        //if(clave[i]==clave_origdec[i]){
          //  resp=true;
        //}
        //else{
          //  resp=false;
        //}
    //}
}
