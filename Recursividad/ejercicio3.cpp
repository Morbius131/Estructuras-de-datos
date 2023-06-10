#include <iostream>

using namespace std;

int consonantes(string cadena, int i, int j, int resultado){
   int vocales[5] = {'a','e','i','o','u'};
   int vocalesMayus[5] = {'A','E','I','O','U'};
   int cut = cadena[j];

   if((cut>=97 && cut<=122) || (cut>=65 && cut <= 90)){
     if(j<0){
      return resultado;
     }
     else if(cut != vocales[i] && cut != vocalesMayus[i] && i>=0){
        return consonantes(cadena,i-1,j ,resultado);
     }
     else if(i==-1){
        return consonantes(cadena,i-1,j,resultado+1);
     }
     else{
       return consonantes(cadena,4,j-1,resultado);
     }
   }
   else{
      if(j<0){
         return resultado;
      }
      else{
        return consonantes(cadena,4,j-1,resultado);
      }
   }
}
   

int consonantes(string cadena){
    return consonantes(cadena, 4, cadena.length()-1, 0);
}


int main(){

    string cadena1 = "carlos123";
    string cadena2 = "arbElito";
    string cadena3 = "car rro";
    string cadena4 = "pintura 123";
    string cadena5 = "EstErnocleiDomastoideo";
    string cadena6 = "si pude";
    string cadena7 = "mortalhaCiaatras";
    string cadena8 = "teclaDo";
    string cadena9 = "jugueMos pero no";
    string cadena10 = "rapido y faSt";


    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena1) << endl;
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena2) << endl;
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena3) << endl;
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena4) << endl;  
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena5) << endl;
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena6) << endl;
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena7) << endl;
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena8) << endl;
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena9) << endl;
    cout << "EL NUMERO DE CONSONANTES ES: " << consonantes(cadena10) << endl;


    return 0;
}