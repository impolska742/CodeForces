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
#define nl cout <<"\n"
//A....Z 65....90
//a....z 97....122

int main()
{
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	string s;
	cin >> s;

	int ans = 0;
	f(0, n - 1)
	{
		if (s[i] == s[i + 1]) ans++;
	}

	cout << ans;
}

