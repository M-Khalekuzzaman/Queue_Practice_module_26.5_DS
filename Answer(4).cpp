#include<bits/stdc++.h>
#include"MYSTACK.h"
#include"MYQUEUE.h"
using namespace std;

int main()
{

    int size;
    cin>>size;
    Queue <int> que;

    for(int i = 0;i<size;i++){
        int val;
        cin>>val;
        que.enqueue(val);
    }
    Stack <int> st;
    while(!que.empty()){
        int val = que.dequeue();
        st.push(val);
    }
    while(!st.empty()){
        que.enqueue(st.pop());
    }
    while(!que.empty()){
        cout<<que.dequeue()<<" ";
    }


    return 0;
}
