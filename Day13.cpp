//Finding the word in a sentence using STL
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str="hello world show me the text and also print these words text text text";
    string akhil="text";
    //cout<<string::npos;
    size_t index=str.find(akhil);
    cout<<index;
    cout<<endl;

    index=str.find(akhil,index+1);
    cout<<index;
    cout<<endl;

    index=str.find(akhil,index+1);
    cout<<index;
    cout<<endl;

    index=str.find(akhil,index+1);
    cout<<index;
    cout<<endl;

    index=str.find(akhil,index+1);
    cout<<index;
    cout<<endl;
     return 0;
}
//Placing words in length wise and Dictionary order
#include<iostream>
#include<algorithm>
using namespace std;
bool stringcompare(string  s1,string  s2)
{
    if(s1.length()!=s2.length())
    {
        return s1.length()>s2.length();
    }
    else
    {
        return s1<s2;
    }

}
int main()
{
    string str[]={"Grandfather","Grandmother","Father","Mother","Boy","Girl"};
    int n=sizeof(str)/sizeof(str[0]);
    sort (str,str+n,stringcompare);
    for(auto a:str)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}

