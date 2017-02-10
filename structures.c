#include <stdio.h>
#include <stdlib.h>
int f = 1, g;
int main()
{
    struct a
    {
        int a;
        char b;
        long c;
    }e, *d;
    e.a = 23;
    d->a = &f;
    g = d->a;
    printf("%d", g);
    return 0;
}
