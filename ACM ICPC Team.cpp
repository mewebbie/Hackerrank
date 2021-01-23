#include<iostream>
#include<vector>
using namespace std;

int byPass(string a, string b, int m)
{
    int ret=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i] == '1' || b[i] == '1') ret++;
    }
    return ret;
}


int main()
{
    int j,i,n,m;
    cin >> n >> m;
    vector<string> s;
    for(i=0;i<n;i++)
    {
        string input;
        cin >> input;
        s.push_back(input);
    }
    int rep=0,maxCt=0,subCt;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            subCt=byPass(s[i],s[j],m);
            if(subCt>maxCt) 
            {
                maxCt=subCt;
                rep=1;
            }
            else if(subCt==maxCt) rep++;
        }
        
    }
    cout << maxCt << endl << rep;
    
    return 0;
}
