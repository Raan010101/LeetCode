#include<iostream>
using namespace std; 

int main () {

    int a,b; 
    cout<<"Enter 2 number"<<endl; 
    cin>>a>>b; 
    for (int i = a;  i<=b ; i++)
    {   
        if (i == 1){
            cout << "one\n"<<endl; 
        }
        else if (i == 2){
            cout << "two\n"<< endl;  
        }
        else if (i == 3){
            cout << "three\n"<< endl;  
        }
        else if (i == 4){
            cout << "four\n"<< endl;  
        }
        else if (i == 5){
            cout << "five\n"<< endl;  
        }
        else if (i == 6){
            cout << "six\n"<< endl;  
        }
        else if (i == 7){
            cout << "seven\n"<< endl;  
        }
        else if (i == 8){
            cout << "eight\n"<< endl;  
        }
        else if (i == 9) {
            cout << "nine\n"<< endl; 
        }
        else if (i>9 && i%2 == 0)
        {
            cout << "even\n"<< endl; 
        }
        else if (i>9 && i%2 != 0)
        {
      
            cout << "odd\n"<< endl; 
        }
    }
    
    return 0; 
}
