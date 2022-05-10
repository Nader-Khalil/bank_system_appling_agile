#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct account
{
    char* fullName;
    char *fullAddress;
    int nationalID;
    int age;
    char *accountID;
    char* guardian;
    int guardianNationalID;
    char *status;
    char *balance;
    char *password;
    struct account* Next;
} Account;


typedef struct 
{
   Account* head;
   int size;
} AccountLinkedList;



Account account_init();
char* generate_AccountID(int id_length);
char* generate_Password(int password_length);



Account account_init()
{
  Account newAccount;
  newAccount.fullName =" ";
  newAccount.password = generate_Password(8);
  newAccount.accountID = generate_AccountID(10); 
  return newAccount;
}

char* generate_Password(int password_length)
{
    char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/";
    srand(time(NULL));
    char* str = (char*) malloc(sizeof(char) * password_length);
    for(int i = 0; i < password_length; i++) 
    {
        str[i] = list[rand() % (sizeof list - 1)];
        
    }
    return str;
}

char* generate_AccountID(int id_length)
{
    char list[] = "1234567890";
    srand(time(NULL));
    char* str = (char*) malloc(sizeof(char) * id_length);;
    for(int i = 0; i < id_length; i++) 
    {
        str[i] = list[rand() % (sizeof list - 1)];
        
    }
    return str;
}
