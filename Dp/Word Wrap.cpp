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

void print(ll ans[], ll n){
    if(n==0){
        return;
    }
    print(ans,ans[n]-1);
    cout<<ans[n]<<" "<<n<<" ";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll word[n];
        ll i,j;

        for(i=0;i<n;i++){
            cin>>word[i];
        }

        ll line;
        cin>>line;

        ll dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        ll length=0;

        for(i=1;i<=n;i++){
            length=0;             
            for(j=i;j<=n;j++){
                length+=word[j-1];
                if(length>line){
                    dp[i][j]=INT_MAX;
                }else if(j==n && line-length>=0){
                    dp[i][j]=0;
                }else{
                    dp[i][j]=(line-length)*(line-length);
                }
                length++;           //For adding space;
            }
        }

        ll cost[n+1];
        ll ans[n+1];

        cost[0]=0;

        memset(cost,0,sizeof(cost));

        for(j=1;j<=n;j++){
            cost[j]=INT_MAX;
            for(i=1;i<=j;i++){          // Breaking at point i 
                if(cost[i-1]!=INT_MAX && dp[i][j]!=INT_MAX && (cost[i-1]+dp[i][j]<cost[j])){
                    cost[j]=cost[i-1]+dp[i][j];
                    ans[j]=i;           // Storing that point i;
                }
            }
        }

       print(ans,n);
        cout<<endl;
    }




    return 0;
}
