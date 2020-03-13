# Purpose
---------
Learning the standard library functions, classes etc.


# # Parallels to Python


Given my exposure to various libraries in Python, 
and having an understanding of their utility.

It is of interest to understand if similar
capabilities can be found in C++ and also 
learn about functionalities not present in Python.

# # Link

The guide follows from:
https://www.learncpp.com/cpp-tutorial/16-2-stl-containers-overview/

# # Containers

1. Sequence Containers: vector, etc.. 
2. Associative Containers: set, mulltiset, map, multimap
3. Container Adapters: stack, queue, priority queue

# # Iterators

Iterate over container classes :P

-- Compared to for loops with iterating integers, 
   iterators go through the specified container and 
   provide results in an order based on the container 
   type. 
-- Also, functions are present within iterators whic
   normally would need to be manually coded if we
   wanted to achieve a specific functionality already
   available with an iterator

Each container function has four basic member functions,
which can be used with iterators:
a. begin()
b. end() - points past the end element !
c. cbegin() - const read only
d. cend() - const read only

given the four basic member functions:
a. container::iterator       : read/ write iterator 
b. container::const_iterator : read only