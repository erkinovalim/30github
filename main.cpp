#include <iostream>
#include <cmath>
#define ll long long int

using namespace std;

int main(){
    ll n; cin>>n;
    ll mx = 1;
    if(n % 2 == 1)
        mx = n;
    else{
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if((n / i) % 2 == 1)
        {
            mx = n / i;
            break;
        }
    }}
    
    cout<< n * n + mx;

    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    // 1 1 3 1 5 3 7 1 9  5 11  3 13  7 15

    // this works...
    // now i need to find the fastest way to find the largest odd divisor. 
}