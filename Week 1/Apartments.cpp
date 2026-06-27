#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, k; cin >> n >> m >> k;
    vector<ll> dessize;
    vector<ll> aptsize;
    for (ll i = 0; i < n; i++) {ll ds; cin >> ds; dessize.push_back(ds);}
    for (ll i = 0; i < m; i++) {ll as; cin >> as; aptsize.push_back(as);}
    
    sort(dessize.begin(),dessize.end());
    sort(aptsize.begin(),aptsize.end());

    ll wstart = 0; ll wend = 0;
    ll lastadded = -1; ll ans = 0;
    for (auto apt : aptsize) {
        
        if (wstart != n) {while(dessize[wstart] < (apt - k) && wstart < n) {wstart++;}}
        if (wend != n) {while(dessize[wend] <= (apt + k) && wend < n) {wend++;}}

        if (lastadded < wend && wstart != wend) {
            if (lastadded < wstart) {lastadded = wstart; ans++;}
            else if (lastadded+1 < wend) {lastadded++; ans++;}
        }

        // cout << wstart << " " << wend << " " << lastadded << " " << ans << "\n";

    }

    cout << ans;

    return 0;
}