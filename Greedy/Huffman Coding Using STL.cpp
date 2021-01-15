#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
typedef vector< ll > vl;
typedef pair< ll , ll > pl;

class Element{
    public:
        string a;
        ll freq;
        ll pos;
        Element* left, *right;

        Element(){
            left=NULL;
            right=NULL;
        }

        Element(char a1,ll freq1, ll pos1){
            a=a1;
            freq=freq1;
            pos=pos1;
            left=NULL;
            right=NULL;
        }
};

class myComparator{
    public:
        bool operator() (Element *e1 , Element *e2){
            // if(e1->freq==e2->freq){              // Uncomment it if you want to sort them
            //     return e1->pos<e2->pos;          // on the basis of their position if freq are equal
            // }
            return e1->freq>e2->freq;
        }
}; 

void traverse(Element* node, string ans){

    if(node==NULL){
        return;
    }

    // cout<<node->freq<<'\n';

    if(node->left==NULL && node->right==NULL){
        cout<<ans<<" ";
        return;
    }

    traverse(node->left,ans+'0');
    traverse(node->right,ans+'1');
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        ll n = s.size();
        ll i,temp;

        Element* arr[n];

        for(i=0;i<n;i++){
            cin>>temp;
            arr[i] = new Element(s[i],temp,i);
        }

        priority_queue< Element* , vector< Element* >, myComparator > pq;

        for(i=0;i<n;i++){
            pq.push(arr[i]);
        }

        Element *first,*second;

        while(!pq.empty()){
            first=pq.top();
            pq.pop();

            if(pq.empty()){
                break;
            }

            second = pq.top();
            pq.pop();

            Element * temp = new Element;

            temp->a=first->a+second->a;
            temp->freq=first->freq+second->freq;
            temp->pos=first->pos;
            temp->left=first;
            temp->right=second;

            pq.push(temp);
        }

        string ans;

        traverse(first,ans);

        cout<<'\n';

    }
    
    return 0;
}
