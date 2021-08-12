//SUM OF N  TERMS
#include<iostream>
using namespace std;
int sumofnatural (int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int num;
    cin>>num;
    cout<<"sum of 1 to "<<num <<"is"<<sumofnatural(num)<<endl;
}

//POWER SUM
#include <iostream>
using namespace std;

int power(int m, int n)
{
    if(n > 0)
    {
        return m * power(m, n-1);
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        exit(-1);
    }
}
int main()
{
    int m, n;
    cin>>m>>n;

    cout<<m<<" ^ "<<n<<" = "<<power(m, n);

    return 0;
}



//FIBONACCI SERIES (1st METHOD)
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    return 0;
}

// FIBONACCI SERIES (2nd METHOD)
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number fiboncii series";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cout<<a;
        c=a+b;
        a=b;
        b=c;
    }
}

//BINOMIAL EXPANSION
#include <iostream>
using namespace std;
int nCr(int n, int r)
{
    int result;
    if(r == 0)
    {
        result = 1;
    }
    else if(n == r)
    {
        result = 1;
    }
    else
    {
        result = nCr(n-1, r-1) + nCr(n-1, r);
    }
    return result;
}
int main()
{
    int n, r;
    cin>>n>>r;
    cout<<nCr(n, r);
    return 0;
}

//TAYLOR SERIES
#include<iostream>
using namespace std;
double taylor(int x,int n)
{
   static double num=1;
   static double den=1;
   static double term;
    if(n==0)
    {
        return 1;
    }
    else{
        term=taylor(x,n-1);
        num=num*x;
        den=den*n;
        return (term + num/den);
    }
        return 0;
}
double taylorLoop(int x,int n)//taylor series using loop
{
    double tylor =1;
    double num=1;
    double den=1;

    for(int i=1;i<=n;i++){
        num*=x;
        den*=i;
        tylor +=(num/den);
    }
    return tylor;
}
double homer(double x,double n)//taylor series using homer formula
{
    static double temp=1;
    if(n==0){
        return temp;
    }
    else{
        temp=1+((x/n)*temp);
        return homer(x,n-1);
    }
}
int main()
{
    cout<<taylor(1,10)<<endl;
    cout<<taylorLoop(1,10)<<endl;
    cout<<homer(1,10)<<endl;
}
