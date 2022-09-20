#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    //Declare
    vector<ll> v1;

    //Initialize
    vector<ll> v2 = {12,3,4};

    //Add new element at end
    v2.push_back(1);

    //Faster then push_back(), not supported by all compilers
    v2.emplace_back(10);

    // Add number 200 five times
    vector<ll> v3(5,200);

    //Remove last elemet
    v2.pop_back();

    //Print first element
    cout<<v2.front();

    //Print last element
    cout<<v2.back();

    //Print element at specific index
    cout<<v2.at(0);
    cout<<v2[0];

    //Declare an iterator (pointer)
    vector<ll>::iterator it;

    // use -1 as end() refers to }
    it = v1.end()-1; // it iterator points on last element
    it = v1.begin(); // it iterator points on first element

    //Declare & Initialize an iterator pointing to first element
    vector<ll>::iterator it2 = v1.begin();

    //Declare a reverse iterator (pointer)
    vector<ll>::reverse_iterator rit;
    vector<ll>::reverse_iterator rit2;

    //rbegin() will point on last element
    //Note to move to the left you will use [+1] like v2.rbegin()+1
    //Point to last element
    rit = v2.rbegin();
    //Point to second last element
    rit = v2.rbegin()+1;

    //rend() will point on {  [before first eleemt]
    //Note to move to the right you will use [-1] like v2.rend()-1
    //Point to first element
    rit2 = v2.rend()-1;

    //Print element iterator is pointing at (use dereferencing operator to access element stored in the address that is stored in the iterator)
    cout<<*rit2;

    //Check if vector is empty
    cout<<v1.empty();

    //Print number of element stored
    cout<<v1.size();

    //Iterate over all elements in the vector [Method 1]
    for(ll i = 0; i<v1.size(); i++)
        cout<<v1[i]<<" " ;
    puts("");

    //Iterate over all elements in the vector [Method 2]
    //auto it5 = v1.begin();
    for(auto it5 = v1.begin(); it5 != v1.end(); it5++)
        cout<<*it5<<" " ;
    puts("");

    //Iterate over all elements in the vector [Method 3]
    //Foreach
    for(auto &it : v1)
        cout<<it<<" ";
    puts("");


    //Create two vectors
    vector<ll> v5= {2,1,3,4}, v6= {10,11,12,13};
    //Swap elements between two vectors
    v5.swap(v6);

    vector<ll> v7= {1,3,4};

    //Insert at index 0 element 14
    v7.insert(v7.begin(),14);

    //Insert at index 1 element 14
    v7.insert(v7.begin()+1,15);

    //Insert at last element 14
    v7.insert(v7.end(),98); //O(N)

    //Insert at last-1 element 14
    v7.insert(v7.end()-1,99);

    //Erase from index 0 till index 1 [1 is excluded VIP Point]
    v7.erase(v7.begin(),v7.begin()+1);// O(N)

    //Erase from index 0 till last element [last element will be excluded]
    v7.erase(v7.begin(),v7.end()-1);

    //Remove all elements
    v2.clear();

    //Reverse a vector
    reverse(v2.begin(),v2.end());//O(N)

    //Sort a vector in Ascending order
    sort(v7.begin(),v7.end());

    //Sort a vector in Descending order
    sort(v7.rbegin(),v7.rend());
    sort(v7.begin(),v7.end(),greater<ll>()); //O(n log n)


    vector<ll> v10{3,5,10,15};
    auto it10 = v10.begin();

    //Access first element then increment it
    cout<<++(*it10);//4

    //Increment to second element (but it10 expression will still refer to first element) then access it
    cout<<*(it10++);//3

    //Increment to second element then access it
    cout<<*(++it10);//5


    //Print Maximum possible elements to be stored
    cout<<v2.max_size()<<"\n";

    //Print size of the storage space currently allocated for the vector
    cout<<v1.capacity();

    //Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity
    v1.shrink_to_fit();

    return 0;
}
