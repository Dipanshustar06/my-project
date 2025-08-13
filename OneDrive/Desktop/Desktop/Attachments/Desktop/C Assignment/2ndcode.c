#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char password[50];
    printf("enter your password:");
    scanf("%s",password);
    int countupper=0,countlower=0,countdigit=0,countspecial=0;
    for(int i=0;password[i]!='\0';i++)
    {
        if(isupper(password[i]))
        {
            countupper=1;
        }
        else if(islower(password[i]))
        {
            countlower=1;
        }
        else if(isdigit(password[i]))
        {
            countdigit=1;
        }
        else if(strchr("*!#@&",password[i]))
        {
            countspecial=1;
        }
    }
    if(countupper && countlower && countdigit && countspecial)
    {
        printf("Strong password");
    }
    else{
        printf("Weak password");
    }
}



