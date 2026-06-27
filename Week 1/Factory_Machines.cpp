#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll prod(ll time, vector<ll>& times, ll& n) {
    ll p = 0;
    for (ll i = 0; i < n; i++) {p += (time/times[i]); if(p<0) return INT64_MAX;}
    return p;
}

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, t; cin >> n >> t;
    vector<ll> times;
    for (ll i = 0; i < n; i++) {ll time; cin >> time; times.push_back(time);}

    sort(times.begin(),times.end());
    ll tmax = t*times[n-1];

    ll ind = 0;
    for (ll b = tmax/2; b >= 1; b /= 2) {
        while (ind+b <= tmax && prod(ind+b, times, n) < t) {ind += b;}
    }

    cout << (1+ind);

    return 0;
}