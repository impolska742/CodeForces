#include <bits/stdc++.h>
typedef long long int ll;
#define in(v,n) for(int i = 0 ; i < n ; i++) cin >> v[i];
#define f(a,b) for(int i = a ; i < b ; i++)
#define frev(a,b) for(int i = a ; i >= b ;)
#define mod 1000000007
using namespace std;
#define pb push_back
#define debugVector(v) for(int i = 0; i < v.size(); i++) cout << v[i] << " "; cout << endl;
#define debugArray(arr, n) for(int i=0; i<n; i++) cout << arr[i] << " "; cout << endl;
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define o1(x) cout<<x<<'\n'
#define o2(x,y) cout<<x<<" "<<y<<'\n'
#define o3(x,y,z) cout<<x<<" "<<y<<" "<<z<<'\n'


int main()
{
	#ifndef ONLINE_JUDGE
  		freopen("input.txt", "r", stdin);
  		freopen("output.txt", "w", stdout);
  	#endif
	
  	ll num;
  	cin >> num;

  	ll temp = num;

  	int count = 0;
  	bool flag = true; //flag for breaking out of the loop if number is having any other digit than 4,7
  	int n; // for checking each digit in the loop (4,7)
  	while(temp != 0)
  	{
  		n = temp%10;
  		if(n == 4 || n == 7)
  			count++;
  		else
  		{
  			flag = false;
  		}
  		temp /= 10;
  	}
  	if(count == 4 || count == 7)
  		cout << "YES\n";
  	else
  		cout << "NO\n";
}