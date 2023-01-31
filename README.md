# STLs Library
## A repository that contains All functions for every container in `STL Library` In `C++`
### By Ahmed Mohamed Yousry (AKA Ahmed Arafat)

The `Standard Template Library (STL)` is a set of `C++` template classes 
to provide common programming data structures and functions such as
`lists`, `stacks`, `arrays`, etc. It is a library of container classes, 
algorithms, and iterators. It is a generalized library and so, its 
components are parameterized. Working knowledge of template classes
is a prerequisite for working with `STL`.

- STL has 4 components:
  - `Algorithms`
  - `Containers`
  - `Functions`
  - `Iterators`

1. `Algorithms`: The header algorithm defines a collection of functions
specially designed to be used on a range of elements. They act on 
containers and provide means for various operations for the contents of the containers.
   - Sorting
   - Searching
   - Important STL Algorithms `*`
   - Useful Array algorithms
   - Partition Operations

2. `Containers`: container classes store objects and data. There are in 
total seven standards “first-class” container classes and three 
container adaptor classes and only seven header files that provide 
access to these containers or container adaptors.

   - `Sequence Containers`: implement data structures that can be accessed in a sequential manner.
     - `arrays`
     - `vector`
     - `list`
     - `deque`
     - `forward_list`( Introduced in C++11)

   - `Container Adaptors`: provide a different interface for sequential containers.
     - `queue`
     - `stack`
     - `priority_queue`

   - `Associative Containers`: implement sorted data structures that can be quickly searched (O(log n) complexity).
     - `set`
     - `multiset`
     - `map`
     - `multimap`
   
   - `Unordered Associative Containers`: implement unordered data structures that can be quickly searched
     - `unordered_set` (Introduced in C++11)
     - `unordered_multiset` (Introduced in C++11)
     - `unordered_map` (Introduced in C++11)
     - `unordered_multimap` (Introduced in C++11)

3. `Functions`: The STL includes classes that overload the function
call operator. Instances of such classes are called function objects 
or functors. Functors allow the working of the associated function to
be customized with the help of parameters to be passed. 

4. `Iterators`: As the name suggests, iterators are used for working
on a sequence of values. They are the major feature that allows
generality in STL.

<hr>

`*` Important STL Algorithms :
- `sort(first_iterator, last_iterator)`: To sort the given vector.
- `sort(first_iterator, last_iterator, greater<int>())`: To sort the given container/vector in descending order
- `reverse(first_iterator, last_iterator)`: To reverse a vector. ( if ascending -> descending  OR  if descending -> ascending)
- `*max_element (first_iterator, last_iterator)`: To find the maximum element of a vector.
- `*min_element (first_iterator, last_iterator)`: To find the minimum element of a vector.
- `accumulate(first_iterator, last_iterator, initial value of sum)`v Does the summation of vector elements
- `count(first_iterator, last_iterator,x)`: To count the occurrences of x in vector.
- `find(first_iterator, last_iterator, x)`: Returns an iterator to the first occurrence of x in vector and points to last address of vector ((name_of_vector).end()) if element is not present in vector.
- `binary_search(first_iterator, last_iterator, x)`: Tests whether x exists in sorted vector or not.
- `lower_bound(first_iterator, last_iterator, x)`: returns an iterator pointing to the first element in the range [first,last) which         has a value not less than ‘x’.
- `upper_bound(first_iterator, last_iterator, x)`: returns an iterator pointing to the first element in the range [first,last)                  which has a value greater than ‘x’. 
- `arr.erase(position to be deleted)`: This erases selected element in vector and shifts and resizes the vector elements accordingly.
- `next_permutation(first_iterator, last_iterator)`: This modified the vector to its next permutation.
- `prev_permutation(first_iterator, last_iterator)`: This modified the vector to its previous permutation. 

<hr>

- STLs covered In This Repository:
    - `vector`
    - `stack`
    - `queue`
    - `deque`
    - `priority_queue`
    - `pair`
    - `forward_list`
    - `list`
    - `map`
    - `multimap`
    - `unordered_multimap`
    - `set`
    - `multiset`
    - `unordered_multiset`


### References
[Click Me #1](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/)
<br>
[Click Me #2](https://www.geeksforgeeks.org/c-magicians-stl-algorithms/)