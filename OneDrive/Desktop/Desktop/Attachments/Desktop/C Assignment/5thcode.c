#include <stdio.h>
#include <string.h>
int main() 
{
    char sentence[1000];
    char word[100];
    char temp[100];
    int i=0,j=0,k=0;
    int count=0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    int len = strlen(sentence);
    printf("Enter a word to count: ");
    scanf("%s", word);
    while (sentence[i]!='\0') 
    {
        if (sentence[i]!=' ' && sentence[i]!='\t') 
        {
            temp[j++] = sentence[i];
        } 
        else 
        {
            temp[j] = '\0';  
            if (strcmp(temp, word) == 0)
            {
                count++;
            }
            j = 0; 
        }
        i++;
    }
    temp[j] = '\0';
    if (strcmp(temp, word) == 0) {
        count++;
    }
    printf("%s (%d times)\n", word, count);
    return 0;
}
