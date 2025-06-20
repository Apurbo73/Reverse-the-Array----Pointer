﻿# Reverse-the-Array----Pointer

Reversing an array using pointers involves swapping elements from the start and end of the array while moving pointers inward. You begin with one pointer at the first element and another at the last. Then, in a loop, you swap the values they point to and increment the first pointer while decrementing the second until they meet or cross.

This method is efficient because it performs the reversal in-place, using constant space (no extra array needed). It takes linear time, O(n), since each element is visited once. Using pointers makes it especially useful in languages like C or C++, where memory management and pointer arithmetic are common.
