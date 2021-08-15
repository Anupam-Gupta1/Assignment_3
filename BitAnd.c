#include <stdio.h>

int bitAnd (int x, int y) {    
    return ~(~x | ~y);
}

int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    int r = bitAnd(x, y);
    printf("%d", r);    
    return 0;
}
