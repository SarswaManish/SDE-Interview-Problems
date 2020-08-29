

https://practice.geeksforgeeks.org/problems/cutted-segments/0

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
#define vll vector<ll>
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

using namespace std;
int32_t main()
{
	std::ios::sync_with_stdio(false);



	int T;
	cin >> T;
	// cin.ignore(); must be there when using getline(cin, s)
	while (T--)
	{
		int n;
		cin >> n;
		int a[3];
		for (int i = 0; i < 3; i++)
			cin >> a[i];

		//top down

		//sort(a, a + 3);

		int dp[n + 1];
	    for(int i=0;i<=n;i++)
	    dp[i]=-1;
		dp[0]=0;
		for (int i = 1; i <= n; i++)
		{
			if (i - a[0] >= 0 && dp[i-a[0]]!=-1)
				dp[i] = max(dp[i], dp[i - a[0]] + 1) ;
			if (i - a[1] >= 0 && dp[i-a[1]]!=-1)
			{
				dp[i] = max(dp[i], dp[i - a[1]] + 1);
			}
			if (i - a[2] >= 0 && dp[i-a[2]]!=-1)
			{
				dp[i] = max(dp[i], dp[i - a[2]] + 1);
			}

		}
		cout << dp[n] << endl;

	}
	return 0;
}
