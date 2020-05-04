#include <iostream>
using namespace std;
	
int main(){
	cout<<"El producto de: ";
	for(int c=3;c<500;c++){
		for(int b=2;b<c;b++){
			for(int a=1;a<b;a++){
				if((a*a + b*b == c*c) && (a + b + c == 1000)){
					cout<<a<<"*"<<b<<"*"<<c<<"es:"<<'\n';
					cout<<a*b*c<<'\n';
					break;
				}
			}
		}
	}
}
