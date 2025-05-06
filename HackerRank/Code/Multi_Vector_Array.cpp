#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout<< "Enter the size of the vector:"; 
    int size; 
    cin >> size; 

     
    vector<int>numbers; 
    cout<<"Enter some random numbers: ";
    for (int  i = 0; i < size; i++)
    {
        int number; 
        cin>> number; 
        numbers.push_back(number);
    }

    for (int i  = size -1 ; i >= 0 ; i--)
    {
        cout<< "The number at index " << i << " is: ";
        cout<<numbers[i]<<endl; 
    }
    
    
    return 0;
}