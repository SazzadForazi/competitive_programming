#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    // int index=s.find("EGYPT");
    while(s.find("EGYPT")!=-1){
        s.replace(s.find("EGYPT"),5," ");
    }
    cout<<s<<endl;


    return 0;
}


