#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c;
    c = a + b;
    printf("a + b =%d\n", c);
    for (int i=1; i<10; i++) {
        printf("c = %d\n", c-i);
    }
    return 0;
}