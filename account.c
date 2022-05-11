#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "account.h"



extern void account_init(Account* account)
{
  char* pass =generate_Password(8);
  char* id = generate_AccountID(10);
  account->password =  pass;
  account->accountID = id;
  //free(pass);
  //free(id);
}

extern char* randomPasswordGeneration(int N)
{
    // Initialize counter
    int i = 0;
  
    int randomizer = 0;
    srand((unsigned int)(time(NULL)));
  
    // Array of numbers
    char numbers[] = "0123456789";
  
    // Stores the random password
    char* password= (char*) malloc(sizeof(char) * N);
  
    // To select the randomizer
    // inside the loop
     randomizer = rand() % 1;
  
    // Iterate over the range [0, N]
    for (i = 0; i < N; i++)
     {
  
        if (randomizer == 1) 
        {
            password[i] = numbers[rand() % 10];
            randomizer = rand() % 1;
                   
        }
    
    }
    password[i] = '\0';
    return password;
}

extern void accountLinkedList_init(AccountLinkedList* accountsList)
{
  accountsList->head = NULL;
  accountsList->size =0; 
}

extern char* generate_Password(int password_length)
{   int i;
    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/";
    srand(time(NULL));
    char* str [password_length];
    for(i = 0; i < password_length; i++) { str[i] = list[rand() % (sizeof list - 1)];}
    str[i] = '\0';
    return str;
}

extern char* generate_AccountID(int id_length)
{
    char list[] = "1234567890";
    int i;
    srand(time(NULL));
    char* str = (char*) malloc(sizeof(char) * id_length);
    for(i = 0; i < id_length; i++) {str[i] = list[rand() % (sizeof list - 1)];}
    str[i] = '\0';
    return str;
}
