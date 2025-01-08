//didn't solve it till now 

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep2(i, n) for(ll i = 0; i < (n); i++)
#define rep3(i, a, b) for(ll i = a; i < (b); i++)
#define overload(a, b, c, d, ...) d
#define rep(...) overload(__VA_ARGS__, rep3, rep2)(__VA_ARGS__)
#define all(a) begin(a), end(a)
#define sz(a) ssize(a)
bool chmin(auto& a, auto b) { return a > b ? a = b, 1 : 0; }
bool chmax(auto& a, auto b) { return a < b ? a = b, 1 : 0; }

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    const int N = 4000;
    ll s = 0;
    rep(i, n) s ^= a[i];
    if (n == k) {
        cout << s << '\n';
        return;
    }

    if (n >= N) {
        ll ans = 0;
        if (k == 1) {
            ans = ranges::max(a);
        } else {
            rep(i, n) chmax(ans, s ^ a[i]);
        }  
        cout << ans << '\n';
        return;
    }

    vector<int> perm(n);
    fill(perm.begin(), perm.begin() + k, 1);
    sort(all(perm));
    ll ans = 0;
    do {
        ll cur = 0;
        rep(i, n) if (perm[i]) cur ^= a[i];
        chmax(ans, cur);
    } while (next_permutation(all(perm)));

    cout << ans << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}
