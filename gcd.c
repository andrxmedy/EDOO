#include <stdio.h>

int gcd(int a, int b){
    while (b>0)
    {
        int r = a % b;
        a = b;
        b = r;

    }
    
    return a;
    
}



int main(){
    int a;
    int b;
    scanf("%d %d", &a , &b);
    int g = gcd(a,b);
    print("The gcd of %d and %d \n", a, b, g);
    return 0;
}
