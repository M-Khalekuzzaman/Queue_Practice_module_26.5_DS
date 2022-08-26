#include<bits/stdc++.h>
#include"MYQUEUE.h"
using namespace std;

int main()
{
    int size,value;
    cin>>size;
    Queue <int> que;
    int max = 0;
    for(int i = 0;i<size;i++){
        cin>>value;
        que.enqueue(value);
        if(value>max) max = value;
    }

    int n,val;
    cin>>n;
    Queue <int> q;
    for(int i = 0;i<n;i++){
      cin>>val;
      q.enqueue(val);
    }
    int counter[max+1] = {0};
    while(!que.empty()){
        int val = que.dequeue();
        counter[val]++;
    }
    while(!q.empty()){
        int v = q.dequeue();
        if(counter[v]>0) cout<<counter[v]<<endl;
        else cout<<"-1"<<endl;
    }



    return 0;
}
