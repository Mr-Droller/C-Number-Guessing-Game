#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    char difficulty[20];
    int upper_bound;
    int random_num;
    int num;
    
    printf("Random Number Game: \n");
    printf("Difficulty: \tEasy\tNormal\tHard\tInsane\n");
    printf("Select Your Difficulty: ");
    scanf("%s", difficulty);
    
    srand(time(0));
    
    if(strcmp(difficulty, "Easy") == 0){
    	upper_bound = 10;
    	random_num = rand() % (upper_bound + 1);
    	printf("The range is between 0-10\n");
	} else if (strcmp(difficulty, "Normal") == 0){
		upper_bound = 50;
		random_num = rand() % (upper_bound + 1);
		printf("The range is between 0-50\n");
	} else if (strcmp(difficulty, "Hard") == 0){
		upper_bound = 100;
		random_num = rand() % (upper_bound + 1);
		printf("The range is between 0-100\n");
	} else if (strcmp(difficulty, "Insane") == 0){
		upper_bound = 1000;
		random_num = rand() % (upper_bound + 1);
		printf("The range is between 0-1000\n");
	} else {
		printf("Wrong Choice. Defaulting to Easy Mode (0-10) because you can't type\n");
		upper_bound = 10;
	}
	
	printf("Alright, Guess your number: ");
	scanf("%d",&num);
	
	if (num == random_num){
		printf("Wow, The number was %d! Congratulations", num);
	} else {
		printf("Wrong! The number was %d.Try Again.", random_num);
	}
    return 0;
}
