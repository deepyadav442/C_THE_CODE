#include <bits/stdc++.h>
using namespace std;
string reverse(string s)
{
  int i,j;
  for(i=0,j=s.length()-1;i<j;i++,j--)
  {
    char temp = s[i];
    s[i]=s[j];
    s[j]=temp;
  }
  return s;
}
int main() {
  string s;
  cin>>s;
  cout<<reverse(s)<<endl;
  return 0;
}
