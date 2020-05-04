#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    long long int n = 600851475143;
    cout<<"Ingrese un numero entero ";
    cin>>n;
    for (int i = 2; n > 1; i++){
        int contador = 0;
        while(n%i == 0){
            n = n/i;
            if(n%i != 0){
                if(contador > 1) cout<<i<<"^"<<contador<<"x";
                else if(n>1) cout<<i<<"x";
                else cout<<i;
                }
            }
        }
    return 0;
}
