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
#define MOD 1000000007
typedef vector< ll > vl;
typedef pair< ll , ll > pl;
typedef unordered_map< ll, ll > uml;

void computeLPS(string pattern, ll lps[]){
    lps[0]=0;
    ll i,prefixLen=0;
    ll n = pattern.size();
    
    i=1;
    while(i<n){
        if(pattern[i]==pattern[prefixLen]){
            prefixLen++;
            lps[i]=prefixLen;
            i++;
        }else{
            if(prefixLen!=0){
                prefixLen=lps[prefixLen-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){
        string text,pattern;
        cin>>text>>pattern;

        ll n=text.size();
        ll m=pattern.size();

        ll lps[m],i,j;

        computeLPS(pattern,lps);

        i=0;
        j=0;
        while(i<n){
            if(text[i]==pattern[j]){
                i++;
                j++;
                if(j==m){
                    cout<<i-j<<endl;
                    j=lps[j-1];
                }
            }else{
                if(j!=0){
                    j=lps[j-1];
                }else{
                    i++;
                }
            }
        }

    }

    return 0;
}
