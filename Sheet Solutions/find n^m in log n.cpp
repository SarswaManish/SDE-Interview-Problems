https://practice.geeksforgeeks.org/problems/power-of-numbers/0


#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define int long long int
#define vi vector<int>
#define vll vector<int>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define pb push_back

using namespace std;
const int N = 1000005;


int tracker[N] = {};


int dx[] = { -1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int par[N] = {};
vector<int>v1;

int power(int n, int m)
{
	if (m == 0)
		return 1;

	if (m == 1)
		return n;
	if (m % 2 == 0)
	{
		int calc = power(n, m / 2);
		return (calc * calc) % mod;
	}
	else
	{
		int calc = power(n, m / 2);

		return (((n * calc) % mod) * calc) % mod;
	}
}

int32_t main() {
	std::ios::sync_with_stdio(false);
	// cin.ignore(); must be there when using getline(cin, s)
// #ifndef ONLINE_JUDGE
// 	freopen("inputf.txt", "r", stdin);
// 	freopen("outputf.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int m = 0;
		int x = n;
		while (x > 0)
		{
			int rem = x % 10;
			m = m * 10 + rem;
			x /= 10;
		}

		cout << power(n, m) % mod << endl;
	}
}



