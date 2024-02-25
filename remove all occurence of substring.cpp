#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string remove_occurence(string s,string part)
{
    while(s.length()!=0 && s.find(part)<s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
string s;
cin>>s;
string part="abc";
string S=remove_occurence(s,part);
cout<<S;
return 0;
}
