#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int numeromagico(){
    int numero, aleatorio, intentos = 0,x ;
    srand(time(NULL));
    aleatorio=1 + rand() % (100);

    while (intentos!=5)
    {

    do{
   cout<< "digite un numero" << endl;
   cin >> numero;

    if (numero>aleatorio)
    {
        cout<< endl;
        cout << "el numero es menor"<< endl;
    }
    if (numero<aleatorio)
    {
        cout<< endl;
       cout<< "el numero es mayor"<< endl;
    }

    intentos++;
    x=5- intentos;
    cout<< endl;
    cout<< "le quedan " << x << " intentos" << endl;

    } while (intentos!=5);

    system("pause");

    return 0;

    }
}
int main(){
 
 numeromagico();
}