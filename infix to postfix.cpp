#include<bits/stdc++.h>
using namespace std;

void intopost(string s)
{
    stack<char>st;
    st.push('N');
    int l=s.length();
    string n;
    for(int i=0;i<l;i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            n+=s[i];
        }
    }
}
int main()
{
    string str="a+b(c+d)+a^b";
    intopost(str);
    return 0;
}
