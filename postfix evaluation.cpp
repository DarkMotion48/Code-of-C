#include<bits/stdc++.h>
using namespace std;

void postfixevaluation(string s)
{
    stack<int>st;
    int l=s.length();
    cout << l << endl;
    int i;
    int ch1,ch2;
    int ans;
    for(i=0;i<l;i++){
        if(s[i]>=0 && s[i]<=9){
            st.push(s[i]);
        }
        else if((s[i]='+') || (s[i]='-') || (s[i]='*') || (s[i]='/')){
            switch(s[i]){
            case '+':
                ch1=st.top();
                //cout <<  ch1;
                st.pop();
                ch2=st.top();
                st.pop();
                ans=ch2+ch1;
                st.push(ans);
                break;
            case '-':
                ch1=st.top();
                st.pop();
                ch2=st.top();
                st.pop();
                ans=ch2-ch1;
                st.push(ans);
                break;
            case '*':
                ch1=st.top();
                st.pop();
                ch2=st.top();
                st.pop();
                ans=ch2 * ch1;
                st.push(ans);
                break;
            case '/':
                ch1=st.top();
                st.pop();
                ch2=st.top();
                st.pop();
                ans=ch2/ch1;
                st.push(ans);
                break;
            }
        }
        else
            continue;
    }
    int result=st.top();
    cout << result;
}

int main()
{
    string str = "5 1 +";
    postfixevaluation(str);
}
