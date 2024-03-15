#include <stdio.h>
#include <conio.h>
char num[9]={'1','2','3','4','5','6','7','8','9'};
void system();
void board(){
     clrscr();
    printf("___Tic Tac Toe___\n\n");
    printf("     |     |     \n" );
    printf("  %c  |  %c  |  %c  \n",num[0],num[1],num[2]);
    
    printf("_____|_____|_____\n");
    printf("     |     |     \n" );
    printf("  %c  |  %c  |  %c  \n" ,num[3],num[4],num[5]); 
    printf("_____|_____|_____\n" );
    printf("     |     |     \n" );
     printf("  %c  |  %c  |  %c  \n" ,num[6],num[7],num[8]);
       printf("     |     |    \n" );}

     
 int wind(){
     if (num[0]==num[1] && num[1]==num[2]){
         return 1;}
            if (num[6]==num[7] && num[7]==num[8]){
         return 1;}
            if (num[0]==num[3] && num[3]==num[6]){
         return 1;}
            if (num[0]==num[4] && num[4]==num[8]){
         return 1;}
            if (num[2]==num[5] && num[5]==num[8]){
         return 1;}
            if (num[1]==num[4] && num[4]==num[7]){
         return 1;}
            if (num[3]==num[4] && num[4]==num[5]){
         return 1;}
            if (num[2]==num[4] && num[4]==num[6]){
         return 1;}
 int count =0;
 for(int i=0; i<=8;i++){
         if(num[i]=='X' || num[i]=='O'){
             count ++;}}
             if(count==9){
                 return 0;}
         return -1;}
         
     
int main(int argc, char *argv[])
{   int n,stat=-1;
	int player=1;
	board();
	while(stat==-1){
	    player=(player%2==0)? 2 :1;
	char mark =(player==1)?'X':'O';
	printf("enter position for player %d : ",player);
   scanf("%d",&n);
   if(n<1||n>9 || num[n-1]=='X' || num[ n-1] =='O'){
       printf("invalid input \n");
       continue ;}
 
       
       num[n-1]=mark;
       board();
      int w= wind() ;
      if(w==1){
       
       printf(" Player %d Winner", player);
       return 0;}
       else if(w==0){
           printf("Draw");
           return 0;}
           
           
       player++;
      }
}
