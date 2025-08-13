// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main() 
// {
//     char firstName[50], lastName[50];
//     int birthYear;
//     printf("enter your first name:,enter your last name:,enter your last name:");
//     scanf("%s %s %d",&firstName,&lastName,&birthYear);
//     char firstInitial = tolower(firstName[0]);
//     int year = birthYear % 100;
//     for (int i = 0;i<strlen(lastName); i++)
//      {
//         lastName[i] = tolower(lastName[i]);
//     }
//     printf("Username: %c%s%d\n", firstInitial, lastName, year);
// }
#include<stdio.h>
int main()
{
    int num,count=0,temp=2;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(temp==count)
    {
        printf("its a prime number......");
    }
    else{
        printf("not a prime nunber");
    }
    
}




