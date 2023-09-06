//copy the entire text of this document and paste into a C++ compiler and Run

// C++ program to rotate an array left by
// d elements
#include <iostream>
using namespace std;

/*Function to left Rotate arr[] of
size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
   // note that index 0 is 1st element of array.
   int temp = arr[0], i;
   for (i = 1; i <n; i++)
       arr[i-1] = arr[i ];
   arr[n-1] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
   for (int i = 0; i < d; i++)
      leftRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
   for (int i = 0; i < n; i++)
     cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main(int argc, char *argv[])
{
   int rotateBy = 2; //2 is decimal for 0010 in 4 bits 
   if (argc > 1) {
      rotateBy = atoi(argv[1]);
   };
   cout << "Rotating left by " << rotateBy << " of ";
   //try rotating left by various amounts between 0-15 as per lab1 requirements
   int arr[] = { 1, 0, 0, 0 }; //try various 4 bit values here
   int n = sizeof(arr) / sizeof(arr[0]);

   // Function calling and printing results
   printArray(arr, n);
   cout << " gives ";
   leftRotate(arr, rotateBy, n);
   printArray(arr, n);

   return 0;
}

