#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include <time.h>
void guess(int N)
{
    int number, guess, no_of_guess = 0;
    srand(time(NULL)); // seed the random number

    number = rand() % N; // generating random number

    do
    {   
        if (no_of_guess > 9)
        {
            printf("You Loose\n");
            break;
        }

        printf("Enter The Guessed Number between 1 to 100\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower Number please\n");
            no_of_guess++;
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
            no_of_guess++;
        }
        else
        {
            printf("CONGRALUTION ! You Guessed the Number in %d attempts\n", no_of_guess);
        }

    } while (guess != number);
}
int main()
{
    int N = 100;
    guess(N);
    return 0;
}