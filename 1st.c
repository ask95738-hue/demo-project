//expense tracker

#include <stdio.h>
int main(){
    int salary;
    printf("enetr your salary:");
    scanf("%d",&salary);
    int rent,grocery,family,parties,delivary,utilities,unknown;
    printf("Enter your rent:");
    scanf("%d",&rent);
    printf("Enter your grocery:");
    scanf("%d",&grocery);
    printf("Enter your family:");
    scanf("%d",&family);
    printf("Enter your parties:");
    scanf("%d",&parties);
    printf("Enter your delivary:");
    scanf("%d",&delivary);
    printf("Enter your utilities:");
    scanf("%d",&utilities);
    printf("Enter your unknown:");
    scanf("%d",&unknown);
    int total= rent+grocery+family+parties+delivary+utilities+unknown;
    printf("total expense is:%d\n",total);
    if(salary>=total*0.6){
        printf("you did great manage");
    }else{
        printf("make sure to low your expenses next time :)");
    }
    return 0;
}