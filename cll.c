#include <stdio.h>
#include <stdlib.h>

#define EMPTY_LIST cll.head->next == cll.head
#define ALLOC_FAILED \ // Failure handling when memory allocation failed
    if (new == NULL) { \ 
        printf("\nAllocation of memory failed!"); \ 
        return cll; \
    }

typedef enum BOOLEAN {false, true} bool; // defining boolean datatype

typedef union MULTITYPE { // a new type to store any type of primitive data type in a single variable
    int intVal;
    float floatVal;
    double doubleVal;
    char charVal;
} _multitype;

typedef struct NODE { // node/vertex of acyclic linear graph or linked list
    _multitype data;
    struct NODE* next;
} _node;

typedef struct CIRCULAR_LINKED_LIST { // control variable to store all attributes of CLL
    int size;
    _node* head;
    bool sorted;
} _CircularLinkedList;

_CircularLinkedList createCLL();
_CircularLinkedList insertStartCLL(_multitype, _CircularLinkedList);
_CircularLinkedList insertEndCLL(_multitype, _CircularLinkedList);
_CircularLinkedList insertCLL(_multitype, int, _CircularLinkedList);
_CircularLinkedList delStartCLL();
_CircularLinkedList delEndCLL();
_CircularLinkedList delCLL();
_CircularLinkedList displayCLL();
_CircularLinkedList sortCLL();
_CircularLinkedList searchCLL();

_CircularLinkedList (*insertBeg)(_multitype, _CircularLinkedList) = &insertStartCLL;
_CircularLinkedList (*insertLast) (_multitype, _CircularLinkedList) = &insertEndCLL;

_CircularLinkedList createCLL() {
    /* 1. Initialize a CLL control variable with default assignments to data attributes
       2. Allocate memory in heap to head pointer, and conduct self-linking
       3. Returns the control variable */
    _CircularLinkedList cll;
    
    cll.size = 0;
    cll.sorted = false;

    cll.head = malloc(sizeof(_node));

    ALLOC_FAILED

    cll.head->next = cll.head; // Self-linking the head node by default
    cll.head->data.charVal = '\0'; // Default value of data element of head to null

    return cll;
}

_CircularLinkedList insertStartCLL(_multitype data, _CircularLinkedList cll) {
    /* 1. Insert an element consisting of given data
       2. Position: Default - at the beginning of list (after head pointer and before first existing element)
       3. Increase the value of size by 1 on success
       4. Return the modified control variable
    */

    _node* new = malloc(sizeof(_node)); // creates a new variable in heap and stores address

    ALLOC_FAILED

    new->data = data; // storing given data into the new variable's data field
    
    if (EMPTY_LIST) { // Case: When list is empty
        cll.head->next = new; // first, link head to new element
        new->next = cll.head; // then link the new element back to head to complete the circle
    }
    else {
        _node* temp = cll.head->next; // store the chain in temp first
        cll.head->next = new; // link the head to new node
        new->next = temp; // link the new node to the start of chain
    }

    cll.size++;

    return cll;
}

_CircularLinkedList insertEndCLL(_multitype data, _CircularLinkedList cll) {
    /* 1. Insert an element consisting of given data
       2. Position - Default, at the ending of list (before head pointer and after last existing element)
       3. Increase the value of size by 1 on success
       4. Returns the modified control variable
    */
    _node* new = malloc(sizeof(_node));

    ALLOC_FAILED

    new->data = data;

    if (EMPTY_LIST) {
        cll.head->next = new;
        new->next = cll.head;
    }
    else {
        _node* temp = cll.head->next;

        while (temp->next != cll.head)
            temp = temp->next; // keep traversing until last node

        temp->next = new; // store new node in the last node link
        new->next = cll.head; // link the new node to head to complete the circle
    }

    cll.size++;

    return cll;
}

_CircularLinkedList insertCLL(_multitype data, int pos, _CircularLinkedList cll) {
    _node* new = malloc(sizeof(_node));

    ALLOC_FAILED

    if (EMPTY_LIST && (pos > 1)) {
        printf("\nInvalid operation for given position - %d, as the list is empty!", pos);
        return cll;
    }
    
    else {
        new->data = data;

        if (pos == 1)
            (*insertBeg)(data, cll);

        else if (pos == cll.size)
            (*insertLast)(data, cll);

        else {
            _node* temp = 
            for (int i = 1; i = pos - 1; i++) {

            }
        }
    }

    cll.size++;

    return cll;
}
