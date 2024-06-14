#include <bits/stdc++.h>
using namespace std;



void dec_bin(int n){
    int binary[20];
    int i = 0;
    while(n>0){
        binary[i++] = n%2;
        n = n/2;
    }
    for(int j=i-1; j>=0; j--){
        cout<<binary[j];

    }
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    dec_bin(n);
    return 0;
}