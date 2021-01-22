 #include<bits/stdc++.h>
 #include<iostream>
 #include<vector>
 #include<string>
 
 using namespace std;
 
 string mog(string a,string b,string c)
 {
    int i,k=b.length();
    for(i=1;i<k-1;i++)
    {
        if(b[i] > a[i] && b[i] > c[i] && b[i-1]<b[i] && b[i+1]<b[i])
        {
            b[i]='X';
        }
    }
    return b;
 }
 
 void swap(string *a,string *b)
 {
     *b=*a;
 }
 
 int main()
 {
    int i,n;
    vector<string> grid;
    string input;
    string ret;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        grid.push_back(input);
    }
    for(i=1;i<n-1;i++)
    {
        ret=mog(grid[i-1],grid[i],grid[i+1]);
        swap(&ret,&grid[i]);
    }
    
    for(int i=0;i<n;i++){
        cout << grid[i] << endl;
    }
    
    
    return 0;
 }