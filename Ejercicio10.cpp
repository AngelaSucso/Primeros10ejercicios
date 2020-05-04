#include <iostream>


using namespace std;

int main(){
	long long n, suma=0;
	cout<<"Ingrese numero: ";
	cin>>n;
	
	for(int i=2;i<=n;i++){
		int aux=0;
			for(int div=2;div<i/2+1;div++){
		//if(i%div==0 && i%1==0)
		//aux++;
				if(i%div==0){
					aux = 1;
					break;
				}
			}
			if(aux==0){
				cout<<i<<endl;
				suma=suma+i;
			}
				
		//if(aux==2){
			//cout<<i<<endl;
			//suma=suma+i;
		//}

	}
			cout<<"La suma de los numeros es:"<<suma<<endl;
	
	
	return 0;
}
