#include <stdio.h>
#include <stdlib.h>

typedef struct {
	unsigned int id;
	char name[20];
	unsigned float value;
	unsigned int quantity;
} Product;

void *allocate(int items, long int type);

int main (void) {
	Product *products = (Product *) allocate(5, sizeof(Product));
	Product p = {1, "computador", 250.90, 10};
	products[0] = p;

	return(0);
}

void *allocate(int items, long int type) {
	void *memory;

	if ((memory = malloc(items * type)) == NULL) {
		printf("ERROR: not enough memory!\n");
		exit(1);
	}

	return(memory);
}