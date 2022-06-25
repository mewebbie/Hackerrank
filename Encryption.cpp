#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j=0;
    double l;
    char s[81];
    scanf("%[^\n]%*c",s);
    int len=strlen(s);
    int copy=len;
    for(i=0;i<len;i++)
    {
        if(s[i]!=32)
        {
            s[j]=s[i];
            j++;
        }
    }
    len-=i-j;
    l=sqrt(len);
    int nl= (int)l;
    char str[nl][nl+1];
    int r=nl,c=nl+1;
    if((int)l==l) 
    {
        char str[nl][nl];
        r=nl;
        c=nl;
    }
    if(r*c<len) r+=1;
    int k=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            
            str[i][j]=s[k];
            k+=1;
            if(k==len) break;
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            if(str[j][i]>96 && str[j][i]<123)
            printf("%c",str[j][i]);
        }
        printf(" ");
    }
    
    return 0;
}