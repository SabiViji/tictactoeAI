/*
TIC TAK TOE
*/

#include<stdio.h>

char a[10];

void init();
int menu();
void board();
int legal_move(int opt,int ch);
void play();
int check_win();

void init(){
    a[0]='1';a[1]='2';a[2]='3';a[3]='4';a[4]='5';a[5]='6';a[6]='7';a[7]='8';a[8]='9';
}

int main(){
    int m;
    init();
    //m=menu();
    play();
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

int legal_move(int opt,int ch){
    if(opt>0&&opt<10&&a[opt-1]!='X'&&a[opt-1]!='O'){
        if(ch==1){
            a[opt-1]='X';
            return 2;
        }
        a[opt-1]='O';
        return 1;
    }
    printf("Illegal move...try again\n");
    return ch;
}
void play(){
    int chance=1,status=1,opt;
    board();
    while(status){
        printf("Player %d play: ",chance);
        scanf("%d",&opt);
        chance = legal_move(opt,chance);
        board();
        status = check_win(chance); 
    }
}

int check_win(int ch){
    if(a[0]==a[1]&&a[1]==a[2]){
        printf("Player %d won\n",ch-1);
        return 0;
    }
    else if(a[3]==a[4]&&a[4]==a[5]){
        printf("Player %d won\n",ch-1);
        return 0;
    }
    else if(a[6]==a[7]&&a[7]==a[8]){
        printf("Player %d won\n",ch-1);
        return 0;
    }
    else if(a[0]==a[3]&&a[3]==a[6]){
        printf("Player %d won\n",ch-1);
        return 0;
    }
    else if(a[1]==a[4]&&a[4]==a[7]){
        printf("Player %d won\n",ch-1);
        return 0;
    }
    else if(a[2]==a[5]&&a[5]==a[8]){
        printf("Player %d won\n",ch-1);
        return 0;
    }
    else if(a[0]==a[4]&&a[4]==a[8]){
        printf("Player %d won\n",ch-1);
        return 0;
    }
    else if(a[2]==a[4]&&a[4]==a[6]){
        printf("Player %d won\n",ch-1);
        return 0;
    }
    else if(a[0]!='1'&&a[1]!='2'&&a[2]!='3'&&a[3]!='4'&&a[4]!='5'&&a[5]!='6'&&a[6]!='7'&&a[7]!='8'&&a[8]!='9'){
        printf("Draw!\n");
        return 0;
    }
    else{
        return 1;
    }
}

void board(){
    printf("\
   |   |   \n\
 %c | %c | %c \n\
___|___|___\n\
   |   |   \n\
 %c | %c | %c \n\
___|___|___\n\
   |   |   \n\
 %c | %c | %c \n\
   |   |   \n\
           \n",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
}
