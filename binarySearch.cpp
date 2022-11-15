#include<iostream>
#include<stdlib.h>//para cerrar el programa

using namespace std;

int main(){

    int x;
    cout<<"Dime un numero primo del 1 al 100: "; cin>>x;
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int min = 0;
    int max = sizeof(primes)/sizeof(int) - 1;// para sacar cuanto mide el array
    int cont = 0;// contador para comprobar que el numero de vueltas que da es redondeado del logaritmo en base 2 del length de la lista
    while(max >= min){
        cont++;
        // media de max y min
        int guess = (max+min)/2;
        // si el numero dado es igual al numero de esa posicion
        if ( x == primes[guess]){
            cout<<"Acertaste!!"<<endl;
            // mostrar contador
            cout<<"Numero de veces que se repite el bucle: "<<cont;
            exit(1);
        }
        // si x > numero de la posicion de la mitad, i.e, en guess, el minimo va a aumentar un numero mas grande que la mitad, descartando los otros
        if ( x > primes[guess]) min = guess +1;
        // si x < numero de la posicion de la mitad, i.e, en guess, el maximo va a disminuir un numero mas pequeño que la mitad, descartando los otros
        if ( x < primes[guess]) max = guess -1;
    }cout<<"No acertaste!!";
    
    return 0;
}