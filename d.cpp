#include<iostream>
using namespace std;
int main()
{
    int a,n,b,k;
    cin>>a>>n>>b>>k;
    int x = ((a>>n) & 1);
    int y = ((b>>k) & 1);
    if(x==y) cout<<"Money was found";
    else cout<<"Where is the money Lebowski?";
    return 0;
}
