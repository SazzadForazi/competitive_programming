#include<bits/stdc++.h>
using namespace std;
void fun(stringstream& ss){
    string word;

    while (ss>>word)
    {
        fun(ss);
        cout<<word<<endl;
    }
}

int main()

{
    string s;
    getline(cin,s);
    stringstream ss(s);
    fun(ss);
    
    // cout<<s<<endl;

    return 0;
}


