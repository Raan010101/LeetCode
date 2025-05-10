#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main (){
    

 string input ;
 cout<<"Please enter some numbers: "<<endl; 
 cin >> input; 
 stringstream ss (input); 
 string comma;
 
 while (getline(ss,comma,',')) {
    cout<< stoi(comma) << endl ; 
    
 } 
    
    return 0; 
}
