
#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(int producto){

	if(producto/100000 < 1){

		int uno = producto%10;
		int dos = (producto%100 - producto%10)/10;
		int tres = (producto%1000 - producto%100)/100;
		int cuatro = (producto%10000 - producto%1000)/1000;
		int cinco = (producto%100000 - producto%10000)/10000;

		if((uno == cinco) && (dos == cuatro)){
			return true;
		} else{
			return false;
		}

	}else{

		int uno = producto%10;
		int dos = (producto%100 - producto%10)/10;
		int tres = (producto%1000 - producto%100)/100;
		int cuatro = (producto%10000 - producto%1000)/1000;
		int cinco = (producto%100000 - producto%10000)/10000;
		int seis = (producto%1000000 - producto%100000)/100000;

		if((uno == seis) && (dos == cinco) && (tres == cuatro)){
			return true;
		}else{
			return false;
		}
	}
}

int main(){

	vector<int> palindrome;

	for(int i = 100; i < 999; i++){
		for(int j = 100; j < 999; j++){

			int producto = i*j;
			if(isPalindrome(producto)){
				palindrome.push_back(producto);
			}

		}
	}

	int greatest = palindrome[0];
	for(int i=0; i < palindrome.size(); i++){
		if(greatest < palindrome[i]){
			greatest = palindrome[i];
		}
	}

	cout << greatest << '\n';

	return 0;
}
