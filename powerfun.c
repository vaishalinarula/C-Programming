#include <stdio.h> 
int power(int x, unsigned int y) 
{ 
    int res = 1; 
  
    while (y > 0) { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = res * x; 
  
        // n must be even now 
        y = y >> 1; // y = y/2 
        x = x * x; // Change x to x^2 
    } 
    return res; 
} 
  
int main() 
{ 
    int x; 
    unsigned int y;
    printf("Enter two numbers:");
    scanf(%d%d", &x, &y);
  
    printf("Power is %d", power(x, y)); 
  
    return 0; 
}
