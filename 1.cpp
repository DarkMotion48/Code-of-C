#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool parentheses(string str)
{
    stack<char>st;
    int i;
    char x;
    for(i=0;i<str.length();i++){
        if(str[i] == '(' || str[i] == '{' ||str[i] == '[' ){
            st.push(str[i]);
            continue;
        }
        switch(str[i])
        {
            case ')':

            x=st.top();
            if(x=='('){
                st.pop();
               }
            else
                return false;

            case '}':
            x=st.top();
            if(x=='{'){
                st.pop();
            }
            else
                return false;


            case ']':
            x=st.top();

            if(x=='['){
st.pop();
            }
            else
                return false;

        }
    }
    return true;
}

int main()
{
    string str="[45{89(56+6)}]";

    if(parentheses(str)){
        cout << "balanced";
    }
    else
        cout << "not balanced";
    return 0;
}


