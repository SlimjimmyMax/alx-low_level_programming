# Search Algorithms

A search algorithm is designed to solve a search problem by retrieving information stored within a particular data structure or calculated in the search space of a problem domain, with either discrete or continuous values.

## Types of Search Algorithms

Search algorithms can be classified based on their mechanism of searching into three types:

1. **Linear Search:** Linear search algorithms check every record for the one associated with a target key in a linear fashion.

2. **Binary Search:** Binary, or half-interval, searches repeatedly target the center of the search structure and divide the search space in half.

3. **Hashing:** Hashing directly maps keys to records based on a hash function.

## Comparison Search Algorithms

Comparison search algorithms improve on linear searching by successively eliminating records based on comparisons of the keys until the target record is found. They can be applied on data structures with a defined order.

## Digital Search Algorithms

Digital search algorithms work based on the properties of digits in data structures by using numerical keys.

## Computational Complexity

Algorithms are often evaluated by their computational complexity, or maximum theoretical run time. For example, binary search functions have a maximum complexity of O(log n), or logarithmic time. In simple terms, the maximum number of operations needed to find the search target is a logarithmic function of the size of the search space.

## Space Complexity

Space complexity is the total space taken by an algorithm with respect to the input size. It includes both auxiliary space and space used by the input. 

The term *auxiliary space* refers to the extra space or temporary space used by an algorithm. It is often confused with space complexity.

For example, when comparing standard sorting algorithms on the basis of space, auxiliary space would be a better criterion than space complexity. Merge Sort uses O(n) auxiliary space, Insertion sort, and Heap Sort use O(1) auxiliary space. However, the space complexity of all these sorting algorithms is O(n).

Space complexity is a parallel concept to time complexity. If we need to create an array of size n, it will require O(n) space. If we create a two-dimensional array of size n*n, it will require O(n^2) space.
