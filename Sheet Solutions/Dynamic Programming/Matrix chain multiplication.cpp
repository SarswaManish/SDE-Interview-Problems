
https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication/0

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


int v[1005][1005];


int solve(int a[], int i, int j)
{
	if (i >= j)
		return 0;

	if (v[i][j] != -1)
		return v[i][j];
	int ans = INT_MAX;
	for (int k = i; k < j; k++)
	{
		int temp =  solve(a, i, k) + solve(a, k + 1, j)+ (a[i - 1] * a[k] * a[j]);
		ans=min(ans,temp);
	}
	return v[i][j] = ans;
}
int32_t main() {
	std::ios::sync_with_stdio(false);
	
	// cin.ignore(); must be there when using getline(cin, s)
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		
		memset(v,-1,sizeof(v));
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		cout << solve(a, 1, n - 1) << endl;
	}
	return 0;
}




