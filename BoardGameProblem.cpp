/*********************CHANDRAKESH RAM***************************/
/*=======================PROBLEM STATEMENT==============*/
#include <bits/stdc++.h>
using namespace std;
int noOfPath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=noOfPath(s+i,e);
    }
    return count;
    
}
int main()
{
    cout<<noOfPath(0,3)<<endl;
    return 0;
}
/*===========================OUTPUT=====================*/