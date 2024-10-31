#include<bits/stdc++.h>
using namespace std;
int cnt[100123];

//void solve()
//{
//
//}

int main()
{
    int n,c=0;
    cin>>n;

    int a[n];

    for(int i=0 ; i<n ; i++)
    {
       cin>>a[i];
    }
    int ans = 0;

    for(int i=0 ; i<n ; i++)
    {
        if(a[i]==-1 && ans>=0)
        {
            ans += a[i];
            if(ans<0)
            {
                c++;
                ans=0;
            }
            
        }
        if(a[i]>0)
        {
            ans += a[i];
        }
    }
    cout<<c;
}

