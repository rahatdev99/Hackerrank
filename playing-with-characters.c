#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char a[101];
    char b[101];
    char c[101];
    scanf("%s\n", a);
    scanf("%s\n", b);
    fgets(c, sizeof(c), stdin);
    printf("%s\n", a);
    printf("%s\n", b);
    printf("%s\n", c);
    return 0;
}
