#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
 cin>>t;
 string s;
 cin>>s;
 while(t--){
  char a;
  string ans="";
  for(int j=0;j<10;j++){
   ans+="0";
  }
  for(int i=1;i<=10;i++){
   cout<<i<<endl;
   cout.flush();
   cin>>a;
   ans[i-1]=a;
  }
  cout<<ans<<endl;
  cout.flush();
  char ch;
  cin>>ch;
  if(ch=='Y')continue;
  else return 0;
 }
 return 0;
}