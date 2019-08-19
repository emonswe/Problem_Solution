#include<bits/stdc++.h>

using namespace std;
int top=0;
void push(int x,int arr[]);
int pop(int arr[]);
void show(int arr[]);
int main()
{

    int arr[100],value;
    cout<<"push->1"<<endl<<"pop->2"<<endl<<"show->3"<<endl<<"Number of element->4"<<endl<<endl<<endl;
    int n;
    while(cin>>n)
    {

        switch(n)
        {
        case 1:
        {
        cout<<"Enter value to push into stack: ";
        cin>>value;
        push(value,arr);
        break;
        }
        case 2:
        {
        cout<<pop(arr)<<endl;
        break;
        }

        case 3:
        {
        show(arr);
        cout<<endl;
        break;
        }
        case 4:
        {
            cout<<top;
        }
        default:
        {

        cout<<"wrong input"<<endl<<"Try again"<<endl;
        break;

        }

        }
    }
}
void push(int x,int arr[])
{
    if(top>=99)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {

        arr[top]=x;
        top++;
    }
}
int pop(int arr[])
{

    int x;
    if(top<=0)
    {
    cout<<"Underflow";
    top=0;
    return 0;
    }
    else
    {
    top--;
    x=arr[top];
    return x;
    }

}
void show(int arr[])
{
    for(int i=0; i<top; i++)
    {
        cout<<arr[i]<<" ";
    }

}
