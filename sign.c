#include <stdio.h>

int sign(int x) {
    return ((!!x) | x>>31);
}

int main()
{
    int x;
    scanf("%d", &x);
    int r = sign(x);
    printf("%d", r);
    return 0;
}
