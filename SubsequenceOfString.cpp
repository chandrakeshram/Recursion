/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
void subsequenceOfString(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch =s[0];
    string ros= s.substr(1);
    subsequenceOfString(ros, ans );
    subsequenceOfString(ros, ans+ch);
    
}
int main()
{
    subsequenceOfString("ABC"," ");
    return 0;
}
/*===========================OUTPUT=====================*/