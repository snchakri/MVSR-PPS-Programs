#include <stdlib.h>
#include <bool.h>

#define EMPTY head==NULL;

typedef union MULTITYPE { // multi datatype consisting of all 4 primitive types
	int intVal;
	float floatVal;
	double doubleVal;
	char charVal;
} _multitype;

typedef struct NODE { // graph element for singly linked unidirectional edge
	_multitype data; // vertex
    _node* next; // edge
} _node;

typedef struct SINGLY_LINKED_LIST { // data structure unified control variable
    int size; // size of linked list (excluding head)
    _node *head; // head pointer conisting of the chain
    bool sorted; // flag to represent status of sorting
} _SinglyLinkedList;

// create linked list data structure wtih given size
_SinglyLinkedList createLinkedList(int size) {
    _SinglyLinkedList ll;
    _node *prev == ll.head, *temp == NULL;
    
    ll.size = size;
    ll.sorted = false;

    for (int i = 0; i <= size; i++) {
        temp = malloc(sizeof(_node));
        prev->next = temp;
        prev = temp;
    }

    return ll;
}
