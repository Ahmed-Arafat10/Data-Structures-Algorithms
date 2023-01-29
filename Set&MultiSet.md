## Set
- All Elements Are Sorted + No Duplication
- Element Value Cannot Be Changed As There Is No Random Access (Not like `vector`)
- Also, Insertion/Removal/Searching : `O(Log n)`
- Implemented Using Red-Black Tree (Self Balancing Binary Search Tree)
- `Set`/`MultiSet`/`Map`/`MultiMap` Complexity

> `insert(X)`: Adds a new element > `O(log n)`

> `erase(X)`: Removes the value X from the set > `O(log n)`

> `erase(it)`: Removes the element at the iterator > `O(1)`

> `erase(it1,it2)`: Removes an interval > `O(n)`

> `find(X)`: Returns an iterator to the element X in the `set` if found,
> else returns the iterator to the end (`.end()`) > `O(log n)`

> `lower_bound(X)` & `upper_bound(X)` > `O(log n)`


> `count(X)`:  Count the number of occurrence of an element
> (in `Set` it will always be `1` as it doesn't allow duplicates) > `O(log n)`

<hr>
<hr>


#### `Unorderd_set`/`Unorderd_multiset`/`Unorderd_Map`/`Unorderd_MultiMap` Complexity
#### O(1) In Average Case O(n) In The Worst Case

> `insert(X)`: Adds a new element > `O(1)`

> `erase(X)`: Removes the value X from the set > `O(1)`

> `erase(it)`: Removes the element at the iterator > `O(1)`

> `erase(it1,it2)`: Removes an interval > `O(n)`

> `find(X)`: Returns an iterator to the element X in the set if found, else returns the iterator to end.

> `count(X)`:  Count the number of occurrence of an element 
> (in `Unorderd_set` it will always be `1` as it doesn't allow duplicates) > `O(1)`

<hr>
<hr>

- Let's work with `Set`
````cpp
    // Declare
    set<ll> s1;
    // Initialize
    set<ll> s1 = {2,3,4,5}; // Result -> 1 2 3 4 5
    // Sort in Desc order
    set<ll , greater<ll>> s1; /// Result -> 5 4 3 2 1
    // Insert an element
    s1.insert(1); // O(Log n) as we said
    s1.insert(5);
    s1.insert(5);// 5 Will Be Added Once (No Duplicates)
    s1.insert(5);
    s1.insert(3);
    s1.insert(2);
    s1.insert(4);
````

- Iterate on `Set`
````cpp
    // For each
    for(auto it : s1) cout<<it<<" ";

    // Using Iterator
    set<ll>::iterator it = s1.begin();
    for (it; it != s1.end(); ++it)
    {
        cout << *it<<" ";
    }

    // Reverse Printing
    set<ll>::reverse_iterator it = s1.rbegin();
    for (it  ; it != s1.rend(); ++it)
    {
        cout << *it<<" ";
    }
````

- Iterators with `Set`
````cpp
    set<ll>::iterator it = s1.begin();
    ++++it; // Move to index 2
    set<ll>::iterator it2 = s1.end(); // { 1 2 3 4 5 } <-end() like vector
    ----it2; // move to element 4

    set<ll>::reverse_iterator it3 = s1.rbegin();// You Can't Used it to erase (++)
    it3++;
    cout<<*it3;// element 4
    set<ll>::reverse_iterator it4 = s1.rend(); // rend()->{ 1 2 3 4 5 } 
    // use (--) to move from left to right & (++) to move from right to left    
    it4--; // element 1
    it4--; // element 2
    it4++; // go again to element 1
    cout<<*it4; // 1
````

- Erase an element from a `Set`
````cpp
    set<ll>s1 = {1,2,3,4,5};
    s1.erase(1); // Specific The Value O(Log N)
    s1.erase(++++it);// remove the element 3
    // Remove Range O(n), n is number of elements between starting position and ending position.
    s1.erase(++++it, s1.end()); // O:P > 1 2    (3 4 5 are removed)
    s1.erase(s1.find(5));// remove element 5
    s1.erase(++it , s1.find(5)); // 1 5       (2 3 4 are removed)
    //Note: 5 Is Not Included in s1.find(5) part
    
    // .find() O(Log n)
    if(s1.find(8) == s1.end()) cout<<"Not Exist\n";
    else cout<<"Exist\n";
````

- Using `lower_bound()`/`upper_bound()` functions with  `Set`
````cpp
    set<ll>s1 = {1,2,3,4,5};
    auto low = s1.lower_bound(3);
    auto up = s1.upper_bound(3);
    cout<< *low;// 3
    cout<< *up;// 4
````
>`auto low = s1.lower_bound(3);` > Get First Number Which Is Equal Or Greater Than 3

>`auto up = s1.upper_bound(3);` > Get First Number Which Is Greater Than 3

> Note: If an element does not exist It Returns Iterator For Last Element (`.end()`)

 
- Other functions with `Set`
````cpp
    // Get size of a set
    s1.size();
    // Get max size a set can reach
    s1.max_size();
    // Return is the set empty or not
    s1.empty();
    // Count number of occurrence of number 20 (in set it will be either 1 or 0 as there is no duplicates)
    s1.count(20);
    // Swap between two sets
    s1.swap(s2);
    // Clear all elements in a set
    s1.clear(); //O(N)
````

### `VIP Note` > Multiset is Same In Every Thing Except Accept It Allows Duplicates
### Also, Insertion Removal , Searching `O(Log n)`
### Implemented Using Red-Black Tree (Balanced Binary Search Tree)