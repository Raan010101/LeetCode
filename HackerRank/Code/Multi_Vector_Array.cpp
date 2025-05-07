#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout<< "Enter the size of the vector:"; 
    int size; 
    cin >> size; // size = 6  

     
    vector<int>numbers; 
    cout<<"Enter some random numbers: ";
    for (int  i = 0; i < size; i++)
    {
        int number; 
        cin>> number; 
        numbers.push_back(number);
    }

    for (int i  = size -1 ; i >= 0 ; i--) 
    //size - = 6-1 = 5,  the index will be index 5, 
    //because the array start at index 0, 
    //and if the user inputs 6 for array size the value for the last array is number 5
    // and not 6. 
    {
        cout<< "The number at index " << i << " is: ";
        cout<<numbers[i]<<endl; 
    }
    
    
    return 0;
}