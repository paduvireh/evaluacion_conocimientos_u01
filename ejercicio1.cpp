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
        break;
        case '-':
            r=op1-op2;
        break;
        case '*':
            r=op1*op2;
        break;
        case '/':
            r=op1/op2;
        break;
	}
    cout<<"El resultado es: "<<r<<endl;
    return 0;
}
