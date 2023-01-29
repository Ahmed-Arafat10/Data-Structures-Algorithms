### `unordered_set` / `unordered_multiset` > Elements Are Stored Buckets Not In Insert Sequence
- Elements in `unordered_set` / `unordered_multiset` Are Stored Buckets Not In Insert Sequence
- Also, Insertion Removal & Searching In Constant Time `O(1)` In Average Case `O(n)` In The Worst Case
- Implemented Using Hash Table -> Buckets -> Entries
- Element Value Cannot Be Changed As There Is No Random Access
- No Reverse Iterator
- No `unordered_set<ll , greater<ll>> s1;` 
- No `lower_bound()`/`upper_bound()` functions
  
- Let's use how to use `unordered_set` / `unordered_multiset`
````cpp
    // Declaration
    unordered_multiset<ll> s1;
    // Initialization 
    unordered_multiset<ll> s2 = {5,10,15};
     s1.insert(3); // O(1)
     s1.insert(1);
     s1.insert(2);
     s1.insert(5);
     s1.insert(4);
     s1.insert(4);
     s1.insert(4);
     
     // Not in the same order of insertion
    for(auto it : s1) cout<<it<<" ";
    cout<<"\n";

    // Iterator
    unordered_multiset<ll>::iterator it = s1.begin();
    for(it;it != s1.end() ;++it)
    cout<<*it<<" ";
    
    // Erase first element
    s1.erase(s1.begin());
    // Erase from second element till number 4 (number 4 is not included in erasing)
    s1.erase(++it,s1.find(4));
    // Count number of occurrence of an element
     cout<<s1.count(4);
````