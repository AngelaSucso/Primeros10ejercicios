#include <iostream>
#include <cmath>

using namespace std;

bool isPrime( long num ){
    switch( num ){
        case 1:
        case 4:
        case 6:
        case 8:
        case 9:
        return false;
        break;
        case 2:
        case 3:
        case 5:
        case 7:
        return true;
        break;
        }
        if( num % 2 == 0 || num % 3 == 0 )
            return false;
        long sq_root_of_num = floor( sqrt(num) );
        long i = 5;

        while( i <= sq_root_of_num ){
            if( num % i == 0 || num % (i+2) == 0 ){
                return false;
            }
            i += 6;
        }

        return true;
}

int main()
{
long num = 3;
int index = 1;

while( index < 10001 )
{
if( isPrime( num ) )
{
index++;
}
num += 2;
}
num -= 2;
cout << num << endl;
}
