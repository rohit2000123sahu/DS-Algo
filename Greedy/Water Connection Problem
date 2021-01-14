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
        ll n,p;
        cin>>n>>p;

        ll i;

        ll front[n+1]={0};
        ll back[n+1]={0};

        ll dia[n+1]={0};

        ll a,b,d;

        for(i=0;i<p;i++){
            cin>>a>>b>>d;
            front[a]=b;         //a->b
            back[b]=a;          //a->b
            dia[a]=d;
        }

        vector< tuple<ll,ll,ll > > vect;

        bool visited[n+1];
        memset(visited,false,sizeof(visited));

        for(i=1;i<=n;i++){
            if(visited[i]==false){
                visited[i]=true;
                d=INT_MAX;
                a=i;
                while(back[a]!=0){
                    a=back[a];
                    visited[a]=true;
                    d=min(d,dia[a]);
                }
                
                b=i;

                while(front[b]!=0){
                    d=min(d,dia[b]);
                    b=front[b];
                    visited[b]=true;
                }

                vect.push_back(make_tuple(a,b,d));


            }
        }

        cout<<vect.size()<<endl;

        for(auto c: vect){
            cout<<get<0>(c)<<" "<<get<1>(c)<<" "<<get<2>(c)<<endl;
        }

    }




    return 0;
}
