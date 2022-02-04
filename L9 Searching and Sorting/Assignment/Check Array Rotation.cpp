Check array rotation
Given an integer array, which is sorted (in increasing order) and has been rotated by some number k in clockwise direction. Find and return the k.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Integer k
Constraints :
0 <= n <= 1000
Sample Input 1:
6
5 6 1 2 3 4
Sample Output 1:
2
Sample Input 2:
5
3 6 8 9 10
Sample Output 2:
0


/***************************************************** SOLUTION **************************************************************************/


int arrayRotateCheck(int *input, int size)
{
    // Write your code here
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (input[i] < input[i + 1])
        {
            count++;
        }
        else
        {
            return (count + 1);
        }
    }

    return 0;
}