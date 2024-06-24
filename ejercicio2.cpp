#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int c=0;  
    int i=1;  

    do {
        cout<<"Ingrese el primer numero: "; cin>>n1;
        cout<<"Ingrese el segundo numero: "; cin>>n2;
        if (n1<=0 || n2<=0) {
            cout<<"Los numeros deben ser positivos."<<endl<<endl;
        }
    } while (n1<=0 || n2<=0);

    while (i<=n1 && i<=n2) {
        if (n1%i==0 && n2%i==0) 
            c=c+1;
        i=i+1;
    }
    if (c>1) 
        cout<<"No son PESI."<<endl;
    else 
        cout<<"Son PESI."<<endl;

    return 0;
}
