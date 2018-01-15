#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{


string k = argv[1];
if  (isupper(k) && islower(k))
{
 

int d = strlen (k);
int j = 0;

string n = GetString ();


for (int i = 0, m = strlen(n); i < m; i++)


        {
        k[j] = tolower(k[j]);
        
        if (isupper(n[i]))
        {
           
            printf ("%c", ((n[i] - 65)  + (k[j % d] - 97)) % 26 + 65);
            j = j + 1;
            }
            
            else if  (islower(n[i]))
            {
                printf ("%c", ((n[i] - 97) + (k[j % d] - 97)) % 26 + 97);
                  j = j + 1;
            }
            
            
                else
                {
                    printf ("%c", n[i]);
                }
     
                 }      
              
            
            
             printf ("\n");
             return 0;
             }
             
             else return 1;

}
