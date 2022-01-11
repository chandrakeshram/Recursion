/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
string ArrayKeypad[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keyPad(string s ,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    string code = ArrayKeypad[ch -'0'];
    string ros= s.substr(1);
    for(int i=0;i<code.length();i++){
        keyPad(ros, ans + code[i]);
    }


}
int main()
{
    keyPad("23","");

    return 0;
}
/*===========================OUTPUT=====================*/