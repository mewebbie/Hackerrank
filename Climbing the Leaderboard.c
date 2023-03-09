#include<stdlib.h>
#include<stdio.h>

int main() 
{
    int n, m, it=0;
    scanf("%d",&n);
    int ranked[n], rank_num[n];
    
    rank_num[0] = 1;
    for(int i=0;i<n;i++) {
        scanf("%d",&ranked[i]);
        if(i) {
            if(ranked[i]==ranked[i-1]) rank_num[it] = rank_num[it-1];
            else rank_num[it] = rank_num[it-1] + 1;
        }
        it++;
    }
    
    scanf("%d",&m);
    int player[m];
    for(int i=0;i<m;i++) scanf("%d",&player[i]);
    
    for(int i=0;i<m;i++) {
        for(int j=n-1;j>-1;j--) {
            if(j == 0) {
                if(player[i] >= ranked[j]) printf("%d\n",1);
                else printf("%d\n",2);
                break;
            }
            if(player[i] > ranked[j]) continue;
            if(j==n-1) {
                if(player[i] == ranked[j]) printf("%d\n",rank_num[j]);
                else printf("%d\n", rank_num[j]+1);
                break;
            }
            if(player[i]==ranked[j]) printf("%d\n",rank_num[j]);
            else printf("%d\n", rank_num[j+1]);
            break;
        }
    }
    return 0;
}
