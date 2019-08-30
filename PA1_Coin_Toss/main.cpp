/*
 * Sterling Henarie *
 * 8/30/2019        *
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Introduces the flip() function
int flip();

//Start of main
int main()
{
    //Declaring variables
    unsigned int loop;
    int headCount = 0;
    int tailCount = 0;

    //seed random number generator
    srand (time(NULL));

    //Establishes the for loop
    for (loop = 1; loop<=200; loop++)
    {

        if(flip() == 0)
        {
            ++tailCount;
        }

        else
        {
            ++headCount;
        }

        //Puts 20 per line
        if(loop%20==0)
        {
            puts( " " );
        }

    }

    //Prints the total number of Heads and Tails counted
    printf("\nThe total number of Heads was %d\n", headCount);
    printf("\nThe total number of Tails was %d\n", tailCount);
}

//Creates the flip() function
int flip()
{
    //scale by 2 for binary result
    int HorT = rand() %2;

    if(0==HorT)
    {
        printf("%s", "T ");
    }
    else
    {
        printf("%s", "H ");
    }

    //returns HorT as the integer value for flip when it is called
    return HorT;
}
