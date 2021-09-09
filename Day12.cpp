//Permutation
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    do
    {
        for(auto a:arr)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }while(next_permutation(arr,arr+n));
    return 0;
}
//Reversing of an Arry
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={3,6,5};
    sort(arr,arr+3);
    reverse(arr,arr+3);
    for(auto a:arr)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
//Sorting in Ascending order using Strings
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str[]={"Grandfather","Grandmother","Father","Mother","Boy","Girl"};
    int n=sizeof(str)/sizeof(str[0]);
    for(auto a:str)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    sort(str,str+n);
    for(auto a:str)
    {
        cout<<a<<" ";
    }
    cout<<endl;
}
