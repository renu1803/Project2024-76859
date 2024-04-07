#include <stdio.h>
#include <stdbool.h>

int isPalindrome(char str[]) {
    int len = 0;
    while (str[len] != 0) {
        len++;
    }
    int starting = 0;
    int end = len - 1;
    while (starting < end) {
        if (str[starting] != str[end]) {
            return false;
        }
        starting++;
        end--;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}
