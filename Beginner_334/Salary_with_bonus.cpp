#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    double salary, sales;
    double final,comission;
    cin >> name >> salary >> sales;
    // Calculate the commission (15% of total sales)
    comission = 0.15*sales;
    // Calculate the final salary
    final = salary + comission;
    cout<<fixed<<setprecision(2)<< "TOTAL = R$ " << final <<endl;
    return 0;
}