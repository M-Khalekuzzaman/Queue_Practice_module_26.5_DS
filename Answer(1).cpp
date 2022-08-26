#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;

int checkBalanceBracket(string str)
{
    Stack<char>st;
    int flag = 0;
    if(str[0] == ')' || str[0] == '}' || str[0] == ']'){
        flag = 1;
        return flag;
    }
    for(int i = 0; i<str.length(); i++)
    {
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else if(ch == ')')
        {
            if(st.Top() == '(') st.pop();
            else
            {
                flag = 1;
                break;
            }
        }
        else if(ch == '}')
        {
            if(st.Top() == '{') st.pop();
            else
            {
                flag = 1;
                break;
            }
        }
        else if(ch == ']')
        {
            if(st.Top() == '[') st.pop();
            else
            {
                flag = 1;
                break;
            }
        }

    }
    while(!st.empty()) flag = 1;

    if(flag == 0) return 1;
    else return 0;
}

int main()
{

    string str;
    cin>>str;

    int chk = checkBalanceBracket(str);
    if(chk == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;





    return 0;
}
