#include "hashing.h"

int main(void){
	hash *hashing = allocHashTable();

	printf("registration == %d\nnext == %d\n", hashing->table[0]->registration, hashing->table[0]->next);
	return(0);
}
