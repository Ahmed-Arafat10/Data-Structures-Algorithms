///Deque STL Container
///BY Ahmed Arafat
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
Deque(Deck) : it's like vector but you can insert
from both sides front and end of deque (like a queue)

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

    ///Declare deque
    //deque<ll> dq;

    ///Intialize deque
    //deque<char> dq1={'b','i','s'};
	
	///Intialize deque size
    //deque<char> dq1(3);
	

    ///insert element at end
    //dq1.push_back('s');
    //dq1.emplace_back('s'); //Faster

    ///insert element at beginning
    //dq1.push_front('b');
    //dq1.emplace_front('b'); //Faster


    ///Create an Iterator
    //deque<char>::iterator it1;
    //deque<char>::iterator it = dq1.begin();

    ///Print elements at deque
    //    for(int i=0;i<dq1.size();i++)
    //        cout<<dq1[i]<<" ";
    ///OR
    //    for(;it!=dq1.end();it++)
    //        cout<<*it<<" "; //Value at Pointer (it)
    ///OR
    //   for(auto it : dq1)
    //        cout<<it<<" ";

    ///Print elements at deque (Reveresed)
    //        for(int i=dq1.size()-1;i>=0;i--)
    //         cout<<dq1[i]<<" ";
    ///OR
    //    auto it2=dq1.rbegin();
    //    for(;it2!=dq1.rend();it2++)
    //        cout<<*it2<<" "; //Value at Pointer (it)

    ///Pointers Functions
    //deque<int> dq1={1,2,3};
    //auto it=dq1.begin();//address of first element
    //auto it=dq1.end()-1;//address after last element of deque so, you have to minus 1
    //auto it=dq1.rbegin();//address of last element
    //auto it=dq1.rend()-1;//address before first element of deque so, you have to minus 1
    ///VIP Note: it++ is used with begin()/rbegin()
    ///and it-- end()/rend()
    ///*(++it)-> increase iterator by one and then print value of new address
	///*(it++) -> increase iterator by one and then print value of old address
    ///--(*it)  -> Assign value of current iterator and then decrease it's value and print it's value
	///(*it)-- -> Assign value of current iterator and print it's value then decrease it's value

    ///Remove Elements
    //dq1.pop_back(); //remove element from back
    //dq1.pop_front(); //remove element from front
    //dq1.erase(dq1.begin()+1)//remove second element
    //dq1.erase(dq1.begin(),dq1.end()-1); //remove element in RANGE {b,i,s} -> {s}

    ///Insert in middle
    //dq1.insert(dq1.begin()+1,'f'); //insert 'f' in second position
    //dq1.insert(dq1.begin()+1,5,'f'); //insert 'f' in second position 5 TIMES
    ///VIP NOTE: use Emplace() AND Iterator instead of begin()/end() because it's faster
    //auto it = dq1.begin(); //FASTER
    //dq1.emplace(it,'f'); //FASTER than insert()
    //dq1.emplace(it,6,'f');

    ///Swap between two Deques
    //deque<ll> d1 = {1,2,3};
    //deque<ll> d2 = {4,5,6};
    //d1.swap(d2);

   ///Sort Deque
   //deque<ll> dq = {6,5,1,8,2,20};
   //sort(dq.begin(),dq.end()); //Sort from Small to Big
   //sort(dq.rbegin(),dq.rend()); //Sort from Big to Small

    ///Other Functions
    //deque<ll> dq = {6,5,1,8,2,20};
    //dq.size();
    //dq.empty(); //Check is empty or not
    //dq.resize(NEW_SIZE); //Resize Deque
    //dq.shrink_to_fit(); //Resize Deque
}