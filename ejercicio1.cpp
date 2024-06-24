#include <iostream>
using namespace std;

int main(){
    float op1, op2, r;
    char op;
    cout<<"Ingrese el primer numero: "; cin>>op1;
    cout<<"Ingrese el segundo numero: "; cin>>op2;
    cout<<"Ingrese el operador: "; cin>>op;
    switch(op){
        case '+':
            r=op1+op2;
            cout<<"El resultado es: "<<r<<endl;
        break;
        case '-':
            r=op1-op2;
            cout<<"El resultado es: "<<r<<endl;
        break;
        case '*':
            r=op1*op2;
            cout<<"El resultado es: "<<r<<endl;
        break;
        case '/':
            if(op2!=0){
                r=op1/op2;
                cout<<"El resultado es: "<<r<<endl;
            }
            else 
                cout<<"No se puede dividir entre cero."<<endl;
        break;
        default:
            cout<<"Operador no valido."<<endl;
        break;
	}
    return 0;
}
