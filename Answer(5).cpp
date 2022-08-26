#include<bits/stdc++.h>
using namespace std;

void decimalToBinary(int val,char str[])
{
    int idx = 0;
    while(val>0){
        int digit = val%2;
        val /= 2;
        str[idx] = '0' + digit;
        idx++;
    }
    str[idx] = '\0';
}
int main()
{
    int size;
    cin>>size;
    for(int i = 1;i<=size;i++){
        char str[100];
        decimalToBinary(i,str);
        strrev(str);
        cout<<str<<" ";
    }

    return 0;
}
