#include<cs50.h>
#include<stdio.h>

int main(void)
{
int v = 1;
char y = ' ';
char x = '#';
int n;
do
{
    printf("Number: ");
    n = GetInt();
}

while (n < 0 || n > 24);
    for (int i = 0; i < n; i++)
    {
        v = v + 1;
            for (int q = n+1; q > v ; q--)      
            {  
                printf("%c",y);
            }
                for (int w = 0; w < v; w++)
                {
                    printf("%c",x);
                }
printf("\n");
                
       }
}
