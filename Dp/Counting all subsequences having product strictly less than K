#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(),x.end()
#define endl '\n'
typedef vector< ll > vl;
typedef pair< ll , ll > pl;
typedef unordered_map< ll, ll > uml;

ll solve(ll a[], ll k,ll n){
    ll dp[k+1][n+1];
    ll i,j;

    memset(dp,0,sizeof(dp));

    // Idea is similar to Knapsack Problem

    for(i=1;i<=k;i++){
        for(j=1;j<=n;j++){
            dp[i][j]=dp[i][j-1];

            if(i>a[j-1] && a[j-1]>0){               //If product is strictly smaller than k
                dp[i][j]+=dp[i/a[j-1]][j-1]+1;
            }
        }
    }


    return dp[k][n];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n ,k;
    cin>>n>>k;

    ll a[n],i;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    ll ans=solve(a,k,n);

    cout<<ans<<endl;



    return 0;
}
