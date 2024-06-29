#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define mx 3000010
#define endl "\n"
//pair<ll,ll>a[5001],b[5001];
ll b[mx];
ll a[mx];

void solve()
{
    ll a[26][26]= {' '};
    char b[26][26]= {' '};
    ll n;
    cin>>n;
    char T;
    cin>>T;

    ll j=0;
    for(char i='a'; j<n; i++,j++)b[0][j]=i;
    j=0;
    for(char i=b[0][n-1]; j<n; i--,j++)b[n-1][j]=i;
    j=0;
    for(char i='a'; j<n; i++,j++)b[j][0]=i;
    j=0;
    for(char i=b[0][n-1]; j<n; i--,j++)b[j][n-1]=i;
    if(T=='a')
    {
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
                cout<<b[i][j];
            cout<<endl;
        }
    }
    else
    {
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n; j++)
               {
                   ll l=b[i][j]-'a'+1;
                   if(l!=-96)cout<<l;
                   else cout<<b[i][j];
               }
            cout<<endl;
        }
    }
    cout<<endl;
}
/*Read the damn question carefully,show base case*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //prime();
    //cin>>t;
    while(t--)
        solve();
    return 0;
}

