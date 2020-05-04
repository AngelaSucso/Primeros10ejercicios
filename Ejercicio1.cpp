#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"Escriba el numero: ";
	cin>>n;
	
	int cont=0;
	for (int i=0; i<1000; i++)
		if(i%3==0 || i%5==0){
			cont+=i;
		}
	cout<<"\La suma de todos los múltiplos de 3 o 5 por debajo de 1000 es: "<<cont;
	
	return 0;
}
