#include<stdio.h>

// anish deshmukh 
// anish_03_
int main(){

    int days;
    printf("enter the number of days ");
    scanf("%d",&days);

    int years;
    int months;

    if(days%365 == 0  ){
        years = days/365 ;

    }
    else {
        years = days/365;

        days = days-(years*365);

        months = days/30; 

        days = days-(months*30);






        
    }

    printf("%d years %d months %d days " , years , months , days );
    
    getch();
    
    
}
