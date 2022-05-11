#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "account.c"
//#include "client.c"


typedef struct 
{
    char *username;
    char* password;

} Admin;

void admin_init();
void admin_CreateAccount(Account *newAccount );
Account* admin_OpenExstingAccount(AccountLinkedList* account);
//void admin_Login(Admin* person);
void admin_Logout();
void admin_EditProfile();
void admin_MakeTranaction();
void admin_ChangeAccountStatus();
void admin_GetCash();
void admin_DepositInAccount();
void admin_ReturnToMainMenu(); 

void admin_init()
{
    Admin* person;
    person->username = "admin";
    person->password = "admin";
} 

// void admin_Login(Admin* person)
// {   char* username;
//     int password;
   
//     printf("Please Enter Admin UserName : ");
//     scanf("%c", &username);

//     printf("Please Enter Admin Password : ");
//     scanf("%d", &password);

//     if (username == person->name && password == person->password){ printf("WElcome to Admin Window \n");}
//     else{printf(" Invalid username or password");}
// }


void admin_CreateAccount(Account *newAccount ) 
{

   // AccountLinkedList* accList= (AccountLinkedList*) malloc(sizeof(AccountLinkedList));
    Account account = account_init() ;
    account.fullName = newAccount->fullName;
    account.fullAddress = newAccount->fullAddress;
    account.age = newAccount->age;
    account.nationalID = newAccount->nationalID;
    if(account.age <= 21 ){ account.guardianNationalID = newAccount->guardianNationalID;}
    account.balance = newAccount->balance;
    account.status ="Active";
    account.Next =NULL;
    printf("Account Added ");
}


Account* admin_OpenExstingAccount(AccountLinkedList* account){}




void admin_Logout() {}
void admin_EditProfile() {}
void admin_MakeTranaction() {}

void admin_ChangeAccountStatus() {}
void admin_GetCash() {}
void admin_DepositInAccount() {}
void admin_ReturnToMainMenu() {}
