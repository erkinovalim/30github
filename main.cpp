#include <iostream>
#include <iomanip>
#include <vector>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <queue>
#include <map>
#include <stack>
#include <algorithm>
#include <cmath>
#include <bitset>
#define ll long long

using namespace std;
typedef pair<int, int> pii;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n,k; cin>>n>>k;
    
    vector<int> nums(n);
    ll sum = 0;
    
    for (int i = 0; i < n; i++) {
        int input;
        cin>>input;
        if(input > 0)
            sum += input;
        
        nums[i] = abs(input);
    }
    
    sort(nums.begin(), nums.end());
    
    vector<int> possible;
    
    for (int mask = 0; mask < (1 << 4); mask++) {
        int tsum = 0;
        for (int i = 0; i < 4; i++) {
            bool apply = mask & (1 << i);
            
            if(apply)
                tsum += nums[i];
        }
        
        posmsible.push_back(tsum);
    }
    
    sort(possible.begin(),possible.end());
    
    cout<<sum - possible[k - 1];
}
