#0x1E. C - Search Algorithms

***ALX Software Engineering Programme Project***

#Learning Objectives
At the end of this project, I learnt the following concepts:

What is a search algorithm
What is a linear search
What is a binary search
What is the best search algorithm to use depending on your needs


Tasks 
0. Linear search

0-linear.c: Write a function that searches for a value in an array of integers using the Linear search algorithm

1. Binary search
1-binary.c: Write a function that searches for a value in a sorted array of integers using the Binary search algorithm


2. Big O #0

2-O: Time complexity (worst case) of a linear search in an array of size n?

3. Big O #1

3-O: Text file containing the worst case space complexity of iterative linear search.

4. Big O #2

4-O: Text file containing worst case case time complexity of binary search.

5. Big O #3

5-O: Text file containing the worst case space complexity of binary search.

6. Big O #4

6-O: Text file containing the space complexity of the following algorithm:
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
		}
		return (map);
}

7. Jump search

100-jump.c: C function that  searches for a value in a sorted array of integers using the Jump search algorithm

8. Big O #5

101-O: Ttime complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

9. Interpolation search

102-interpolation.c: C function that searches for a value in a sorted array of integers using interpolation search. 

10. Exponential search

103-exponential.c: C function that searches for a value in a sorted array of integers using exponential search.
Uses powers of 2 as exponential ranges to search the array. 

11. Advanced binary search

104-advanced_binary.c: C function that searches for a value in a sorted array of integers using advanced binary search. 

12. Jump search in a singly linked list

105-jump_list.c: C function that searches for a value in a listint_t sorted singly linked list of integers using jump search. 

13. Linear search in a skip list

106-linear_skip.c: C function that searches for a value in a skiplist_t sorted skipped linked list of integers using jump search. 
A
14. Big O #6

107-O: Text file containing the average time complexity of jump search in a singly linked list of size n, using step = sqrt(n).

15. Big O #7

108-O: Text file containing the average time complexity of jump search in a sorted skipped linked list of of size n, using step = sqrt(n).
