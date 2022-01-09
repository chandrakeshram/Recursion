/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
//Base case is very important that helps to prevent stack overflow
//TRUST the function -> Recursive Leap Of Faith
// void say_hello(int n){
//     if(n==0){
//         return ;
//     }
    
//     say_hello(n-1);
//     cout<<"Hello "<<n<<endl;
// }
int sumofNo(int n){
    if(n==0){
        return 0;
    }
    int left_part = sumofNo(n-1);
    return left_part+n;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact = factorial(n-1);
    return fact*n;
}
int  sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    int lastdigit=n%10;
    int remaining_part=n/10; 
    cout<<remaining_part<<" "<<lastdigit<<endl;
    return sumOfDigits(remaining_part) + lastdigit;
}
void pattern_print(int n){
    if(n==0){
        return ;
    }
    pattern_print(n-1);
    for(int i=1;i<=n;i++){
        cout<<i<<" ";

    }
    cout<<endl;
}
void pattern_print1(int n){
    if(n==0){
        return ;
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";

    }
    cout<<endl;
    pattern_print1(n-1);
    
}
void pattern_print2(int n){
    if(n==1){
        cout<<1<<endl;
        return ;
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    pattern_print2(n-1);
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main()
{
    // say_hello(5);
    cout<<sumofNo(10)<<endl;
    cout<<factorial(7)<<endl;
    cout<<sumOfDigits(32636)<<endl;
    pattern_print(5);
    pattern_print1(5);
    pattern_print2(5);
    return 0;
}
/*===========================OUTPUT=====================
1+2+3+4+5......n-1+ n*/