/*
TIC TAK TOE
*/

#include<stdio.h>

int menu();

int main(){
    int m;
    m=menu();
    return 0;
}

int menu(){
    int ch1;
    printf("\tTIC TAC TOE\n");
    printf("\t===========\n");
    printf("\n1. Player vs Player\n2. Player vs Computer\n3. Quit\n");
    while(1){
        printf("\nChoose an option: "); 
        scanf("%d",&ch1);
        if(ch1>0&&ch1<4){
            return ch1;
        }
        else{
            printf("Invalid option...try agian");
        }
    }
}
