#include <stdio.h>
int main() {
    char ch;

    // User pora ekhon character loi ase
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space add kora hoise jate input clear thake

    // Vowel naki consonant check kore (lowercase + uppercase)
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a Vowel\n", ch);
    else
        printf("%c is a Consonant\n", ch);

    return 0;
}
