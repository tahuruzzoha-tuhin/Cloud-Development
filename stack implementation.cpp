#include<bits/stdc++.h>
using namespace std;


struct STACK
{
    int n=0;
    int a[10000];
    bool Empty()
    {
        if(n==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void push(int x)
    {
        n++;
        a[n-1]=x;
    }
    int top()
    {
        if(n<=0)
        {
            cout<<"error: stack is empty\n";
        }
        else
        {
            return a[n-1];
        }
    }
    void pop()
    {
        if(n<=0)
        {
            cout<<"error: stack is empty\n";
        }
        else
        {
            n--;
        }
    }
    int siz()
    {
        return n;
    }

};

int main()
{
    STACK st;
    cout<<"push the values : 2,5,7,8,9\n\n";
    st.push(2);
    st.push(5);
    st.push(7);
    st.push(8);
    st.push(9);
    cout<<"the size of this stack is: ";
    int d=st.siz();
    cout<<d<<"\n\n";
    cout<<"the top element of the stack is: ";
    d=st.top();
    cout<<d<<"\n";
    cout<<"\npoped the top element\nnow the top is: ";
    st.pop();
    d=st.top();
    cout<<d<<"\n\n";
    cout<<"now the size is: ";
    d=st.siz();
    cout<<d<<"\n";
    cout<<"is the stack empty?: ";
    if(st.Empty())cout<<"empty\n";
    else cout<<"not empty\n";

    return 0;
}
