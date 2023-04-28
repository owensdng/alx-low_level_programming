- Individually linked lists 
 
 Tests ✔️ 
 * Tests: This folder is for testing purposes. 
 Main file 📁 
 * lists.h: header file containing definitions and prototypes for all types and functions written for the project. Type /file definition/prototype 
 * struct list_s • char *str 
 * unsigned int len 
 * struct list_s *next 
 typedef list_t struct list_s 
 0-printlist.c size_t printlist (constant list_t *h); 
 1-list_len.c size_t list_len(const list_t *h); 
 2-add_node.c list_t *add_node(list_t **good, const char *str); 
 3-add_node_head.c list_t *add_node_head (list_t **head, const char *str); 
 
-free_list.c void free_list (list_t *head) 
 
 Tasks 📃 
 * 0. Print the list 
 * 0-print_list.c: C function that prints all  elements of list_t. * If str is NULL, the function prints [0] (zero). * 1. List length 
 * 1-list_len.c: C function that returns the number of elements in a linked list_t. * 2. Add a node 
 * 2-add_node.c: C function that adds a new node a to the beginning  of list_t. * If the function fails - returns NULL.  * Else - returns the address of the new element.  * 3. Add a knot at the end 
 * 3-add_node_end.c: C function that adds a new node to the end of a linked list_t. * If the function fails - returns NULL.  * Else - returns the address of the new element.  * 
. Free list 
 * 
-free_list.c: C function that frees list_t. * 5.  Hare and tortoise 
 * 100-first.c: C function that prints You've been beaten! and yet you must promise,\n I carried my house on my back!\n before the main action is accomplished. *6. Real programmers can write assembly code in any language 
 * 101-hello_holberton.asm: 6
-act assembler that prints Hello Holberton followed by a newline using only  printf without breaks.
