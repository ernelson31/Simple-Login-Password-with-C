#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
char username[15];
char password[12];

printf("Enter your username:\n");
scanf("%s",&username);

printf("Enter your password:\n");
scanf("%s",&password);

if(strcmp(username,"Goku")==0){
if(strcmp(password,"Food")==0){
printf("\nWelcome.Login Success!");
}
else{ printf("\nwrong password"); }
}
else{ printf("\nUser doesn't exist");}
return 0;}
