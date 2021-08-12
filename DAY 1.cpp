//check Bank Balance
#include <iostream>

using namespace std;

class Human
{
  private:
  int bankBalance;

  public:
  Human()
  {
    bankBalance = 1000;
  }
  Human(int num)
  {
    bankBalance = num;
  }

  string name;

  void setBankBalance(int num)
  {
    bankBalance = num;
  }

  int getBankBalance()
  {
    return bankBalance;
  }
};

int main()
{
  Human human1;
  cout<<human1.getBankBalance();
  human1.name = "Gaurav";
  human1.setBankBalance(54000);

  cout<<human1.name<<endl;
  cout<<human1.getBankBalance();

  Human human2(20000);
  cout<<human2.getBankBalance();
}

//Leap Year
#include<iostrem>
using namespace std;
int main()
{
  int a;
  cin>>a;
  if(a%4==0 && (a%100!=0||a%400==0 ))
  {
    cout<<"its a leap year"<<endl;
  }
  else
  {
    cout<<"Its not a leap year"<<endl;
  }


//Pascal Triangle

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int pascal=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(i==0 || j==0){
                pascal=1;
            }
            else{
                pascal=pascal *(i-j+1)/j;
            }
            cout<<pascal<<" ";
        }
        cout<<endl;
    }
}

//RECURSION
#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        cout<<n<<" ";
    }
}
int main()
    int n;
{
    cin>>n;
    fun(n);
}

//NESTED RECURSION
#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0){
        cout<<n<<" ";
        fun(fun(n-1));
    }
    return n;
}
int main()
{
 fun(3);
}

//FACTORIAL
#include<iostream>
using namespace std;
int factorial(int n)
{
   if(n==1 || n==0)
   {
       return 1;
   }
   else {
       return n*factorial(n-1);
   }
}
int main()
{
    
    cout<<factorial(5);
}
