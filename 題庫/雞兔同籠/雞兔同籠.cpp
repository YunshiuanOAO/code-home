#include<stdio.h>
int main()
{
    int a, b, N, M;
    scanf("%d%d", &N, &M);
    a = (4*N-M)/2;
    b = N-a;
    if(M % 2 == 1 || a < 0 || b < 0)
        printf("NO\n");
    else{
        printf("YES\n");
        printf("%d %d\n", a, b);
    }
}

