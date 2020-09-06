#include <stdio.h>
#include <stdlib.h>
#include <time.h>       //for random no. genetator

int main()
{
    int randomNumber = 0;
    int guess = 0;

    int numberOfGuess;
    time_t t;

    //initialization of random number generator
    srand((unsigned)time(&t));

    //get the random number
    randomNumber = rand() % 21;

    //print structure
    printf("\nThis is a Guessing Game.");
    printf("\nI have chosen a no. between 0 to 20, which you must guess.\n ");

    //Guess loop
    for (numberOfGuess = 5; numberOfGuess > 0; --numberOfGuess)
    {
        printf("\nYou have %d tr%s left.", numberOfGuess, numberOfGuess == 1 ? "y" : "ies");   //ternary operator
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if (guess == randomNumber)
        {
            printf("\nCongratulations, You guessed it");
            return;
        }
        else if (guess < 0 || guess > 20)       //Checking for invalid guess
            printf("I said the number is between 0 and 20\n");
        else if (randomNumber > guess)
            printf("Sorry, %d is wrong. My Number is greater than that.\n", guess);
        else if (randomNumber < guess)
            printf("Sorry, %d is wrong. My Number is smaller than that.\n", guess);
    }
    printf("\nYou have had a fine tries and failed. The number was %d\n", randomNumber);


    return 0;
}
