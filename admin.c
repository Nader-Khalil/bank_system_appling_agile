#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct client
{
    char *name;
    int id;
    int account_no;
    int password;

} Client;

typedef struct admin
{
    char *name;
    int id;
    int account_no;
    int password;

} Admin;

void admin_init(Admin *person);
void admin_Login(Admin* person);
void admin_CreateAccount();
void admin_Logout();
void admin_EditProfile();
void admin_MakeTranaction();
void admin_ChangeAccountStatus();
void admin_GetCash();
void admin_DepositInAccount();
void admin_ReturnToMainMenu();

void admin_init(Admin *person)
{
    person->name = "nader";
    person->id = 1;
    person->account_no = 12133254;
    person->password = 12345678;
}

void admin_Login(Admin* person)
{   char* username;
    int password;
   
    printf("Please Enter Admin UserName : ");
    scanf("%c", &username);

    printf("Please Enter Admin Password : ");
    scanf("%d", &password);

    if (username == person->name && password == person->password){ printf("WElcome to Admin Window \n");}
    else{printf(" Invalid username or password");}
}
void admin_CreateAccount() {}
void admin_Logout() {}
void admin_EditProfile() {}
void admin_MakeTranaction() {}
void admin_ChangeAccountStatus() {}
void admin_GetCash() {}
void admin_DepositInAccount() {}
void admin_ReturnToMainMenu() {}
