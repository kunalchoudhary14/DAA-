#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
     long long n;

     cin>>n;
     
      int jump = 2;
      
      bool ans =true;
      while(jump<=n)
      {
          if(jump == n)
          {
              ans = false;
              break;
          }

          int del  = n/jump;
          n-=del;
          jump++;
      }

      if(ans)
      cout<<1<<endl;

      else
      cout<<-1<<endl;

  return 0;
}