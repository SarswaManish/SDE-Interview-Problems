https://practice.geeksforgeeks.org/problems/inversion-of-array/0


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

int cnt = 0;
vector<int>temp;
void merge_helper(int a[], int l, int r)
{



	int mid = l + (r - l) / 2;
	int x = l;
	int e = mid + 1;
	int i = l;
	while (l <= mid && e <= r)
	{
		if (a[l] > a[e])
		{
			cnt += mid - l + 1;
			temp[i++] = a[e++];

		}
		else
		{
			temp[i++] = a[l++];
		}
	}

	while (l <= mid)
	{
		temp[i++] = a[l++];
	}
	while (e <= r)
	{
		temp[i++] = a[e++];
	}

	for (int j = x ; j <= r; j++)
		a[j] = temp[j];

}

void merge(int a[], int l, int r)
{
	if (l >= r)
		return;
	int mid = (l) + (r - l) / 2;
	merge(a, l, mid);
	merge(a, mid + 1, r);

	merge_helper(a, l, r);
}

int32_t main() {
	std::ios::sync_with_stdio(false);


	int t;
	cin >> t;
	while (t--)
	{
		cnt = 0;
		int n;
		cin >> n;
		temp.resize(n);
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		merge(a, 0, n - 1);
		cout << cnt << endl;


	}

}
