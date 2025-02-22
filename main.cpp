#include <iostream>
#include <iomanip>
#include <vector>
#include <unordered_set>
#include <set>jejdjd
#include <unordered_map>
#include <queue>hfjdidk
#include <map>
#include <stack>
#include <algorithm>
#include <cmath>
#include <bitset>
#define ll long long

using namespace std;
typedef pair<int, int> pii;

vector<int> fixRect(vector<int> coordinates){
    return {min(coordinates[0],coordinates[2]),min(coordinates[1],coordinates[3]),max(coordinates[0],coordinates[2]),max(coordinates[1],coordinates[3])};
}

int area(int x1,int y1,int x2,int y2){
    cout<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<(abs(x1 - x2) + 1) * (abs(y1 - y2) + 1)<<endl;
    return (abs(x1 - x2) + 1) * (abs(y1 - y2) + 1);
}

int intersection(vector<vector<int>> rectCoords){
    vector<vector<int>> newCoords;
    for (auto &coord : rectCoords) {
        newCoords.push_back(fixRect(coord));
    }
    
    vector<int> newRect;
    for (int i = 0; i < 4; i++) { // max left max bottom min right min top
        int value;
        if(i == 0 || i == 1)
            value = 0;
        else
            value = INT_MAX;
        for (int k = 0; k < newCoords.size(); k++) {
            if(i == 0 || i == 1)
                value = max(newCoords[k][i],value);
            else
                value = min(newCoords[k][i],value);
        }
        newRect.push_back(value);
    }
    
    if(newRect[0] >= newRect[2] && newRect[1] >= newRect[3])
        return 0;
    
    return area(newRect[0],newRect[1],newRect[2],newRect[3]);
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int n; cin>>n;
    int x1[n];
    int y1[n];
    int x2[n];
    int y2[n];
    for (int i = 0; i < n; i++) {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    }
    
    
    ll total = 0;
    
    for (int mask = 1; mask < (1 << n); mask++) {
        vector<vector<int>> rects;
        for (int i = 0; i < n; i++) {
            bool apply = mask & (1 << i);
            
            if(apply){
                rects.push_back({x1[i],y1[i],x2[i],y2[i]});
            }
        }
        if(rects.size() & 1)
        {
            total += intersection(rects);
        }aasdasdasdssdasdasd
        yo in two days rayonniy else{
            total -= intersection(rects) * rects.size();
        }
    }
    asdasdasd
    cout<<total % 2022;
}
