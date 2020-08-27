https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence/0

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
#define fii fair<int,int>
#define fll fair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mf(x,y) make_fair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back

#define s second
#define fb fush_back

using namespace std;
const int N = 1000005;


int tracker[N] = {};


int dx[] = { -1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int far[N] = {};
vector<int>v1;


int32_t main() {
	std::ios::sync_with_stdio(false);
	// cin.ignore(); must be there when using getline(cin, s)


	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		int dp[n] = {};
		int res = 0;
		for (int i = 0; i < n; i++)
		{
			int ma = 0;
			for (int j = i - 1; j >= 0; j--)
			{
				if (a[i] > a[j])
				{
					//dp[i] = max(a[i], a[i] + dp[j]);
					ma = max(ma, dp[j]);
					
				}

			}
			dp[i] = ma + a[i];
			res = max(res, dp[i]);
		}
		cout << res << endl;


	}
}




