#include <bits/stdc++.h>
using namespace std;

#define cobra_69xp
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

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

int main()
{
    optimize();

    ll tc = 1;
    cin >> tc;
    while (tc--)
    {

        ll a, b, c, sum, ans, B = 0, C = 0;
        ll flag=1;
        cin >> a >> b >> c;
        if (b % 3 == 0)
            B = b / 3;
        else
        {
            int x = 3 - (b % 3);
            b += x;
            c -= x;
            B = b / 3;
            if (c < 0){
                cout << "-1\n";
                flag=0;
                
        }
        }
        if (c % 3 == 0)
            C = c / 3;
        else if(c>0)
            C = (c / 3) + 1;
        // cout<<B<<endl<<C<<endl;
        ans = a + B + C;
        if(flag==1)
        cout << ans << endl;
    }

    return 0;
}