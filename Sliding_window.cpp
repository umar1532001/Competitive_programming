#include<bits/stdc++.h>
#define fo(i, n) for(int i=0;i<n;i++)
#define Fo(i, k, n) for(int i=k; i<n;i++)
#define ll long long int
#define ALL(c) (c).begin(),(c).end() //handy for function like "sort()"
#define mod 1000000007
#define ff first 
#define ss second 
#define _ <<" "<<
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define MOD 1073741824
#define pb push_back
#define pf push_front
#define mp make_pair

const int N=1e5;
using namespace std;

//typedef long long ll;
typedef long double ld;
typedef vector <ll> vi;
typedef vector<vi> vvi;
typedef pair <ll, ll> ii;
typedef pair<ll, pair<ll,ll> > iii;
typedef vector<ii> vii;


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n,k;
    cin>>n>>k;
    vi arr(n);
    fo(i,n)
    {
      cin>>arr[i];
    }
    ll sum=0;
    ll ans=INT_MAX;
    for (int i = 0; i < k; ++i)
    {
      sum=sum+arr[i];
    }
    // deb(sum);
    ans=min(ans,sum);
    for (int i = 1; i < n-k+1; ++i)
    {
      sum=sum-arr[i-1]+arr[i+k-1];
      ans=min(ans,sum);
      //deb(sum);
    }
    deb(ans);
    return 0;
}
