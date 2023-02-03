#include<iostream>
using namespace std ;

main(){

 float l ;
 cout <<"Enter Length (meters) :" << endl ;
 cin >> l ;
 float w ;
 cout <<"Enter Width  (meters) :" << endl ;
 cin >> w ;
 float h ;
 cout <<"Enter Height (meters) :" << endl ;
 cin >> h ;
 string u ;
 cout <<"Enter Unit of measurements for output :" << endl ;
 cin >> u ;

float V = l*w*h/3 ;

if ( u == "centimeter"){
	    float c = V * 10000000 ;
 		cout << "The volume of Pyramid is : " << c << " cubic centimeters" << endl ; }

if ( u == "milimeter"){
	    float m = V * 10000000000 ;
 		cout << "The volume of Pyramid is : " << m << " cubic milimeters" << endl ; }

if ( u == "kilometer"){
	    float k = V / 10000000000 ;
 		cout << "The volume of Pyramid is : " << k << " cubic kilometers" << endl ; }
if ( u == "meter"){
       cout << " Volume of pyramid is :" << V << endl ; }

   }
