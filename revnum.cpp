#include<bits/stdc++.h>
using namespace std;


void revnum(int n){
    
    int i=0, x = 0, y;
    while(n != 0){
        y = n%10;
        x = x*10+y;
        n = n/10;
    }
    cout<<x<<endl;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    revnum(n);
    return 0;

}
