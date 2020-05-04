#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int f(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	else return f(n-1)+f(n-2);
}

int main(){
	cout<<"la suma de los terminos de valor par es: ";
	int p=0;
	int q=1,a=0;
	while(a<=4000000){
		a=f(q);
		if(a%2==0){
			p+=a;
		}
		q++;
	}
	printf("%d \n",p);
}
