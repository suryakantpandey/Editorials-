// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,mmx,avx,avx2")
#include "bits/stdc++.h"

#define     ll                long long
#define     ul                unsigned long long
#define     ld                long double
#define     rep(i, a, b)      for(int i=(a); i<(b); i++)
#define     repi(i, a, b)     for(int i=(a); i>(b); i--)
#define     all(x)            x.begin(), x.end()
#define     rall(x)           x.rbegin(), x.rend()
#define     db(x)             (cout<<#x<<":"<<(x)<<'\n')
#define     fastio            ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define     gcd               _gcd
#define     lcm(a,b)          __detail::__lcm(a,b)
#define     goog(tno)         cout << "Case #" << tno <<": "
#define     pb                push_back
#define     endl              "\n"
#define     iceil(n, x)       (((n) + (x) - 1) / (x))

const ll mod = 1000000007;
const ld pi = 3.1415926535897932384626433832795;
const ll INF = 1e18;

using namespace std;

void solve()
{
	ll a, b, n;
	cin >> a >> b >> n;
	ll at[n], h[n];
	rep(i, 0, n)
	{
		cin >> at[i];
	}
	vector<pair<ll, ll>> v;
	rep(i, 0, n)
	{
		cin >> h[i];
		v.push_back(make_pair(at[i], h[i]));
	}
	sort(all(v));
	bool flag = 0;
	ll ind = 0;
	rep(i, 0, n)
	{
		if (b  <= 0)
		{
			flag = 1;
			break;
		}
		ll mon = iceil(b, v[i].first);
		ll her = iceil(v[i].second , a);
		ll cmp = min(her, mon);

		if (cmp == her)
		{	b -= v[i].first * her;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	if (flag )
	{
		cout << "NO\n";
	}
	else
		cout << "YES\n";
}

int main() {
	fastio;
	int tz = 1;
	cin >> tz;
	while (tz--)
	{
		solve();
	}
	return 0;
}
