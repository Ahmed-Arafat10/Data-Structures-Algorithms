///Deque STL Container
///BY Ahmed Arafat
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
Dequeue(Deck) : it's like vector but you can insert
from both sides front and end of dequeue (like a queue)

  -  -  -  -  -  -
  ^              ^
  |              |
Front           Back
------------------------
front()          back()
push_front()     push_back()
emplace_front()  emplace_back()

Advantage :
1)Fast insert/remove at the beginning and the end O(1)

Disadvantage :
1) Slow insert/remove at the middle O(n)
2) Slow search O(n)

*/
int main()
{

    //Declare dequeue
    deque<ll> dq;

    //Initialize dequeue
    deque<char> dq1= {'b','i','s'};

    //Initialize dequeue size
    deque<char> dq2(3);


    //Insert element at the end
    dq1.push_back('s');
    dq1.emplace_back('s'); //Faster

    //Insert element at the beginning
    dq1.push_front('b');
    dq1.emplace_front('b'); //Faster

    //Remove element at the end
    dq1.pop_back();

    //Remove element at the beginning
    dq1.pop_front();

    //Declare an Iterator
    deque<char>::iterator it1;

    //Initialize an Iterator
    deque<char>::iterator it = dq1.begin();

    //Print size of dequeue
    cout<<dq1.size();

    //Check is dequeue empty
    cout<<dq1.empty();

    //Print elements at dequeue [Method 1]
    for(int i=0; i<dq1.size(); i++)
        cout<<dq1[i]<<" ";

    //Print elements at dequeue [Method 2]
    for(; it!=dq1.end(); it++)
        cout<<*it<<" ";

    //Print elements at dequeue [Method 2]
    for(auto &it : dq1)
        cout<<it<<" ";

    //Print elements at dequeue Method 1 (Reversed)
    for(int i=dq1.size()-1; i>=0; i--)
        cout<<dq1[i]<<" ";

    //Print elements at dequeue  Method 2 (Reversed)
    auto it2 = dq1.rbegin();
    for(; it2!=dq1.rend(); it2++)
        cout<<*it2<<" ";

    //Iterators
    deque<int> dq3= {1,2,3};

    //Address of first element
    auto it = dq3.begin();

    //Address after last element of dequeue } so, you have to minus 1
    auto it = dq3.end()-1;

    //rbegin() will point on last element
    //Note to move to the left you will use [+1] like v2.rbegin()+1
    //Point to last element
    auto it = dq3.rbegin();

    //rend() will point on {  [before first element]
    //Note to move to the right you will use [-1] like v2.rend()-1
    //Point to first element
    auto it=dq3.rend()-1;

    //Note: it++ is used with begin()/rbegin()
    //      it-- end()/rend()

    //Increase iterator by one and then print value stored in new address
    *(++it)

    //Increase iterator by one and then print value stored in old address
    *(it++)

    //Assign value of current iterator and then decrease it's value and print it's value
    --(*it)

    //Assign value of current iterator and print it's value then decrease its value
    (*it)--


    //Remove second element
    dq1.erase(dq1.begin()+1);

    //Erase from index 0 till last element [last element will be excluded]
    //Remove element in RANGE {b,i,s} -> {s}
    dq1.erase(dq1.begin(),dq1.end()-1);


    //Insert 'f' in index 1 (second position)
    dq1.insert(dq1.begin()+1,'f');

    //Insert 'f' in second position 5 TIMES
    dq1.insert(dq1.begin()+1,5,'f');

    //NOTE: use Emplace() AND Iterator instead of begin()/end() because it's faster

    //Iterator
    auto it = dq1.begin();

    //FASTER than insert()
    dq1.emplace(it,'f');
    dq1.emplace(it,6,'f');


    deque<ll> d4 = {1,2,3};
    deque<ll> d5 = {4,5,6};
    //Swap between two Dequeues
    d4.swap(d5);


    deque<ll> dq6 = {6,5,1,8,2,20};

    //Sort a vector in Ascending order
    sort(dq6.begin(),dq6.end());

    //Sort a vector in Descending order
    sort(dq6.rbegin(),dq6.rend());

    deque<ll> dq7 = {6,5,1,8,2,20};

    //Resize Dequeue
    dq7.resize(NEW_SIZE);

    //Resize Dequeue
    dq7.shrink_to_fit();
}
