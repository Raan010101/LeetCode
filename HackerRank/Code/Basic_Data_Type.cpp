#include <iostream>
#include <stdio.h>
using namespace std; 

 int main ()
 {    
    int i; 
    long h ; 
    double j;    
    char c; 
    float f; 
printf("Please enter 5 different types of data:\n"); 
    scanf("%d", &i); 
    scanf("%ld", &h);
    scanf(" %c", &c); 
    scanf("%f", &f); 
    scanf("%lf", &j);

   

    printf("%d\n%ld\n%c\n%f\n%lf\n", i, h, c, f, j);

    return 0;
}
     