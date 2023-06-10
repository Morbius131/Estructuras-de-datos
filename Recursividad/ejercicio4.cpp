//Programa que cuenta el numero de chocolates maximos que se pueden comprar dando el dinero, el precio y el valor por envoltura

#include <iostream>

using namespace std;

int chocolatesMax(int dinero, int precio, int valorEnvoltura, int numeroEnvoltura, int chocolates){

    if(numeroEnvoltura>0 && numeroEnvoltura>valorEnvoltura){
        if((numeroEnvoltura%valorEnvoltura)==0 && (numeroEnvoltura/valorEnvoltura)==1){
            return chocolatesMax(dinero, precio,valorEnvoltura, 0,chocolates+(numeroEnvoltura/valorEnvoltura));
        }
        else if((numeroEnvoltura%valorEnvoltura)==0){
            return chocolatesMax(dinero, precio, valorEnvoltura,numeroEnvoltura/valorEnvoltura,chocolates+(numeroEnvoltura/valorEnvoltura));
        }
        else{
            return chocolatesMax(dinero, precio, valorEnvoltura,(numeroEnvoltura%valorEnvoltura)+(numeroEnvoltura/valorEnvoltura),chocolates+(numeroEnvoltura/valorEnvoltura));
        }
    }
    else{
       return chocolates;
    }

}

int chocolatesMax(int dinero, int precio, int envoltura){
    if(envoltura==1){
        return 0;
    }
    else{
        return chocolatesMax(dinero, precio, envoltura,dinero/precio,dinero/precio);
    }
    
}



int main(){

    cout << "DINERO= 16, PRECIO= 3, VALORENVOLTURA= 2, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(16,3,2) << endl << endl;
    cout << "DINERO= 16, PRECIO= 2, VALORENVOLTURA= 2, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(16,2,2) << endl << endl;
    cout << "DINERO= 15, PRECIO= 1, VALORENVOLTURA= 3, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(15,1,3)<< endl << endl;
    cout << "DINERO= 20, PRECIO= 5, VALORENVOLTURA= 2, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(20,5,2)<< endl << endl;
    cout << "DINERO= 5, PRECIO= 1, VALORENVOLTURA= 2, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(5,1,2)<< endl << endl;
    cout << "DINERO= 8, PRECIO= 2, VALORENVOLTURA= 2, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(8,2,2)<< endl << endl;
    cout << "DINERO= 9, PRECIO= 3, VALORENVOLTURA= 2, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(9,3,2)<< endl << endl;
    cout << "DINERO= 15, PRECIO= 5, VALORENVOLTURA= 3, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(15,5,3)<< endl << endl;
    cout << "DINERO= 10, PRECIO= 3, VALORENVOLTURA= 2, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(10,3,2)<< endl << endl;
    cout << "DINERO= 30, PRECIO= 8, VALORENVOLTURA= 3, NUMERO DE CHOCOLATES QUE SE PUEDEN COMPRAR: " << chocolatesMax(30,8,5)<< endl << endl;
    
    return 0;
}
