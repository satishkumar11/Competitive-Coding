//https://www.spoj.com/problems/SUMITR/
#include<bits/stdc++.h>
using namespace std;
int n,tri[101][101];
/*
Start from the second last row, last element.
Add to it the maximum of the element below it and towards its right.
Repeat the above steps, for each element, from right to left manner.
Repeat the above steps for each row, till we reach the topmost  row,
We have our answer in the 1st element of the 2-D array.
*/
int maxDist(){
    for(int i=n-2 ; i>=0 ; i--){
        for(int j=0 ; j<=i ; j++){
            if(tri[i+1][j]>tri[i+1][j+1])
                tri[i][j]+=tri[i+1][j];
            else
                tri[i][j]+=tri[i+1][j+1];
        }
    }
    return tri[0][0];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                cin>>tri[i][j];
            }
        }
        cout<<maxDist()<<"\n";
    }
    return 0;
}