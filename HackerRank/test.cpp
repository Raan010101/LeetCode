#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int i; 
    long h; 
    double j; 
    char c; 
    float f;

    printf("Please enter 5 different types of data:\n");

    scanf("%d", &i);    // Read integer
    scanf("%ld", &h);    // Read long
    scanf(" %c", &c);    // Use a space before %c to skip any leftover whitespace
    scanf("%f", &f);     // Read float
    scanf("%lf", &j);    // Read double

    // Print the values entered
    printf("%d\n%ld\n%c\n%f\n%lf\n", i, h, c, f, j);

    return 0;
}
