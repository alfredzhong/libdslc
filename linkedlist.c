#include<dsl.h>

void dsl_ll_init( dsl_linkedlist* ll) {
	ll->root = NULL;
	ll->size = 0;
}



node* dsl_ll_new_Node(void* pd, size_t size ) {
	if (pd == NULL)
		return NULL;
	node* pn = (node*)malloc( sizeof(node) );
	pn->data = (void*)malloc(size);
	//deep copy pd
	memcpy(pn->data, pd, size);
	pn->next = NULL;
	return pn;
}



void dsl_ll_free_Node(node *pn) {
	free(pn->data);
	free(pn);
}


//return new root
void dsl_ll_insert_head( dsl_linkedlist* ll, void* pd, size_t size ) {
	//empty tree
	node* ret = NULL;
	//node *tmp = NULL;

	ret = dsl_ll_new_Node(pd, size);
	ret->next = ll->root;
	ll->root = ret;

	++(ll->size);

}


void dsl_ll_delete_head( dsl_linkedlist* ll ) {
	node *tmp;

	//empty list, return NULL
	if (ll->root == NULL) {
		return;
	}

	tmp = ll->root;
	ll->root = ll->root->next;
	dsl_ll_free_Node(tmp);
	--(ll->size);
}

void print_ll_as_int( dsl_linkedlist *ll) {
	node *tmp;
	printf("[   ");
	for (tmp=ll->root; tmp!=NULL; tmp=tmp->next) {
		printf( "%d   ", *((int*)(tmp->data)) );
	}
	printf("   ]\n ");
}





