
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct node node;

struct node {
	void *data;
	node *next;
};

typedef struct {
	node *root;
	int size;
} dsl_linkedlist;


void dsl_ll_init( dsl_linkedlist* ll);


node* dsl_ll_new_Node(void* pd, size_t size );


void dsl_ll_free_Node(node *pn) ;


//return new root
void dsl_ll_insert_head( dsl_linkedlist* ll, void* pd, size_t size ) ;


void dsl_ll_delete_head( dsl_linkedlist* ll ); 

//for debug usage
void print_ll_as_int( dsl_linkedlist *ll);





#endif
