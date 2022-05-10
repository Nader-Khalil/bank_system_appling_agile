#include <stdio.h>
#include "admin.c"
#include <stdlib.h>
#include <string.h>
#include "account.c"
  
// main function -
// where the execution of program begins
int main()
{
  //Admin admin;
   printf("pass %d \n",30);
   
  Account account = account_init() ;
  
     printf("age %d \n",account.age);
      //printf("id %c \n",account.accountID);

 
   
  //account_init(acc);
  int a=30;
  printf("pass %d \n",30);
  printf("hallo"); 
  
    return 0;
}
