# Standard Template library(stl)

# Components of the STL

- Containers 
- Iterators 
- Algorithm

# Container types 
Containers are used to manage objects of a given type. 

- Sequence containers 
- Associative containers 
- Container adapters 

# Sequence Containers 

## The Three Sequence containers:

- Vector
- Deque
- list

# Vector
- Stores and manages objects in a dynamic array. 

```cpp
#include<vector>
```

* To define an object of type vector. 

```cpp
vector<int> intList;
vector<string> stringList; 

```





| Expressions             | Effect                                                    |
| ----------------------- | --------------------------------------------------------- |
| vecList.at(index)       | Return the element at the position specified by index     |
| vecList[index]          | Return the element at the position specified by index.    |
| vecList.front()         | Returns the first element                                 |
| vecList.back()          | Returns the last element                                  |
| vecList.clear()         | Deletes all elements from the container.                  |
| vecList.erase(position) | Deletes the element at the position specified by position |
| vecList.insert()        |                                                           |
