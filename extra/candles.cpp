#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int n;
        int a;
        int b;
        cin>>n>>a>>b;
        int x=2*n*b/(2*(a+b));
        int y=n-x;
        cout<<a*x*x+b*y*y<<endl;
    }
    return 0;
}