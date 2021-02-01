#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int i,n,m;
    cin >> n >> m;
    if(n==m){
        cout << 0 << endl;
        return 0;
    }
    int ar[m];
    for(i=0;i<m;i++){
        cin >> ar[i] ;
    }
    int j=0;
    int tp_dval=0,tp_dval2;
    int dval=0;
    while(n-j){
        for(i=0;i<m;i++){
            tp_dval2=abs((n-j-1)-ar[i]);
            if(i>0) {
                if(tp_dval2<tp_dval) tp_dval=tp_dval2;
            }
            else tp_dval=tp_dval2;
        }
        if(tp_dval>dval) dval=tp_dval;
        j++;
    }
    cout << dval;
    return 0;
}
