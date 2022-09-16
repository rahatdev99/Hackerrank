#include <stdio.h>

void update(int *a,int *b) {
    int c,d;
    c = *a + *b;
    if(*a > *b){
       d = *a - *b;
    }
    else{
       d = *b - *a; 
    }
    

    *a = c;
    *b = d; 
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    update(&a,&b);

    printf("%d\n%d\n",a,b);

    return 0;
}