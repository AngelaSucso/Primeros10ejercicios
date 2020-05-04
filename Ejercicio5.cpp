#include <bits/stdc++.h>

bool x(int num){
	for(int i=1;i<20;i++){
		if(num%i!=0){
			return false;
		}
	}
	return true;
}

int main(){
	int y=999999;	
	while(!x(y)){
		y=y+1;
	}
	printf("%d \n",y);
	return 0;
}
