https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0


#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define int long long
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



int32_t main() {
	std::ios::sync_with_stdio(false);
	// cin.ignore(); must be there when using getline(cin, s)
#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif


	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;

		int a[n];
		int f = 0;
		int max_d = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] > 0)
			{
				f = 1;
			}
			else
			{
				max_d = max(max_d, a[i]);
			}
		}

		if (!f)
		{
			cout << max_d << endl;
			continue;
		}
		int max_so_far = INT_MIN;
		int sum = 0;

		for (int i = 0; i < n; i++)
		{
			sum += a[i];
			if (sum < 0)
				sum = 0;
			max_so_far = max(max_so_far, sum);
		}
		cout << max_so_far << endl;
	}
	return 0;
}
