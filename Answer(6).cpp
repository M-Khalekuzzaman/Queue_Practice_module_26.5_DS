#include<bits/stdc++.h>
#include"MYQUEUE.h"
#include"MYSTACK.h"
using namespace std;

int main()
{
    int size,k,value;
    cin>>size>>k;
    Queue <int> que;
    Stack <int> st;
    for(int i = 0; i<size; i++)
    {
        cin>>value;
        que.enqueue(value);
    }
    int vagfol = size/k;
    int vagses =size%k;
    for(int i = 1; i<=vagfol; i++)
    {
        for(int i = 0; i<k; i++)
        {
            int val = que.dequeue();
            st.push(val);
        }
        while(!st.empty())
        {
            int val = st.pop();
            que.enqueue(val);
        }
    }
    if(vagses>0)
    {
        for(int i = 1; i<=vagses; i++)
        {
            int val = que.dequeue();
            st.push(val);
        }
        while(!st.empty())
        {
            int val = st.pop();
            que.enqueue(val);
        }
    }

    while(!que.empty())
    {
        cout<<que.dequeue()<<" ";
    }


    return 0;
}
