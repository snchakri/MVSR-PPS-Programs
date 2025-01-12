#include <stdio.h>
#include <stdlib.h>

/*
    Dynamic Memory Allocation Demo
        1. Assuming max storage space available (from heap section) as 29 bytes;
            Using Malloc() function to demonstrate usage of contigious space
        2. Assuming max storage space available (from heap section) as 29 bytes;
            Using Calloc() function to demonstrate usage of block-wise space
        3. Freeing space of unnecessary elements from array of int type;
            Using Free() function to demonstrate converting chosen amount of space from stack to heap
        4. Using extra space on choice to extend array of double datatype;
            Using Realloc() function to demonstrate extension of memory allocated at compile-time
*/

void Demo_malloc()  {
    //Assuming max storage space available (from heap section) as 29 bytes;

    int *p_int_array;
    p_int_array = (int *) malloc(20); //5 blocks x Size Of int (4 bytes) = 20 bytes
    if (p_int_array != NULL)  {
        //Visualizing this space/storage as an array
        printf("\nValues in storage allocated using malloc(), when unitialized [may contain garbage values]:");
        for (int i=0; i<5; i++)
            printf("\narray(%d) = %d",i,p_int_array[i]);
    }
    else
        printf("\nAllocation failed from malloc!");
    
    double *p_double_var;
    p_double_var = (double *) malloc(8); //1 block x Size Of double (8 bytes) = 8 bytes
    if (p_double_var != NULL)  {
        printf("\nBefore initializing = %lf",*p_double_var);
        *p_double_var = -2.9;
        printf("\nAfter initializing = %lf",*p_double_var);
    }
    else
        printf("\nAllocation failed from malloc!");
    
    char *p_char_var;
    p_char_var = (char *) malloc(1); //1 block x Size Of char (1 bytes) = 1 bytes
    if (p_char_var != NULL)  {
        printf("\nBefore initializing = %c",*p_char_var);
        *p_char_var = 'c';
        printf("\nAfter initializing = %c",*p_char_var);
    }
    else
        printf("\nAllocation failed from malloc!");
}

void Demo_calloc()  {
    //Assuming max storage space available (from heap section) as 29 bytes;

    int *p_int_array;
    p_int_array = (int *) calloc(5, sizeof(int)); //5 block x Size Of int (4 bytes) = 20 bytes
    if (p_int_array != NULL)  {
        //Visualizing this space/storage as an array
        printf("\nValues in storage allocated using calloc(), when unitialized will always be 0:");
        for (int i=0; i<5; i++)
            printf("\narray(%d) = %d",i,p_int_array[i]);
    }
    else
        printf("\nAllocation failed from calloc!");

    double *p_double_var;
    p_double_var = (double *) calloc(1, sizeof(double)); //1 block x Size Of double (8 bytes) = 8 bytes
    if (p_double_var != NULL)  {
        printf("\nBefore initializing = %lf",*p_double_var);
        *p_double_var = -2.9;
        printf("\nAfter initializing = %lf",*p_double_var);
    }
    else
        printf("\nAllocation failed from calloc!");

    char *p_char_var;
    p_char_var = (char *) calloc(1, sizeof(char)); //1 block x Size Of char (1 bytes) = 1 bytes
    if (p_char_var != NULL)  {
        printf("\nBefore initializing = %c",*p_char_var);
        *p_char_var = 'c';
        printf("\nAfter initializing = %c",*p_char_var);
    }
    else
        printf("\nAllocation failed from calloc!");
}

void Demo_free()  {
    int *random_num;
    random_num = (int *) malloc(10 * sizeof(int)); //Allocating memory using malloc() or calloc()
    if (random_num != NULL)  {
        int n;
        printf("\nEnter number of elements: ");
        scanf("%d",&n);

        printf("\nEnter elements into array:\n");
        for (int i=0; i<n; i++)  
            scanf("%d",&random_num[i]);
    }
    else
        printf("Failed to allocate memory using malloc!");

    //Freeing all the memory allocated to random_num
    free(random_num);
}

void Demo_realloc()  {
    int n1;
    printf("\nEnter initial number of elements in array: ");
    scanf("%d",&n1);

    //Allocating initially required amount of space using malloc() or calloc()
        int *array;
        array = (int *) calloc(n1, sizeof(int));
        if (array != NULL) {
            printf("\nThe elements in array:");
            for (int i=0; i<n1; i++)
            printf("\narray(%d) = %d",i,array[i]);
        }
        else  {
            printf("\nAllocation failed!");
            return;
        }
    
    int n2;
    printf("\nEnter new number of elements in array: ");
    scanf("%d",&n2);

    //Reallocating memory to array based on new space value using realloc()
        array = realloc(array, n2 * sizeof(int));
        if (array != NULL)  {
            printf("\nThe elements in array:");
            for (int i=0; i<n2; i++)
            printf("\narray(%d) = %d",i,array[i]);
        }
        else  {
            printf("\nRe-Allocation failed!");
            return;
        }
}


int main()  {
    Demo_malloc();
    Demo_calloc();
    Demo_free();
    Demo_realloc();
}
