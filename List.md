## `List`
- Lists are sequence containers that allow non-contiguous memory 
allocation. As compared to `vector`, the list has slow traversal, 
but once a position has been found, insertion and deletion are quick. 
Normally, when we say a List, we talk about a `doubly linked list`. 
For implementing a `singly linked list`, we use a `forward list`.


- Properties of the `List`
  - Fast insert & delete from any place : `O(1)`
  - Slow search : `O(N)`
  - No random access (no `[]` or `at()`)
  - Uses a lot of memory

````cpp
int main()
{
    // Declaration
    list <ll> l1;
    
    // set a size for a list
    list <ll> l2(5);// 0 0 0 0 0
    
    // Initialize
    list <ll> l3 = {1, 2, 3, 4};
    
    l1.push_back(5);
    l1.push_front(0);

    l1.pop_back();
    l1.pop_front();
   
    cout << l1.front() << "\n";
    cout << l1.back() << "\n";

````

- Traverse On A `List`

````cpp
    for (auto &it: l1) cout << it << " ";
    
    // Iterator
    list<ll>::iterator it = l1.begin();
    for (; it != l1.end(); it++) cout << *it << " ";
    
    // Reverse Iterator
    list<ll>::reverse_iterator it2 = l1.rbegin();
    for (; it2 != l1.rend(); it2++) cout << *it2 << " ";
````

- Erase or Insert In a `List`

````cpp
    l1.remove(2); //  will remove all elements with value 2

    l1.erase(l1.begin()); // remove first element

    l1.erase(l1.begin(), l1.end()); // remove all elements

    // Error as elements are not stored contiguously
    // l3.erase(l3.begin()+1,l3.end());
    // To solve this

    list<ll>::iterator it2 = l1.begin();
    it2++;// move to the second element
    l1.erase(it2, l2.end()); // remove from second element till the end

    l3.insert(l1.begin(), 2); // add element 2 at the first position

    l3.insert(it2,2); // at second position insert element 2 
    l3.insert(it2, 2, 50); // Will insert number 50 two times at second position 

    l3.assign(10, 2);// will override the old elements and make the list contains element 2 ten times
}
````

````cpp
int main()
{
    list<ll> l = {1,2,3};
    // Get size
    l.size();
    // Check if the list empty or not
    l.empty();
    // Resize the list to have only 2 elements
    l.resize(2);
    // Clear the list
    l.clear();
    
    list<ll> l1 = {1,2,3};
    list<ll> l2 = {0,4,-1};
    l1.merge(l2); // l1 > -1 0 1 2 3 4 (sorted) 
    // l2 list now is empty
    
    l1.splice(l1.begin(),l2); // l1 > 1 2 3 0 4 -1
    // l2 list now is empty

    l1.unique();// remove all duplicates
}
````

````cpp
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool EvenNumber(int i)
{
    return i&1; // if the condition is true that element will be deleted
}

bool OddNumber(int i)
{
    return !(i&1); // if the condition is true that element will be deleted
}

int main()
{
    list<ll> l = {1,2,3};

    // l.remove_if(EvenNumber); // get even numbers
    l.remove_if(OddNumber);// get odd numbers
    for(auto &it:l) cout<<it<<" ";

    l.sort();// ASC sort
    l.sort(greater<ll>());// DESC sort
    l.reverse();

    // How to Modify an element 
    // Method #1 (wrong as we don't have a random access)
    // l1[0] = 10;
    
    // Method #2
    list<ll>::iterator it= l.begin();
    it++;// point to the second element in the list
    *it = 10;// change its value to 10
    for(auto&it:l) cout<<it<<" ";
}
````