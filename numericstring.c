#include<stdio.h>
#include<stdlib.h>
void main()
{
    char s[1000];
    int i,j=0;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9')
        j++;

    }
    if(j==strlen(s))
        printf("Yes");
        else
            printf("No");


}
