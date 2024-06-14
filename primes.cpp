#include<bits\stdc++.h>
#include<cmath>
using namespace std;

int isprime(int n){
    int s = sqrt(n);
    if(n == 2){
        return 1;
    }
    for(int j = 2; j<=s; j++){
        if (n % j == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a, b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    } 

}