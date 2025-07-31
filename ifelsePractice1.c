//This program is basic letter grade calculator
#include <stdio.h>
#include <strings.h>
int main() 
{
float gpa =0;
float examFirst = 0;
float examSecond = 0;
float examMakeup = 0;
char lecture[20] = " ";
float average = 0;
char answer = '\0';
printf ("This program will calculate your letter grade. \n");
printf("Please enter your lecture name: ");
scanf("%s", &lecture);
printf ("please enter your first exam note: ");
scanf ("%f",&examFirst);
printf ("please enter your second exam note: ");
scanf ("%f",&examSecond);
average = (examFirst +examSecond) / 2 ;
if (average >= 50){  
    printf("Did you take the makeup exam?: Y/N");
    scanf(" %c",&answer);
    if (answer == 'y') {
        printf("What is your make up exam note: ");
        scanf ("%f", &examMakeup);
        average = (examFirst+examSecond+examMakeup)/3;
        if (average >=50 && average <=54){
            printf("your letter grade for %s whith your %.2f average is DD", lecture,average);
        }
        else if (average >=55 && average <=59){
            printf("your letter grade for %s whith your %.2f average is DC", lecture,average);
        }    
        else if ( average >=60 && average <=69){
            printf("your letter grade for %s whith your %.2f average is CC", lecture,average);
        }
        else if ( average >=70 && average <=79){
            printf("your letter grade for %s whith your %.2f average is BB", lecture,average);
        }
        else if ( average >=80 && average <=89){
            printf("your letter grade for %s whith your %.2f average is BA", lecture,average);
        }
        else if ( average >=90 && average <=99){
            printf("your letter grade for %s whith your %.2f average is AA", lecture,average);
        }
        
    }
    else if ( answer == 'n'){
        if (average >=50 && average <=54){
            printf("your letter grade for %s whith your %.2f average is DD", lecture,average);
        }
        else if (average >=55 && average <=59){
            printf("your letter grade for %s whith your %.2f average is DC", lecture,average);
        }    
        else if ( average >=60 && average <=69){
            printf("your letter grade for %s whith your %.2f average is CC", lecture,average);
        }
        else if ( average >=70 && average <=79){
            printf("your letter grade for %s whith your %.2f average is BB", lecture,average);
        }
        else if ( average >=80 && average <=89){
            printf("your letter grade for %s whith your %.2f average is BA", lecture,average);
        }
        else if ( average >=90 && average <=99){
            printf("your letter grade for %s whith your %.2f average is AA", lecture,average);
        }
    }
}
else if (average <50)
{
     printf("What is your make up exam note: ");
        scanf ("%f", &examMakeup);
        average = (examFirst+examSecond+examMakeup)/3;
        if (average<44 && average >=0){
            printf("your letter grade for %s whith your %.2f average is FF", lecture,average);
        }
        else if (average>=45 && average<=49){
            printf("your letter grade for %s whith your %.2f average is FD", lecture,average);
        }
        else if (average >=50 && average <=54){
            printf("your letter grade for %s whith your %.2f average is DD", lecture,average);
        }
        else if (average >=55 && average <=59){
            printf("your letter grade for %s whith your %.2f average is DC", lecture,average);
        }    
        else if ( average >=60 && average <=69){
            printf("your letter grade for %s whith your %.2f average is CC", lecture,average);
        }
        else if ( average >=70 && average <=79){
            printf("your letter grade for %s whith your %.2f average is BB", lecture,average);
        }
        else if ( average >=80 && average <=89){
            printf("your letter grade for %s whith your %.2f average is BA", lecture,average);
        }
        else if ( average >=90 && average <=99){
            printf("your letter grade for %s whith your %.2f average is AA", lecture,average);
        }
}

return 0;
}
