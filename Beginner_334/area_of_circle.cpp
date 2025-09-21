#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pi = acos(-1);
    /*
    cospi=-1
    or,pi=cos^(-1)
    or,pi=acos(-1)
    */
    double radius;
    cin>>radius;
    double area = pi*radius*radius;
    cout<<fixed<<" "<<setprecision(4)<<"A="<<area<<"\n";
    return 0;
}