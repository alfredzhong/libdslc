
#include <dsl.h>


//test main
int main() {

	dsl_linkedlist ll;
	dsl_ll_init(&ll);

	int d = 10;
	//node* root = dsl_ll_new_Node( (void*)(&d), sizeof(int) );
	dsl_ll_insert_head( &ll, (void*)(&d), sizeof(int) );
	d = 20;
	dsl_ll_insert_head( &ll, (void*)(&d), sizeof(int) );
	d = 7;
	dsl_ll_insert_head( &ll, (void*)(&d), sizeof(int) );

	print_ll_as_int( &ll);
	printf("ll size = %d\n",  ll.size);


	printf("\n");
	dsl_ll_delete_head( &ll);
	print_ll_as_int( &ll);
	printf("ll size = %d\n",  ll.size);


	printf("\n");
	dsl_ll_delete_head( &ll);
	print_ll_as_int( &ll);
	printf("ll size = %d\n",  ll.size);


	printf("\n");
	dsl_ll_delete_head( &ll);
	print_ll_as_int( &ll);
	printf("ll size = %d\n",  ll.size);


	printf("\n");
	dsl_ll_delete_head( &ll);
	print_ll_as_int( &ll);
	printf("ll size = %d\n",  ll.size);


	printf("\n");
	dsl_ll_delete_head( &ll);
	print_ll_as_int( &ll);
	printf("ll size = %d\n",  ll.size);

	//dsl_ll_free_Node(root);
	return 0;
}



