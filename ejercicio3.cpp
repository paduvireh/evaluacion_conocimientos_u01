#include <iostream>
using namespace std;

float suma(float);
int factorial(int);

int main(){
    float n, sum;
    char cn;
    cout<<"Ingrese un numero para la operacion: "; cin>>n;
    sum=suma(n);
    cout<<"La sumatoria es: "<<sum<<endl;
    return 0;
}

float suma (float a){
    float s=0;
    for(int i=1; i<=a; i++){
        s=s+(float(factorial(i))/(2*i));
    }
    return s;
}

int factorial(int b){
    int f=1;
    for(int i=2; i<=b; i++){
        f=f*i;
    }
    return f;
}