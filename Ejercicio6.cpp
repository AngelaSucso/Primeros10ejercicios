#include <bits/stdc++.h>

int main(){
	int num=100,x,y,z;
	
	x=((num)*(num+1)*(2*num+1))/6;
	y=(((num)*(num+1))/2);
	z=(y*y)-x;
	
	printf("%d \n",z);
	return 0;
}
