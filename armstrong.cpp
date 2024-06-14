#include <iostream>
#include <cmath>
using namespace std;

void armstrong(int n)
{
    int sum = 0, originaln = n;
    while (n > 0)
    {
        int y = n % 10;
        sum = sum + y*y*y;
        n = n / 10;
        
    }
    
    if (sum == originaln)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    armstrong(n);
    return 0;
}