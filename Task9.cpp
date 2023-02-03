#include <iostream>
#include <cmath>
using namespace std ;

main(){
int a,b,c;
float x , y;
cin >> a;
cin >> b;
cin >> c;

x = (-b + sqrt(b^2 - (4*a*c)))/(2*a);
cout << x;
y = (-b - sqrt(b^2 - (4*a*c)))/(2*a);
cout << y ;

}