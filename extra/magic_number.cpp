#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int magic_number(int n)
{
    if (n<10)
    {
        return n;
    }
    int rem=0;
    int sum=0;
    while (n>0)
    {
        rem=n%10;
        n=n/10;
        sum=rem+sum;
    }
    return magic_number(sum);
}
int main()
{
    int n;
    cin>>n;
    if(magic_number(n)==1)
    {
        cout<<1;
    }
    else
    {
        cout<<-1;
    }
}