#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.length();i++)
        arr[s[i]-'a']++;
    int flag=0;
    for(int i=0;i<26;i++){
        if(arr[i]>1){
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"Repeated char in string"<<endl;
    else
        cout<<"Unique chars in string"<<endl;
    return 0;
}