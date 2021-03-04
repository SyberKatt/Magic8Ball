#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int RandomInteger(int);

int main()
{
    // Seed the srand function with the current time
    // If we don't do this, we will get the same random numbers
    // each run
    srand(time(NULL));

	char answer;
	printf_s("\nWould you like to play? Enter Y or N: \n");
	scanf_s(" %c", &answer);

    // Eight ball game loop
    void EightBallLoop();
    
        char userQuestion;
        printf("Hello User, what is it you seek the answer to? (Max 256 chars)\n"); // prompt user for question
        scanf_s(" %c", &answer);

        if (RandomInteger(2) > 0)
        {
            printf_s("Yes!");
        }
        else printf_s("No!");
}

/// <summary>
/// Generates a random number between 0 and max
/// </summary>
/// <param name="max">Maximum random integer</param>
/// <returns>Random integer</returns>
int RandomInteger(int max) 
{
    unsigned int
        num_bins = (unsigned int)max + 1,
        num_rand = (unsigned int)RAND_MAX + 1,
        bin_size = num_rand / num_bins,
        defect = num_rand % num_bins;

    int x;
    do {
        x = rand();
    } while (num_rand - defect <= (unsigned int)x);
    return x / bin_size;
}


	






