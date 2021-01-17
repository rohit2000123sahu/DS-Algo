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
        ll n;
        cin>>n;

        ll a[n],i;

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        ll sum[n];

        sum[0]=a[0];
        sum[1]=a[1]+a[0];

        for(i=2;i<n;i++){
            if(i==2){
                sum[i]=max(sum[i-1],sum[i-2]+a[i]);         // Exclude a[i] or a[i-1]
            }else{
                sum[i]=max(sum[i-1],max(sum[i-2]+a[i],sum[i-3]+a[i]+a[i-1]));           //Exclude a[i]  or a[i-1] or a[i-2]
            }
            
        }

        cout<<sum[n-1]<<endl;

    }

    return 0;
}
