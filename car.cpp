#include<iostream>
using namespace std ;

float tax( char t , float p){
	float x ;
             if( t == 'M' ){
		x = p * 6/100; }
	     if( t == 'E' ){
		x = p * 8/100;}
	     if( t == 'S' ){
		x = p * 10/100;}
	     if( t == 'V' ){
		x = p * 12/100;}
	     if( t == 'T' ){
		x = p * 15/100;}

        return x ; }

main(){
   float price ;
   cout << "Enter the price : " << endl ;
   cin >> price ;
   char type ;
   cout << "Enter the type : " <<  endl ;
   cin >> type ;
   float h ;
   h = tax(type , price)  ;
   float final = price + h ;
   cout << " The final price of this Vehicle of type " << type << "    after adding tax is : " << final << endl ; }
   
	
		