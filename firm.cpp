#include <iostream>
using namespace std ;

main(){

int hours, days , workers ;
cout << " Enter number of hours available: "  ;
cin >> hours ;
cout << " Enter number of days : "  ;
cin >> days ;
cout << " Enter number of workers : "  ;
cin >> workers ;

 int d = days ;
 int h = 9*d*workers  ;
 int x = h - hours ;

   if(h >= hours){
        cout << " Yes the project can be done with " << x << " hours left! " <<  endl ; }

  if(h < hours){
        cout << " No the project can not be done lacking " << x << " hours! " <<  endl ; }

  }