#include<stdio.h>
void  namaste();
void bonjur();
int main(){
    printf("enter i for india and f for french:");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
namaste();
    } else if (ch=='f'){
        bonjur();
    } else
    printf("not valid");
    return 0;
}
void namaste(){
    printf("namasteeee");
}
void bonjur(){
    printf("bonjur");

}
