#include <stdio.h>

/*  1. Taking size of array into 'n'
    2. Taking input into array 'arr' of double datatype
    3. Accept used input into the array
    4. Creating moving pointer, of name moving_ptr; this pointer will move along the array by each iteration
    5. Creating a pointer of name min_ptr, which will point to the minimum value of array
    6. Creating a pointer of name max_ptr, which will point to the maximum value of array
*/

int main()  {
    int n;
    printf("\nEnter size of array: ");
    scanf("%d",&n);

    double arr[n];
    printf("\nEnter the elements into array: \n");
    for (int i=0; i<n; i++)
        scanf("%lf",&arr[i]);
    
    double *moving_ptr;
    double *min_ptr = &a[0]; //Assuming the initial element of array as minimum
    double *max_ptr = &a[0]; //Assuming the initial element of array as maximum

    for (int i=0; i<n; i++)  {
        moving_ptr = &arr[i];
        if (*min_ptr > *moving_ptr)
            min_ptr = moving_ptr;
    }

    for (int i=0; i<n; i++)  {
        moving_ptr = &arr[i];
        if (*max_ptr < *moving_ptr)
            max_ptr = moving_ptr;
    }

    printf("\nMinimum valued element in array: %lf\nAddress of the element: %p",*min_ptr,min_ptr); //Returning the minimum value on to screen
    printf("\n\nMaximum valued element in array: %lf\nAddress of the element: %p",*max_ptr,&max_ptr);

    return 0;
}
