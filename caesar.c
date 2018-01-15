#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{


int k = atoi (argv[1]);

string n = GetString ();


for (int i = 0, m = strlen(n);i < m;i++)
        {
        
        if (isupper(n[i]))
        {
            printf ("%c", (n[i] - 65 + k) % 26 + 65);
        }
            if (islower(n[i]))
            {
                printf ("%c", (n[i] - 97 + k) % 26 + 97);
            }
                else
                {
                    printf ("%c", n[i]);
                }
     
                       
            }   
            
             printf ("\n");

}
