#include <stdio.h>
#include<cs50.h>
int main (void)
{
int n;
int k = 0;

    printf ("Rest: ");
float s = GetFloat ();
//convert the rest from dollars into the coints
n = s * 100;
while (n >= 25)
{
n = n - 25;
k = k + 1;
}
    while (n >= 10)
    {
    n = n - 10;
    k = k + 1;
    }
         while (n >= 5)
        {
        n = n - 5;
        k = k + 1;
        }
             while (n >= 1)
            {
            n = n - 1;
            k = k + 1;
            }
                printf ("%i\n",k);
        
}
