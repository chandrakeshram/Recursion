/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
string removeAllDuplicate(string s){
    if(s.length()==0){
        return "";
    }
    char x=s[0];
    string ans;
    ans = removeAllDuplicate(s.substr(1));
    if(x==ans[0]){
        return ans;
    }
    else {
        return x + ans ;
    }
}
int main()
{
    cout<<removeAllDuplicate("aaaabbbcccddddeeefff")<<endl;

    return 0;
}
/*===========================OUTPUT=====================*/