#include <bits/stdc++.h>
typedef long long int ll;
#define in(v,n) for(int i = 0 ; i < n ; i++) cin >> v[i];
#define f(a,b) for(int i = a ; i < b ; i++)
#define frev(a,b) for(int i = a ; i >= b ; i--)
#define mod 1000000007
using namespace std;
#define pb push_back
#define debugVector(v) for(int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << endl;
#define debugArray(arr, n) for(int i=0; i<n; i++) cout << "i : " << i << " arr : " << arr[i] << "\n"; cout << endl;
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
typedef vector<int> vi;
typedef pair<int, int> pi;
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<'\n'
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'
// #define nl cout <<"\n"
//A....Z 65....90
//a....z 97....122

int miniumum(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return a;
		else
			return c;
	}
	else //b < a
	{
		if (b < c)
			return b;
		else
			return c;
	}
}

int main()
{
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int t_drink = k * l;
	int t_limes = c * d;
	int t_salt = p / np;
	// o3(t_drink, t_limes, t_salt);
	int n1, n2, n3;
	n1 = t_drink / nl;
	n2 = t_limes;
	n3 = t_salt;
	// o3(n1, n2, n3);
	int output = miniumum(n1, n2, n3) / n;
	o1(output);

}

