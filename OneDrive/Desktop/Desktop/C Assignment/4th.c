#include<stdio.h>
#include<string.h>
void main()
{
    char a[40],b[30];
    printf("enter string A,enter string B:");
    scanf("%s %s", a, b);
    int i,j,l1,l2,temp,flag=1;
    l1=strlen(a);
    l2=strlen(b);
    if(l1==l2){
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l1;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<l2;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    }
    if(strcmp(a,b)==0)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    if(flag==1){
    printf("Anagrams");
    }
    else{
        printf("Not Anagram");
    }
}