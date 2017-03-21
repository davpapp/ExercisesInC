/* 
C implementation of a Linked List.
Based on an example from http://www.learn-c.org/en/Linked_lists

Author: David Papp
Class: Software Systems
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
} Node;


/* Makes a new node structure.
 * 
 * val: value to store in the node.
 * next: pointer to the next node
 *
 * returns: pointer to a new node
 */
Node *make_node(int val, Node *next) {
    Node *node = malloc(sizeof(Node));
    node->val = val;
    node->next = next;
    return node;
}


/* Prints the values in a list.
 * 
 * list: pointer to pointer to Node
 */
void print_list(Node **list) {
    Node *current = *list;

    printf("[ ");
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }
    printf("]\n");
}


/* Removes and returns the first element of a list.
 * 
 * list: pointer to pointer to Node
 *
 * returns: int or -1 if the list is empty
 */
int pop(Node **list) {
    //Node *first = *list;
    return 0;
}


/* Adds a new element to the beginning of the list.
 * 
 * list: pointer to pointer to Node
 * val: value to add
 */
void push(Node **list, int val) {
	*list = make_node(val, *list);
}


/* Removes the first element with the given value
 * 
 * Frees the removed node.
 *
 * list: pointer to pointer to Node
 * val: value to remove
 *
 * returns: number of nodes removed
 */
int remove_by_value(Node **list, int val) {
	if (*list == NULL) {
		return 0;
	}
    int count = 0;
    Node* current = *list;
    while (current->next != NULL) {
    	if (current->next->val == val) {
    		current->next = current->next->next;
    		count++;
    	}
    	else {
    		current = current->next;
    	}
    }
    return count;
}


/* Reverses the elements of the list.
 *
 * Does not allocate or free nodes.
 * 
 * list: pointer to pointer to Node
 */
void reverse(Node **list) {
    Node* pre = NULL;
    Node* current = *list;
    Node* post = NULL;
    while (current != NULL) {
    	post = current->next;
    	current->next = pre;
    	pre = current;
    	current = post;
    }
    *list = pre;
}


int main() {
    Node *head = make_node(1, NULL);
    head->next = make_node(2, NULL);
    head->next->next = make_node(3, NULL);
    head->next->next->next = make_node(4, NULL);

    Node **list = &head;
    print_list(list);

    int retval = pop(list);
    print_list(list);

    push(list, retval+10);
    print_list(list);

    remove_by_value(list, 3);
    print_list(list);

    remove_by_value(list, 7);
    print_list(list);

    reverse(list);
    print_list(list);

    // Test with NULL pointer
    Node *head_null = NULL;
    Node **null_list = &head_null;
    print_list(null_list);
    remove_by_value(null_list, 3);
    print_list(null_list);
    reverse(null_list);
    print_list(null_list);
}
