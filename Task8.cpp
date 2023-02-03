#include<iostream>
#include<cmath> 
using namespace std;

main(){
float x , y ;
cout<<"Angle of elevation " << endl ;
cin >> x ; x = x/57.2958 ;
cout<<"Base" << endl;
cin >> y ;

float t = sin(x) ; float h = t*y ;

	cout<<" Height of tree is : " << h ; 




}