/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
string removeAllXtoEnd(string s){
    if(s.length()==0){
        return "";
    }
    char ch= s[0];
    string ans = removeAllXtoEnd(s.substr(1));
    if(ch=='x'){
        return ans + ch;
    }
    else {
        return ch + ans;
    }
}
int main()
{
    cout<<removeAllXtoEnd("xalghjkhxxahxkf")<<endl;
    return 0;
}
/*===========================OUTPUT=====================*/