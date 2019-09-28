#include<bits/stdc++.h>


using namespace std;
void enqueue(int a);
void dequeue();
stack<int>mystack1,mystack2;

int main()
{
    int n,a;

    cout<<"Press 1 to add in queue: "<<endl<<"Press 2 to delete in queue:"<<endl<<"press anything to exit :"<<endl<<endl;
    while(cin>>n)
    {
        switch(n)
        {
        case 1:
        {
            cout<<"Enter number"<<endl;
            cin>>a;
            enqueue(a);
            cout<<"----------------------------------"<<"chose option"<<endl;
            break;

        }
        case 2:
        {
            dequeue();
            cout<<"----------------------------------"<<"chose option"<<endl;
            break;

        }
        default:
        {
            exit(0);

        }

        }

    }

}
void enqueue(int a)
{


    mystack1.push(a);


}

void dequeue()
{

    if(mystack1.empty() && mystack2.empty())
    {
        cout<<"queue empty"<<endl;
    }
    if(mystack2.empty())
    {
        while (!mystack1.empty())
        {
            mystack2.push(mystack1.top());
            mystack1.pop();
        }

    }
    else
    {
        cout<<mystack2.top();

        mystack2.pop();
    }

}
