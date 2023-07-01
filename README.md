The function leftRotate takes three parameters:

arr: An integer array that needs to be rotated.
k: The number of positions to rotate the array to the left.
n: The size of the array.
The code uses the rotate function from the C++ Standard Template Library (STL) to perform the rotation. The rotate function takes three arguments:

arr: The starting address of the array.
arr + (k % n): The position within the array from where the rotation should start. (k % n) is used to handle cases where k is larger than n, ensuring that the rotation stays within the bounds of the array.
arr + n: The end address of the array.
By using the rotate function, the array is effectively rotated by k positions to the left. This rotation is done in linear time, which means that it is efficient and doesn't require iterating over each element individually.# array-ques-1
Print left rotation of array in O(n) time and O(1) space
