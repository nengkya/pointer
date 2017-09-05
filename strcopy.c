/*Example using strcpy*/
#include <stdio.h>

int main(int argc, const char* argv[])
{
    /*Create an example variable capable of holding 50 characters*/
    char example[50];

    /*Copy the string "TechOnTheNet.com knows strcpy !" into the example variable*/
    strcpy (example, "TechOnTheNet.com knows strcpy!");

    /* Display the contents of the example variable to the screen */
    printf("%s \n", example);

    return 0;
}
