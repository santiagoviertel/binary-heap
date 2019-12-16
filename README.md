# Binary Heap

The implementation of a binary heap with the __max-heap__ property.
The class Heap inherits __std::vector__ and implements the three main operations of binary heaps: __top__, __push__ and __pop__.
The __makeHeap__ method changes the sequence of the elements in the vector so that it has the max-heap property.

Template is used, providing the functionality for any class.
In this context, the method __operator<__ must be overloaded.
Furthermore, a __min-heap__ can be implemented through __operator<__ overloading.

- __Platforms__: Linux and Windows __(not tested)__
- __Used libraries__: STL
- __Programming language__: C++
- __Last code change__: 12/16/2019