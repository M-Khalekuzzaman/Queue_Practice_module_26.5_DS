#include<bits/stdc++.h>
#include"MYSTACK.h"
#include"MYQUEUE.h"
using namespace std;

void reverseWord(string str)
{
    Stack <char> st;

    int idx = 0;
    while(str[idx] != '\0'){
        char ch = str[idx];
        st.push(ch);
        idx++;
    }
    while(!st.empty()){
        cout<<st.pop();
    }
}
void separateString(string str)
{

    for(int i = 0;i<str.length();i++){
        string word = "";
        while(i<str.length() && str[i] != '.'){
            word += str[i];
            i++;
        }
        reverseWord(word);
        cout<<".";
    }
}
int main()
{
    string str;
    cin>>str;

    separateString(str);


    return 0;
}

