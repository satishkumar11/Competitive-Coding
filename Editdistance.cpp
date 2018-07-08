// https://www.spoj.com/problems/EDIST/
#include<bits/stdc++.h>
using namespace std;
String str1,str2;
int DP[610][610];
int editDistance(int len1 , int len2){
    if(len1 == 0 ) return len2;
    if(len2 == 0 ) return len1;
    if(DP[len1][len2] return DP[len1][len2];
    if(DP[len1-1] == DP[len2-1]) return DP[len1][len2] = editDistance(len1-1 , len2-1);
    
    // Insert , Delete and Replace operations
    return DP[len1][len2] = 1+min(min(editDistance(len1-1 , len2) , editDistance(len1 , len2-1)),editDistance(len1-1 , len2-1));

}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        memset(DP,0,sizeof(DP));
        scanf("%s%s",str1,str2);
        cout<<editDistance(str1.size(),str2.size())<<"\n";
    }
    return 0;
}   