/*
	PROGRAM BY: 2451-24-749-031 ~ S.N.Chakri
	PROGRAM: Module/library for stacks using style of arrays
*/
#include <bool.h>
#include <stdlib.h>
#include <stdio.h>


/*
	a union type for embedding all primitive data types for using a variable to have any type of data
*/
typedef union multitype {
	int int_val;
	float float_val;
	double double_val;
	char char_val[sizeof(double)]; // making sure character and string is supported with a limit of size of double
} MULTI;

/*
	prototyping functions for stackArray to mimic methods of a class
*/
bool is_empty_fn(MULTI*); 
bool is_full_fn(MULTI*);
bool push_fn(MULTI*, MULTI);
bool insert_fn(MULTI*, MULTI, int);
bool pop_fn(MULTI*);
bool remove_fn(MULTI*, int);
MULTI peek_fn(MULTI*, int);

/*
	a struct type for embedding all stack using array data and functions/methods to mimic a class
*/
typedef struct stackArray {
	int size = 0; // initializing default size 0 for memory safety
	int top = -1; // default -1 for memory safety
	MULTI *atom; // pointer that holds location of the array in heap
	bool (*push) (MULTI*, MULTI) = push_fn; //P2F (pointer to function) to facilitate push
	bool (*insert) (MULTI*, MULTI, int) = insert_fn;
	bool (*pop) (MULTI*) = pop_fn;
	bool (*remove) (MULTI*, int) = remove_fn;
	bool (*is_empty) (MULTI*) = is_empty_fn;
	bool (*is_full) (MULTI*) = is_full_fn;
	MULTI (*peek) (MULTI*, int) = peek_fn;
} STACK_ARRAY;

STACK_ARRAY init_stackArray(int size) {
	STACK_ARRAY stArr_var;
	if (size > 0)
		stArr_var.size = size;
	else
		printf("\nERROR\tSize cannot be non-positive");
		return NULL;
	
	stArr_var.atom = malloc(sizeof(MULTI)*size);
	
	return stArr_var;
}

bool is_empty_fn(MULTI* stArr_var) {
	int success = 0; // default status false
	
	if (stArr_var->size > stArr_var->top)
		success = 1;

	if (success) // returning status
		return true;
	else 
		return false;
}

bool is_full_fn(MULTI* stArr_var) {
	int success = 0; // default status false
	
	if (stArr_var->size == stArr_var->top)
		success = 1;

	if (success) // returning status
		return true;
	else 
		return false;
}
