#include<stdio.h>
#include<stdlib.h>
int main()
{
    int st,cc,c,i,j,g,n;
    int cf, uf, uc;
    scanf("%d",&g);
    while(g--) {
        int noflag=0, ucflag=0;
        scanf("%d",&n);
        char b[n];
        scanf("%s",b);
        for(i=0;i<n;i++) {
            cc = 0;
            uc = 0;
            for(j=0;j<n;j++) {
                if(b[i]>=65 && b[i]<=90) {
                    if(b[i]==b[j]) cc+=1;
                }
                else if(b[i]==95){
                    uc+=1;
                    break;
                }
            }
            if(cc<2 && b[i]>=65 && b[i]<=90) {
                noflag=1;
                break;
            }
            if(uc>0) ucflag=1;
        }
        if(ucflag==0 && noflag==0){
            int count=1, countf, nonewflag=0;
            for(i=0;i<n-1;i++) {
                if(b[i]==b[i+1]) {
                    count+=1;
                }
                else {
                    if(count<2) {
                        printf("NO\n");
                        nonewflag=1;
                        break;
                    }
                    count=1;
                }
            }
            if(nonewflag==0) printf("YES\n");
        }
        else {
            if(noflag==1) printf("NO\n");
            else printf("YES\n");
        }
    }
    return 0;
}