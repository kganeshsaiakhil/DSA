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
    int arr[]={1,2,2,2,3,3,4,4,5,5,6,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    int index;
    bool address=binary_search(arr,arr+n,key);
    cout<<address;
    auto lb=lower_bound(arr,arr+n,key);
    index=lb-arr;
    cout<<"The lower bound index is"<<index<<endl;
    auto ub=upper_bound(arr,arr+n,key);
    index=ub-arr;
    cout<<"The upper bound index is"<<index<<endl;


}

