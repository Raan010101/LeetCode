 #include <iostream>
 #include <vector>
 using namespace std;
 
 int main() {
     
    int len; // this i sto get the length of the vector
    vector<int> happy; 
    cout << "Enter the length of the vector happy: ";
    cin>> len; 
    happy.resize(len); // this is to resize the vector happy to the length of len


    cout << "The vector size is "<< len<<". You may continue to enter the elements of happy."<<endl; 

                for (int i =0;  i< len; i++)
                {       
                        cin>> happy[i]; 
                        cout<< "The entered value is: "<< happy[i]<<endl;
                }
                


     return 0;
 }
