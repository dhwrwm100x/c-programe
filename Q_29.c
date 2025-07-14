#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    // String loi ase
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str); // String length find koribo

    // First last element check kori
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}
