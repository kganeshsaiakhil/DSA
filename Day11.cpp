//Min number of currency 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int money[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(money)/sizeof(money[0]);
    cout<<"enter the amount";
    int amount;
    cin>>amount;
    auto ub=(money,money+n,amount);
    int index=ub-money;
    amount=amount-money[index-1];
    cout<<money[index-1]<<",";
    return 0;
}

