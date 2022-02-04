Sort 0 1 2
You are given an integer array containing only 0s, 1s and 2s. Write a solution to sort this array using one scan only.
You need to change in the given array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n (Array Size)
Line 2 : Array elements (separated by space)
Output Format :
Updated array elements in a single line (separated by space)
Constraints :
1 <= n <= 10^6
Sample Input 1:
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 
Sample Input 2:
5
0 1 0 0 1
Sample Output 2:
0 0 0 1 1 


/***************************************************** SOLUTION **************************************************************************/

void sort012(int *arr, int n)
{
    // Write your code here
    int i = 0;
    int nextZero = 0;
    int nextTwo = n - 1;

    while (i <= nextTwo)
    {
        if (arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[nextZero];
            arr[nextZero] = temp;
            nextZero++;
            i++;
        }
        else if (arr[i] == 2)
        {
            int temp = arr[i];
            arr[i] = arr[nextTwo];
            arr[nextTwo] = temp;
            nextTwo--;
        }
        else
        {
            i++;
        }
    }
}