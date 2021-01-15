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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;

        ll a[n],i,j,m;
        
        for(i=0;i<n;i++){
            cin>>a[i];
        }


        sort(a,a+n);

        ll ans=LONG_MAX;

        for(j=0;j<n;j++){
            ll init=a[j];
            i=j;
            while(i<n && a[i]-init<=k){
                i++;
            }
            
            ll temp=0;

            for(m=j-1;m>=0;m--){
                temp+=a[m];
            }

            for(m=i;m<n;m++){
                temp+=(a[m]-init)-k;
            }

            // cout<<temp<<endl;

            ans=min(ans,temp);

        }

        cout<<ans<<"\n";
    }




    return 0;
}
