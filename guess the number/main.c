#include<stdio.h>
// this program is guessing game
// I have chosen a number between 0 to 20
// you have to guess the number , you will be given 5 chances
// All the best!
int main()
{
    int guess,CG,i;
    i=0;
    CG= 9;
    while(guess!=CG&&i<=3) {
    printf ("enter a guess:\n");
    scanf ("%d",&guess);
    i++;
    if (guess>10||guess<0)
        printf("you must enter number between 0 and 10 ");
 if (guess!=CG)
    printf("wrong answer\n");
 if (i==3)
    break;
    }
    if(i==3&&guess!=CG)
        printf("oops! you ran out of chances");
    if (guess==CG)
        printf("your guess is correct\n");


    return 0;
}
