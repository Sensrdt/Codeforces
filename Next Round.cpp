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
#define rep(i , a , b , n) for(ll i = a; i < b ; i += n )
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

int main()
{
	fast
	int n, k; cin>>n>>k;
	int a[n];
	int flag = 0;
	for(int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++){
		if (a[i] == 0) flag = 1;
		else{
			if (k==i){
				if (a[i] <= a[k+1]){
					cout<<k+1<<endl;
				}else{
					cout<<k<<endl;
				}	
			}
			
		}
	}
	if (flag == 1) cout<<"0"<<endl;
	return 0;
}

