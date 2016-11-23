#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    
    srand(time(NULL));
    int i,num;
    int guess;
    printf("********************************\n");
    printf("********* Guess Number *********\n");
    printf("********************************\n\n");
    
    num = rand() % 50 + 1;
    
    for(i=0; i<5; i++) {
        printf("%d. Guess Number : ",i+1);
        scanf("%d",&guess);
        if(guess == num) {
            printf("You Win!!!\n");
            return 0;
        }
        if(guess > num)
            printf("Down!\n");
    
        if(guess < num)
            printf("Up!\n");
    }
    printf("You Lose...\n");
    printf("Number is %d\n",num);
    return 0;
}