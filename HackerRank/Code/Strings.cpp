#include<iostream>
#include<stdio.h>
using namespace std; 

int main() {


    char a;
    char b; 
    string first; 
    string second; 

    
cout << "Enter two strings: ";
cin >> first >> second;



cout<<first.length()<<" "<<second.length()<< endl;

cout<< first + second <<endl ; 


swap (first[0], second[0]);  
 
cout<< first << " " << second << endl;


return 0;
}