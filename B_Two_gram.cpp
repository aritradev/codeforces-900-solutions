#include <bits/stdc++.h>
using namespace std;

#define cobra_69xp

using ll = long long int;
using ull = unsigned long long int;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define in insert
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define sp " "
#define endl "\n"
#define nl cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define debug(x) cout << "Debug of " << #x << ": " << x << endl;

const int mod = 1e9 + 7;

bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }
ll sum(ll n) { return ((n * (n + 1)) / 2); }
ll ceil(ll a, ll b) { return ((a + (b - 1)) / b); }

void InputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/Programming File/input.txt", "r", stdin);
    freopen("E:/Programming File/output.txt", "w", stdout);
#endif
}

void solve()
{
    int n;cin>>n;string s;
    int x=0;
    
    string ans;
    cin>>s;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j =0;j<n-1;j++){
            if(s[i]==s[j] && s[i+1]==s[j+1])
            count++;
        }
        if(x<count){
            x=count;
            ans = string(1,s[i]) + string(1, s[i + 1]);

        }
        
    }
    cout<<ans<<endl;

    
}

int main()
{

    ll tc = 1;
   // cin >> tc;
    while(tc--)
    {

        solve();
    }

    return 0;
}