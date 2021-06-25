#include <stdio.h>
#include <math.h>

#define cars 80000
#define rate 0.07
#define limit 160000

int main()
{
    long years,temp;

    temp = cars;
    years = 0;

    while(temp<=limit)
    {
        temp = ceil(temp*(1+rate));
        years++;
    }
    printf("%ld\n",years);
    printf("%ld\n",temp);
}
