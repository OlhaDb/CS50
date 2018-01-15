#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main (void)

{
printf ("Your name: ");
string s = GetString ();
    
    for (int i = 0, n = strlen (s); i<n; i++)
    {
        if (isupper (s[i]))
        printf ("%c",s[i]);
    }
    printf ("\n");
}
