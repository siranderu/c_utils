#ifndef LISTINT_H_INCLUDED
#define LISTINT_H_INCLUDED

	typedef struct list_int{  
        struct list_int* next_node;
		int* data;
    }list_int;
	
    // FUNCTIONS    
	void list_int_add(list_int* head, int dat);
	
	list_int* list_int_get_node(list_int* head, int loc);
	
	void list_int_print_list(list_int* head);
	
	void list_int_delete_elem(list_int** head, int loc);
	
	//returns data of item at loc
	int list_int_get(list_int* head, int loc);

	//returns the list as a char array
	const char * list_int_as_string(list_int* head);

	int list_int_length(list_int* head);

#endif