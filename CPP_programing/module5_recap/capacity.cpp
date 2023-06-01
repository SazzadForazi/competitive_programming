#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello world";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl; //10^6/10^7
    cout<<s.capacity()<<endl;



string s1="hello";
cout<<s1;
s1.clear();
cout<<s1<<endl;


if(s1.empty()==true)cout<<"EMPTY"<<endl;
else cout<<"Not empty"<<endl;


if(s1.size()==0)cout<<"EMPTY"<<endl;
else cout<<"Not empty"<<endl;



string re;
cin>>re;
cout<<re.size()<<endl;

re.resize(2);
cout<<re<<endl;
re.resize(4,'x');
cout<<re<<endl;










    return 0;
}


