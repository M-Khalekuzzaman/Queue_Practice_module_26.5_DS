#include<bits/stdc++.h>
#include"MYSTACK.h"
#include"MYQUEUE.h"
using namespace std;

int main()
{
    int size;
    cin>>size;
    Stack <int> st;
    Stack <int> tempSt;

    for(int i = 0; i<size; i++)
    {
        int value;
        cin>>value;
        st.push(value);

    }

    while(!st.empty())
    {
        int val = st.pop();
        while(!tempSt.empty() && tempSt.Top() < val)
        {
            st.push(tempSt.Top());
            tempSt.pop();
        }
        tempSt.push(val);

    }
    while(!tempSt.empty())
    {
        cout<<tempSt.pop()<<" ";
    }

    return 0;
}
