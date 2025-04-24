#include <stdio.h>
#include <stdlib.h> // For abs()

using namespace std; 

void update(int *a,int *b) {
    // Complete this function 
    int sum = *a + *b; 
    int diff = abs(*a - *b);
    
    *a = sum;  
    *b = diff; 

    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

}

/*
Notes: A pointer is just a varaible that stores the location addresss of vairable instaeda of calling that vaiarable. 
       An example; 
                   A person wants to give hundreds of boxes of free pizza to his neighbourhood, instead of caring all the pizza and deliver it one by one, 
                   A pointer just goes to each house of the neighbourhood and tells them that pizza is at my place, come over for a slice. 

                   Person :  Pointer
                   Pizza not directly brought :  very heavy load 
                   Pizza address brought and shared : light load 


*/