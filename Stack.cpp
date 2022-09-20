#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/// LIFO -> Last In First Out

int main()
{

    //Declare a stack
    stack<ll>s1,s2;

    //Insert element
    s1.push(3);
    s1.push(2);
    s1.push(1);

    //Access Top element
    s1.top();

    //Remove Top element
    s1.pop();

    //swap between two stacks
    s1.swap(s2);

    //Check size of stack
    cout<<s1.size();

    //Iterate over all elements of the stack
    while(s1.size())
    {
        cout<<s1.top()<<"\n";
        s1.pop();
    }

    //Check if stack is empty
    cout<<s1.empty();

    return 0;
}
