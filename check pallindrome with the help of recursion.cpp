#include<iostream>
using namespace std;
bool check_pallindrome(string s,int i,int j)
{
    if(i>j)
    {
        return true;
    }
    if(j=='\0')
    {
        j--;
    }
    if(s[i]==s[j])
    {
       return check_pallindrome(s, i+1, j-1);
        
    }else
    {
        return false;
    }
}
int main(){
string s ="aabbaa";
bool r=check_pallindrome(s,0,s.length()-1);
cout<<r<<"\n";
return 0;
}