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

bool allSame(vector<int> v, int n)
{
	f(0, n - 1) {
		if (v[i] != v[i + 1])
			return false;
	}
	return true;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	int n = s.length();

	string output = "";
	f(0, n)
	{
		if (s[i] == '.') {
			output += "0";
		}
		if (s[i] == '-')
		{
			if (s[i + 1] == '.') {
				output += "1"; i++;
			}
			else if (s[i + 1] == '-') {
				output += "2"; i++;
			}
		}
	}
	o1(output);
}

