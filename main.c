/*
	PROGRAM BY: 2451-24-749-031 ~ S.N.Chakri
	PROGRAM: Module/library for using stacks using arrays/linked list modules during runtime
*/

#include <stdio.h>
#include "array_style.c"
#include "linkedlist_style.c"
#include <stdlib.h>
#include <bool.h>

// Menu for using Stacks using arrays at runtime
void menu_stackArray() {
	int option = 0;
	while (option != 8) {
		printf("\nMENU\n\t1. Initialize New Stack using arrays style\n\t2. Extend size of current stack\n\t3. Access current Stack element\n\t4. Pop current stack element\n\t5. Remove current stack element at given index\n\t6. Push given element to current stack\n\t7. Insert given element at given index to current stack\n\t8. Exit");
		printf("\nENTER YOUR OPTION: ");
		scanf("%d", &option);
		switch(option) {
			case 1: break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break:
			case 6: break;
			case 7: break;
			case 8: break;
			default: printf("\nERROR: \tENTER A VALID OPTION\n\t\tGIVEN OPTION: %d", option);
		}
	}
	
	return;
}

int main() {
	int option;
	printf("\n
	return 0;
}
