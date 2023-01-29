## `Map` & `MultiMap`
- `Map` & `MultiMap` are Implemented Using Red-Black Tree (Self Balancing Binary Search Tree)
- Key Value Is Unique No Duplication (Except in `Multimap`)
- You Can't Edit the Value Of Key, You Can Only Insert It Or Delete It

- Let's plat a little with `Map`
````cpp
    // Declaration
    map <string, ll> mp;
    // Declaration in DESC Order
    map <string, ll, greater<string>> mp;
    // Initialization
    map <string, ll> mp = {{"yousef",  11},
                           {"Mohamed", 21}, 
                           {"Ahmed",   21}};
    
    // For each
    // it.first > Key
    // it.second > Value
    for (auto it: mp) cout << it.first << " " << it.second << "\n";

    // Iterator
    map<string, ll>::iterator it = mp.begin();
    for (it; it != mp.end(); ++it) {
        cout << it->first << " ";
    }
    // Reverse Iterator
    map<string, ll>::reverse_iterator it = mp.rbegin();
    for (it; it != mp.rend(); ++it) {
        cout << it->first << " ";
    }
````
- Insert & Erase in `Map`
````cpp
    // Insert a Key Value Pair
    mp["Arafat"] = 30;
    mp.insert(pair<string, ll>("Ahmed", 30));
    mp.insert(make_pair("Freecss", 30));
    mp.insert({"Ging", 30});
    mp.insert({"Ahmed", 30}); // Will Be Ignored As Key Already Exist
    // insert a single element or the range of element in the map. Its time complexity is O(logN)

    cout << mp.at("Arafat"); // Throw Exceptions If Not Exist
    // Erase
    mp.erase("Arafat"); // log(n)
    auto it = mp.begin();
    mp.erase(++it);
    mp.erase(it);
    mp.erase(++it, mp.find("Arafat")); // find() > O(logN)
````

- `lower_bound()`/`upper_bound()` & Iterators in `Map`
````cpp
    auto low = mp.lower_bound("Mohamed");// First Number Which Is Equal Or Greater Than 3
    auto up = mp.upper_bound("Mohamed");// First Number Which Is Greater Than 3   -> if element Not Exist It Returns Iterator For Last Element (.end()-1)
    mp.erase(mp.begin(), up);
    cout << up->first << " " << up->second;

    map<string, ll>::iterator it = mp.begin();
    it->second = 1231;
    it->first = "abc"; //Error Can't Edit Key
````

- Some other functions with `Map`
````cpp
    mp.size();
    mp.max_size();
    mp.count(Key); // O(logN)
    mp.empty();// O(1).
    mp.clear(); //O(N).
    mp.swap(mp2);
````

### `VIP Note`: `Multimap` is the Same In Every Thing Except Accept Duplicates
### Also, Insertion Removal , Searching O(Log n)
### Implemented Using Red-Black Tree (Balanced Binary Search Tree)