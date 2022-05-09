#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct client
{
    char *name;
    int id;
    int account_no;
    int password;
    char *fullAddress;
    int nationalID;
    int age;
    int guardian; // boolean
    int guardianNationalID;
    char *accountStatus; // can be Active, Restricted or Closed
    int balance;

} Client;

void client_init(Client *person);
void client_Login();
void client_EditProfileInfo();
void client_Logout();
void client_MakeTranaction();
void client_ChangeAccountPassword();
void client_GetCash();
void client_DepositInAccount();
void client_ReturnToMainMenu();

void client_init(Client *person)
{
    person->name = " ";
    person->id = NULL;
    person->account_no = NULL;
    person->password = NULL;
    person->fullAddress = " ";
    person->nationalID = NULL;
    person->age = NULL;
    person->guardian = NULL;
    person->guardianNationalID = NULL;
    person->accountStatus = " ";
    person->balance = NULL;
}

void client_Login() {}
void client_EditProfileInfo() {}
void client_Logout() {}
void client_MakeTranaction() {}
void client_ChangeAccountPassword() {}
void client_GetCash();
void client_DepositInAccount() {}
void client_ReturnToMainMenu() {}
