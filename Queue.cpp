#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

/// FIFO -> First In First Out

int main()
{
    //Declare a queue
    queue<ll> q,q2;

    //Insert element
    q.push(1);
    q.push(2);
    q.push(3);

    //Remove Top element
    q.pop();

    //Access first element
    q.front();

    //Access last element
    q.back();

    //Check size of stack
    q.size();

    //swap between two queues
    q.swap(q2);

    //Iterate over all elements of the queu
    while(q.size())
    {
        cout<<q.front()<<"\n";
        q.pop();
    }

    //Check if queue is empty
    cout<<q.empty();

    return 0;
}
