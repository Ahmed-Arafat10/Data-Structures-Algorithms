### `Unorder_map`/`Unorder_multimap`
- `Multimap` / `Unorder_multimap` They Don't support Random Access (No `[]` Operator) Cause Duplication In Keys Is Allowed
- Also, Insertion & Removal & Searching In Constant Time `O(1)` In Average Case `O(n)` In The Worst Case
- Implemented Using Hash Table -> Buckets -> Entries
- Elements Are Not In Same Order As Inserted
- No Reverse Iterator
- No `unordered_map<string ,ll , greater<string>> ump;`
- No `lower_bound()`/upper_bound()`

````cpp
    unordered_map<string , ll> ump = {{"yousef",11},{"Mohamed",21},{"Ahmed",21},{"AAAhmed",21}};
    unmap.insert({"ahmed",123});
    unmap["Arafat"] = 23;
    
    if (ump.find("Arafat") == ump.end()) cout << key << " not found\n";
    else cout << "Found " << key << "\n";

for(auto it:ump) cout<<it.first<<" "<<it.second<<"\n";
    cout<< ump.count("yousef");
````
