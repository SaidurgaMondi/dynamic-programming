//nth fibanoci of  a number
#include<iostream>

#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int fibanoci(int n)
{
    if(n<=1)                                   //base call
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=fibanoci(n-1)+fibanoci(n-2);    //recursive call
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)        //dynamic array for storing  the fibonaci series
    {
        dp[i]=-1;              //initially all the elements in the array are -1
    }
    cout<<fibanoci(n-1)<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
    }
}  

