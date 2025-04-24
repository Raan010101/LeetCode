#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
  return max(max(a, b), max(c, d)); //For this case we cant make directly max(a,b,c,d) and have to break and compare the max (a,b) and max (c,d) 
}; 


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
