#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    

  int size; 

    cout<< "Enter the size of the vector:";
    cin >> size; // size = 6
    vector <string>name; 
    
    cout<< "Enter a string: ";
    for (int i=0; i < size; i++)
    {
        cin>> name[i]; 
    }
   
    for (int i = size -1; i >= 0; i--)
    {
       cout<<" The string for the index number is" << i << "is"<< name[i]; 
     }
    
    return 0;
}



