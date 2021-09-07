//Linear Search Using STL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    auto address =find(arr,arr+n,key);
    int index = address-arr;

    if(index==n)
    {
        cout<<"not present"<<endl;
    }
    else
    {
        cout<<"present"<<endl;
    }

    return 0;
}
//Binary Search Using STL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    bool address=binary_search(arr,arr+n,key);
    cout<<address;
    return 0;
}
