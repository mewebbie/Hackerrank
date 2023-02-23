#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Complete the 'appendAndDelete' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. STRING t
 *  3. INTEGER k
 */

char* appendAndDelete(char* s, char* t, int k) {
    int s_len,t_len,i,char_del,char_add;
    s_len = strlen(s);
    t_len = strlen(t);
    
    i = 0;
    while(s[i] == t[i] && s[i]!='\0') i++;
    
    char_del = s_len - i;
    char_add = t_len - i;
    
    //printf("No. of deletions -> %d\n",char_del);
    //printf("No. of additions -> %d\n",char_add);
    
    if(k == char_del+char_add) return "Yes";
    for(int x=0;x<i+1;x++) if(k-char_del-char_add-2*x == 0) return "Yes";
    if(k-char_del-char_add > 2*i) return "Yes";
    
    return "No";
}

int main(void)
{
    char s[100], t[100];
    int k;
    scanf("%s",s);
    scanf("%s",t);
    
    scanf("%d",&k);

    char* result = appendAndDelete(s, t, k);

    printf("%s\n",result);

    return 0;
}