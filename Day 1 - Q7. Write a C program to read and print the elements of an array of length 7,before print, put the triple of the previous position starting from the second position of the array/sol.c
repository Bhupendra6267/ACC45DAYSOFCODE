// Q7. Write a C program to read and print the elements of an array of length 7,
//  before print, put the triple of the previous position starting from the second
//   position of the array.
// For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 
// and 162
// Expected Output:
// Input the first number of the array: 5
// n[0] = 5
// n[1] = 15
// n[2] = 45
// n[3] = 135
// n[4] = 405

#include<stdio.h>
void main() {
    int arr[7],i,n;
    printf("Input the first number of the array: ");
    scanf("%d", &n);
    arr[0]=n;
    printf("n[0] = %d\n",n);
    for(i=1;i<7;i++){
        arr[i]=arr[i-1]*3;
        printf("n[%d] = %d\n",i,arr[i]);
    }  
}
