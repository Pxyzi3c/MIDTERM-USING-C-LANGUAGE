#include <stdio.h>
#define p printf
#define s scanf

/*PROGRAMMER: Harvy Jones Pontillas DICT 1-2*/
int main()
{
    char name[25], gender;
    int age, lifes;
    float weight, height, bmr,nbmr;

    p("\n ENTER YOUR NAME: ");
    s("%s",&name);
    p(" ENTER YOUR AGE: ");
    s("%d",&age);
    p(" ENTER YOUR WEIGHT(in pounds): ");
    s("%f",&weight);
    p(" ENTER YOUR HEIGHT(in inches): ");
    s("%f",&height);
    p(" ENTER YOUR GENDER: ");
    s("%s",&gender);

    if((gender=='F')||(gender=='f')){
        bmr=655+(4.3*weight)+(4.7*height)-(4.7*age);
        p(" YOUR BMR IS: %.2f",bmr);}
    else if((gender=='M')||(gender=='m')){
        bmr=660+(6.3*weight)+(12.9*height)-(6.8*age);
        p(" YOUR BMR IS: %.2f",bmr);}
    else
        p("INVALID ENTRY!");

    p("\n\n ENTER YOUR LIFESTYLE:");
    p("\n\t1. SEDENTARY(SOMEWHAT INACTIVE)");
    p("\n\t2. SOMEWHAT ACTIVE(EXERCISE OCCATIONALLY)");
    p("\n\t3. ACTIVE(EXERCISE 3-4 DAYS A WEEK)");
    p("\n\t4. HIGHLY ACTIVE(EXERCISE EVERYDAY)");
    p("\n ENTER YOUR LIFESTYLE: ");
    s("%d",&lifes);
    switch(lifes){
    case 1:
            p(" YOUR NEW BMR IS: %.2f",nbmr=bmr+(bmr*.20));
            break;
    case 2:
            p(" YOUR NEW BMR IS: %.2f",nbmr=bmr+(bmr*.30));
            break;
    case 3:
            p(" YOUR NEW BMR IS: %.2f",nbmr=bmr+(bmr*.40));
            break;
    case 4:
            p(" YOUR NEW BMR IS: %.2f",nbmr=bmr+(bmr*.50));
            break;
    default:
            p(" INVALID ENTRY!");
    }
    p("\n ______________________________________________________________________________");
getch();
}
