#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, k;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    for (i=0;i<len;i++)
    {
        for (j=0;j<i;j++) 
        {
            if (str[i]==str[j])
            {
                for (k=i;k<len;k++)
                {
                    str[k]=str[k + 1];
                }
                len--;
                i--;  
            }
        }
    }
    printf("%s",str);
}

