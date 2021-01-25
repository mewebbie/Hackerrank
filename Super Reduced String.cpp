#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int test,j,i,len=s.size();
    char temp;
    while(1)
    {
        test=0;
        for(i=0;i<len-1;i++){
            if(s[i]==s[i+1]){
                for(j=i+1;j<len-1;j++){
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
                for(j=i;j<len-1;j++){
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
                i+=1;
                len-=2;
            }
            if(len==0){
                cout << "Empty String" ;
                exit(0);
            }
        }
        for(i=0;i<len-1;i++){
            if(s[i]==s[i+1]){
                test=1;
                break;
            }
            
        }
        if(test==0) break;
    }
    for(i=0;i<len;i++) cout << s[i];
    
    return 0;
}
