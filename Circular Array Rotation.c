#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,q;
    int a_n;
    scanf("%d %d %d",&n,&k,&q);
    int a[n], Q[q];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    k%=n;
    
    for(int i=0;i<q;i++) scanf("%d",&Q[i]);
    
    while(k--) {
        a_n = a[n-1];
        for(int i=n-1;i>0;i--) {
            a[i] = a[i-1];
        }
        a[0] = a_n;
        //for(int i=0;i<n;i++) printf("%d ",a[i]);
        //printf("\n");
    }
    
    for(int i=0;i<q;i++) printf("%d\n",a[Q[i]]);
        
    return 0;
}
