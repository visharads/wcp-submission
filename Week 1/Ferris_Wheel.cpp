#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {

    ll n, x; cin >> n >> x;
    vector<ll> weights;

    for(ll i = 0; i < n; i++) {ll weight; cin >> weight; weights.push_back(weight);}
    sort(weights.begin(), weights.end());

    ll right = n-1; ll pairs = 0;

    for (ll left = 0; left < right; left++) {
        while (weights[left] + weights[right] > x && right >= left) {right--;}
        if (right > left) {pairs++; right--;}
    }
            
    cout << (n - pairs);

    return 0;
}