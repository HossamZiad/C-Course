#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int mn;
	int lives = 10;
	int guess;
	srand(time(NULL));
	mn = (rand()%100)+1;
	printf("Hello Can You Guess The Number That I Thinking In:");
	new:
	scanf("%d",&guess);
	while(lives != 0){
		if (guess == mn){
			printf("Nice You Get\n\t");
			printf("Your Lives Is: %d",lives);
			return 0;
		}
		else if (guess > mn){
			printf("No Guess Lower\n\t");
			lives = lives - 1;
			goto new;
		}
		else if (guess < mn){
			printf("No Guess Higher\n\t");
			lives = lives - 1;
			goto new;
		}
		if (lives == 0){
			printf("Oh No Your Lives Ended\n\t");
			printf("Try Again Later\n\t");
			printf("The Number Was: %d",mn);
		}

	}
}