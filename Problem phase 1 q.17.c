#include <stdio.h>


int gcd(int a, int b) {

  // renu code @ phase 1 q.17
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;


    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);


    int result = gcd(num1, num2);

    
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
