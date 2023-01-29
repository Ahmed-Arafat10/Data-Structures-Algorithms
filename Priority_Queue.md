## `priority queue`
- `priority queue` Uses Binary Heap

- Let's plat a little with `priority_queue`
````cpp
    priority_queue <ll> pq;
    priority_queue <ll> pq_desc; // By default 4 3 2 1
    priority_queue <ll, vector<ll>, greater<ll>> pq_asc; /// 1 2 3 4
    pq.push(10); // O(Log n)
    pq.push(8); 
    pq.push(9);
    pq.push(1);
    pq.push(3);
    // Get size of the priority_queue
    pq.size(); // O(1)
    pq2.push(5);
    pq2.emplace(100);
    //Swap between two priority_queues
    pq.swap(pq2);
    while (pq.size()) {
    cout << pq.top() << "\n"; // O(1)
    pq.pop(); // O(Log n) Cause Max Element is  the Top So, Removing it Affect Structure Of the Tree
    }
    pq.empty(); // O(1)
````