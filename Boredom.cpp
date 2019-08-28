//Sridip => { sensrdt  © RCCIIT }
#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ul ;
typedef long long ll ;

typedef pair < int , int >  pii ;
typedef pair < ll , ll>  pll ;
typedef pair < ll , pll > edge ;
typedef vector < int > vi ;
typedef vector < ll > vll ;
typedef vector < pll > vp ;

#define MOD 1000000007
#define vec vector
#define iu(x) ul x ; cin>>x ;
#define il(x) ll x ; cin>>x ;
#define pr(x) cout<<x ;
#define all(v) (v).begin() , (v).end()
#define sz(v)  (long int)(v).size()
#define lp(i , n ) for ( ll i = 0 ; i < n ; i++ )
#define lpp(i , n ) for ( ll i = n-1 ; i >= 0 ; i-- )
#define rep(i , a , b , n) for(int i = a; i < b ; i += n )
#define repp(i , a , b , n) for(ll i = b-1 ; i >= a ; i -= n )

#define f first
#define s second
#define pb push_back
#define mp make_pair

#define tc(t) ul t ; cin>>t ; while ( t-- )
#define ct(t) cout<<t<<endl
#define inarr(n) int n ; cin>>n ; vll v ( n , 0 ) ; lp ( i , n) cin>>v[i]
#define ouarr(n) lp ( i , n) cout<<v[i]<<" ";
#define fast ios::sync_with_stdio(false); cin.tie(0);

long long int a[100007], n;
long long int dp[100007];

int main() {
    memset(a, 0, sizeof(a));
    cin >> n;
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        a[j]++;
        cout<<"a[j] "<<a[j]<<" j "<<j<<endl;
    }
    dp[0] = 0;//1 2 1 3 2 2 2 2 3
    dp[1] = a[1]; // a[1]*1 = a[1]
    for (int i = 2; i <= n; i++) { // Finding optimal points until the ith number
        dp[i] = max(dp[i - 1], dp[i - 2] + i*a[i]);
    	cout<<"dp[i-1] "<<dp[i-1]<<" i-1 "<<i-1<<endl;
    	cout<<"dp[i-2] "<<dp[i-2]<<" i-1 "<<i-2<<endl;
    	cout<<"i*a[i] "<<i*a[i]<<" i "<<i<<" a[i] "<<a[i]<<endl;
    	cout<<"dp[i] "<<dp[i]<<" i "<<i<<endl;
    }
    cout << dp[n];
    return 0;
}

