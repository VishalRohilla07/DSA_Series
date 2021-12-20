#include<bits/stdc++.h>
#include<iostream>

//define int long long
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int main()
{
  int n;
  cin >> n;

  vi a(n);

  rep(i,0,n)
    cin >> a[i];

  heapsort(a);



  return 0;
}