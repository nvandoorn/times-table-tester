#include <iostream>
#include <cstdlib> 
#include <stdlib.h>
#include <time.h>
#include <stdio.h> 
 





using namespace std;


int main (int argc, char *argv[])
{

char exit=0;
time_t curtime1,curtime2; 
int i=0,num1=0, num2=0, prod=0, num_question,num_c=0, num_w=0;

printf("The Woofers Math Tester Version 5\n");
printf("Copyright Woofers Studios 2007\n");
printf("Made by Nicholas Van Doorn\n");
printf("Enter answer and press enter\n\n");
printf("How many questions would you like? ");
cin >> num_question;
printf("Making %d questions\n\n",num_question);
srand((unsigned)time(NULL)); 
curtime1 = time (NULL);

while( (!exit) && (i<num_question) )
{
	num1=(int)rand()%12;
	num2=(int)rand()%12;
	printf("What is %d  *  %d = ",num1,num2);
    cin >> prod;
		

	while( (num1*num2 != prod) && prod!=-1)
	{
        printf("Wrong!");
        num_w++;
        cout<<"\n";
        cout<<"\n";
 		printf("What is %d  *  %d = ",num1,num2);
		cin >> prod;
	}
	
	printf("Correct!");
	num_c++;
	cout<<"\n";
	cout<<"\n";
	i++;
	if(prod==-1)
		exit=1;
		   
}
curtime2 = time (NULL);
printf("You got %d questions right first time\n",num_c);
printf("You got %d questions wrong\n",num_w);
printf("Your time was %ld seconds\n",curtime2-curtime1);
printf("Your average time per question was %4.2f seconds\n\n",(float)(curtime2-curtime1)/(float)num_question);
printf("Good Job!\n");
printf("Press enter to exit");
getchar();
getchar();
return(0);

}
