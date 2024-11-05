#include <bits/stdc++.h> 
using namespace std; 

typedef long long ll; 
typedef long double ld; 
typedef pair<int,int> p32; 
typedef pair<ll,ll> p64; 
typedef pair<double,double> pdd; 
typedef vector<ll> v64; 
typedef vector<int> v32; 
typedef vector<vector<int> > vv32; 
typedef vector<vector<ll> > vv64; 
typedef vector<vector<p64> > vvp64; 
typedef vector<p64> vp64; 
typedef vector<p32> vp32; 
ll MOD = 998244353; 
double eps = 1e-12; 

#define fori(i,e) for(ll i = 0; i < e; i++) 
#define fora(i,s,e) for(ll i = s; i < e; i++) 
#define rfori(i,s) for(ll i = s; i >= 0; i--) 
#define rfora(i,s,e) for(ll i = s; i >= e; i--) 
#define ln "\n" 
#define p0(x) cout << x << ln 
#define p1(x) cout << x << " " 
#define mp make_pair 
#define pb push_back 
#define F first 
#define S second 
#define INF 2e18 
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
#define all(x) (x).begin(), (x).end() 
#define sz(x) ((ll)(x).size()) 


#ifndef ONLINE_JUDGE
    #include "../template.cpp"
#else
#define debug(...)
	#define debugArr(...)
#endif


void solve(){ 
    
	cout << "hello \n";


} 

int main() { 
	fast_cin();
	#ifndef ONLINE_JUDGE 
    	freopen("../input.txt", "r", stdin); 
    	freopen("../output.txt", "w", stdout); 
    	freopen("../error.txt", "w", stderr); 
	#endif
	ll t; t = 1;
	cin >> t; 
	for(int it=1;it<=t;it++) { 
		solve();
	} 
	return 0; 
}

