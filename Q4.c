#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;// a aru b r value assign kori lolu aru temp variable lolu

    // swap kora r agot a & b r value
    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;// a or value temp variable ot copy korilu
    a = b;// b or value a ot copy korilu
    b = temp;//temp or value b ot copy korilu

    // a&b or value atia swap hoi goise
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
