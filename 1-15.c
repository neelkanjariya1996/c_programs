#include <stdio.h>

float celsius (int fahr)
{
        float cel;

        cel = (5.0/9.0) * (fahr - 32);
        return cel;
}

int
main ()
{
        int i=0;

        printf("Fahrenheit \t Celsius\n");
        for (i=0; i<=300; i=i+20)
        {
                printf("%d \t\t %f\n", i, celsius(i));
        }
        return 0;
}

