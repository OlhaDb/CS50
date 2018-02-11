/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */


#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 512


int main(void)
{
    // open memory card
    FILE* input = fopen("card.raw", "r");
    if (input == NULL)
    {
        printf("Could not open file\n");
        return 2;
    }
    //create buffer
    unsigned char buffer [BUFFER_SIZE];

    //create a counter
    int counter = 0;

    ///make space for jpg file's name
    char image [7];

    // check if we find new jpg file

    FILE* picture = NULL;

    while (fread(buffer, BUFFER_SIZE,1,input) == 1)
    {
        //finding the beggining of jpg file

        if ((buffer[0] == 0xff)&& (buffer[1] == 0xd8) && (buffer[2] ==
0xff) && (buffer[3] == 0xe0 || buffer[3] == 0xe1))
        {

            //find start of new picture
            if (counter > 0)
            {
                fclose (picture);

            }
        //create a name for new file
        sprintf (image, "%03d.jpg",counter);

        picture = fopen (image, "a");
        counter ++;
        }

        //continue writing to file, if it's not the begining of a new jpg
        if (picture != NULL)
        {
            fwrite (buffer, BUFFER_SIZE, 1, picture);
        }


   }


//close the last picture
 fclose (picture);

// close infile
fclose(input);

return 0;

}
