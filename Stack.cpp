#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{

/// LIFO -> Last In First Out
stack<ll>s1,s2;
s1.push(10);
s1.push(10);
s1.push(10);
s1.push(10);
s1.push(10);

s2.push(11);
s2.push(11);
s2.push(11);
s2.push(11);

s1.pop();
s1.top();
s1.swap(s2);
while(s2.size())
{
    cout<<s2.top()<<"\n";
    s2.pop();

}
s1.empty();

    return 0;
}