#include <iostream> 
using namespace std ;

int multiply(int x){
	x = 5 * x ;
	return x ; }

main(){
int y ;
cout << "Enter any number  " ;
cin >> y ; 
y = multiply(y) ;
cout << y ; }