#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {
    int flag=0,cpy,i,dx,d,n,left,right;
    long sq;
    while(1)
    {
        if(p>q) 
        {
            if(flag==0) printf("INVALID RANGE");
            exit(0);
        }
        else{
        d=0,dx=0;;
        n=p;
        while(n>0){
        d+=1;
        n=n/10;
        }
        sq=(long)p*p;
        while(sq>0){
            dx+=1;
            sq=sq/10;
        }
        sq=(long)p*p;
        char str[dx];
        cpy=dx-1;
        while(sq>0){
            str[cpy--]=(sq%10)+48;
            sq=sq/10;
        }
        left=0,right=0;
        for(i=0;i<dx-d;i++)
        {
            left+=(str[i]-48)*round(pow(10,dx-d-1-i));
        }
        char r[d];
        int k=0;
        for(i=dx-d;i<dx;i++)
        {
            r[k++]=str[i];
        }
        for(i=0;i<d;i++)
        {
            right+=(r[i]-48)*round(pow(10,d-1-i));
        }
        if(left+right==p) 
        {
            printf("%d ",p);
            flag=1;
        }
        p+=1;
        }
    }
}

int main()
{
    int p,q;
    scanf("%d %d",&p,&q);
    kaprekarNumbers(p,q);
    return 0;
}
