## `Forward List`
- Forward list in STL implements singly linked list. Introduced from C++11, forward list are more useful than other containers in insertion, removal, and moving operations (like sort) and allow time constant insertion and removal of elements.
It differs from the list by the fact that the forward list keeps track of the location of only the next element while the list keeps track of both the next and previous elements, thus increasing the storage space required to store each element. The drawback of a forward list is that it cannot be iterated backward and its individual elements cannot be accessed directly.
Forward List is preferred over the list when only forward traversal is required (same as the singly linked list is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing, adjacency list representation of the graph, etc.

````cpp
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    forward_list<ll> f = {1,2,3};
    f.assign(5,7); // add number 7 five times
    f.assign({5,4,3}); // override the list with number 5 4 3

    f.push_front(5); // 5 1 2 3
    f.pop_front(); // 1 2 3

    f.emplace_front(10);// use less memory than push_front()

    f.insert_after(f.begin(),5); // 1 5 2 3
    f.insert_after(f.before_begin(),10; // 10 1 5 2 3

    forward_list<ll>::iterator it = f.begin();
    //it--; // Wrong as it is singly linked list, I cannot go previous

    forward_list<ll>::iterator it = f.begin();
    f.insert_after(it,{20,30,40}); // 1 20 30 40 3

    forward_list<ll>::iterator it = f.begin();
    it++;
    f.emplace_after(it,100); // Can add just one value
    for(auto&it:f) cout<<it<<" "; // 1 2 100 3
}

````

````cpp
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool check(ll n)
{
    return n <= 2; // remove all numbers less than or equal to 2
}
int main()
{
    forward_list<ll> f = {1,2,3,4};

    auto it = next(f.begin()); // move from 1 to 2
    auto it = next(f.begin(),2); // move from 1 to 3 (two positions)
    cout<<*it<<"\n"; // 3

    f.erase_after(f.begin());// remove element 2
    for(auto&it:f) cout<<it<<" "; // 1 3 4
    
    f.erase_after(f.before_begin());// remove element 1
    for(auto&it:f) cout<<it<<" "; // 2 3 4

    forward_list<ll>::iterator it = f.before_begin();
    it = next(it,3); // now it points on number 3
    f.erase_after(it);// remove the element that is after number 3 (which is 4)
    for(auto&it:f) cout<<it<<" "; // 1 2 3

    f.remove(1);// remove all elements with value 1
    f.remove_if(check); // remove all the elements less than or equal to 2
    // Write the body of the function check() in the parameter itself (new syntax)
    f.remove_if([](ll n){return n <= 2;});
    for(auto&it:f) cout<<it<<" "; // 3 4

    forward_list<ll> f1 = {1,2,3,4};
    forward_list<ll> f2 = {10,20,30,40,50};

    f1.splice_after(f1.before_begin(),f2);
    for(auto&it:f1) cout<<it<<" "; // 10 20 30 40 50 1 2 3 4

    f1.splice_after(f1.begin(),f2);
    for(auto&it:f1) cout<<it<<" "; // 1 10 20 30 40 50 2 3 4
    
    // I will just take the first element of f2 & move it in f1
    f1.splice_after(f1.before_begin(),f2,f2.begin());
    for(auto&it:f1) cout<<it<<" "; // 20 1 2 3 4

    // I will take all the elements of f2 & move them to f1
    f1.splice_after(f1.before_begin(),f2,f2.begin(),f2.end());
    for(auto&it:f1) cout<<it<<" "; // 20 30 40 50 1 2 3 4

}
````

- Some other functions with `forward_list` :
````cpp
int main()
{
    forward_list<ll> f1 = {1,2,3,4};
    forward_list<ll> f2 = {-1,0,6,5};

    // Get size
    f1.size();
    // Check if the list empty or not
    f1.empty();
    // Resize the list to have only 2 elements
    f1.resize(2);
    // Clear the list
    f1.clear();

    f1.merge(f2); // l1 > -1 0 1 2 3 4 5 6 (sorted)
    // f2 list now is empty

    l1.unique();// remove all duplicates
    f1.sort();// ASC sort
    f1.sort(greater<ll>());// DESC sort
    f1.reverse();
    f1.swap(f2);
}
````