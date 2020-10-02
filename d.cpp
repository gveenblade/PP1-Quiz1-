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
    


    //1 01 & 1
    //2 01 & 1
    
    //2  001  
    //5  001 

    //4  0001
    //2  0001


    //4  0010 & 1 int x = 0 
    //5  0101 & 1 int y = 1


    // 0 & 1 = 0
    // 1 & 1 = 1
    return 0;
}
