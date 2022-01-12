/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
int tilingProblem(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingProblem(n-1)+tilingProblem(n-2);
}
int main()
{
    cout<<tilingProblem(4)<<endl;
    return 0;
}
/*===========================OUTPUT=====================*/