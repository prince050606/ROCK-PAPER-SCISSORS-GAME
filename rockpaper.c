#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
1 = Rock
2 = Paper
3 = Scissors
*/
int main(){
    int user,computer;
printf("Rock Paper Scissor Game\n");
printf("1.Rock\n");
printf("2.Paper\n");
printf("3.Scissor\n");

printf("\nRules:\n"); 
printf("Rock beats Scissors\n"); 
printf("Scissors beats Paper\n"); 
printf("Paper beats Rock\n\n");

printf("Enter your choice(1-3):");
scanf("%d",&user);

srand(time(0));
computer=(rand()%3)+1;

if(user==1)
printf("you choose rock\n");
else if(user==2)
printf("you choose paper\n");
else if(user==3)
printf("you choose scissor\n");
else{
    printf("Invalid choice!");
    return 0;
}
if(computer==1)
printf("computer choose rock\n");
else if(computer==2)
printf("computer choose paper\n");
else if(computer==3)
printf("computer choose scissor\n");
printf("\n");
if(user==computer){
printf("Game is draw");
}
else if((user==1 && computer==3) ||(user==3 && computer==2)||(user==2 && computer==1)){
    printf("You win! Congratulations");
}
else{ 
printf("Computer win!\n");
printf("Better luck next time \n"); 
}
return 0;
}