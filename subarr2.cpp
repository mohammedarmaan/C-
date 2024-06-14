// find continous subarray that adds to a given number

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int ans = -1;
    int ansi = -1;
    int ansj = -1;

    for(int i=0; i<n; i++){
        
        for (int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum = sum+a[k];
            }
            if(sum > ans){
                ans = sum;
                ansi = i;
                ansj = j;
            }
        }        
    }
    
    cout<<ans<<endl;
    cout<<"subarray:"<<endl;
    for(int i=ansi; i<=ansj; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}