#include <iostream>

using namespace std;

float salario(void){
    float x, y, horas, extra, total, real;
    cout << "ingrese sus horas de trabajo: ";
    cin >> x;
    cout << "ingrese sus horas extra: ";
    cin >> y;

    horas=x*1.75;
    extra=y*2.50;
    total=horas+extra;
    
    cout<<"su sueldo total es de: " << total << endl;

    if (total<500){
    
    real=total-(total*0.1025);

    cout<< "su salario real es de: " << real << endl;

    }
    else{

    real=total-(total*0.2025);

    cout << "su saldo real es de: " << real << endl;

}
return 0;
}

int main(void){
salario();
}