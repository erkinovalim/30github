#include <iostream>
#include <cmath>
#define ll long long int

using namespace std;

ll twice(ll x)
{
    ll nx = x;
    ll cp = x;

    while(x > 0)
    {
        x /= 10;
        nx *= 10;
    }

    return nx + cp;
}

int main(){
    ll a, b; cin>>a>>b;
    int bruh = 0;
    for (ll i = 1; i <= 10000000; i++)
    {
        ll ni = twice(i);
        if(ni >= a && ni <= b)
            bruh++;
    }
    
    cout<<bruh;
}