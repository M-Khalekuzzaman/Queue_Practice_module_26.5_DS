#include<bits/stdc++.h>
#include"MYSTACK.H"
using namespace std;

int main()
{
    int size;
    cin>>size;
    Stack <int> st;
    Stack <int> minSt;
    int *arr = new int[size] {0};
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];

    }
    int minValue = 999;
    for(int i = 0; i<size; i++)
    {
        st.push(arr[i]);
        if(arr[i]<=minValue)
        {
            minValue = arr[i];
            minSt.push(minValue);
        }
    }
    while(!st.empty())
    {
        if(st.Top() != minSt.Top()){
            st.pop();
            cout<<minSt.Top()<<" ";
        }
        else{
            cout<<minSt.Top()<<" ";
            minSt.pop();
            st.pop();
        }
    }



    return 0;
}
