#include <stdio.h>
#define BIT(n) (1 << (n))
#define BIT_SET(v, mask) (v |= (mask) ) 
#define BIT_CLEAR(v, mask) (v &= ~(mask) ) 
#define IS_SET_ANY(v, mask) (v & (mask))
#define BIT_FLIP(v, mask) (

struct bad_struct {
  short s1;
  long l1;
  short s2;

};

struct good_struct {
  short s1;
  short s2;
  long l1;
};
union unit {
	char c;
	int i;
	long l;
};

unsigned int foo(int x[]){
	return sizeof(x);
}
void print_in_binary(unsigned int x){
	for( int i = 31; i > 0; i--){
		if(x & (1<<i)){
			printf("1");
		}
		else{
			printf("0");
		}
	}
	printf("\n");
}

int main() {
	struct good_struct gs;
	struct bad_struct bs;
 	
	printf("Size of good struct: %lu\n", sizeof(gs));
	printf("Size of bad struct: %lu\n", sizeof(bs));

	printf("Address of good struct: %p\n", &gs);
	printf("Address of good struct member: %p\n", &gs.s1);
	printf("Address of good struct member: %p\n", &gs.s2);
	printf("Address of good struct member: %p\n", &gs.l1);
	

	printf("Address of bad struct: %p\n", &bs);
	printf("Address of bad struct member: %p\n", &bs.s1);
	printf("Address of bad struct member: %p\n", &bs.l1);
	printf("Address of bad struct member: %p\n", &bs.s2);

	union unit u;
	printf("size of unit: %lu\n", sizeof(u));
	printf("Address of unit member: %p\n", &u.c);
	printf("Address of unit member: %p\n", &u.i);
	printf("Address of unit member: %p\n", &u.l);

	//scanf("%lu", &u.l);
	//printf("%c, %lu, %d, %s\n", u.c, u.l, u.i, &u.l);

	int x[10];
	printf("Size of array: %lu\n", sizeof(x));
	printf("Size of foo: %lu\n", sizeof(foo(x)));

	int y[20];
	printf("Size of array: %lu\n", sizeof(y));
	printf("Size of foo: %lu\n", sizeof(foo(y)));

	int z[30];
	printf("Size of array: %lu\n", sizeof(z));
	printf("Size of foo: %lu\n", sizeof(foo(z)));
	
	unsigned int BIT_TEST = BIT(3);
	print_in_binary(BIT_TEST);
	unsigned int mask = 0x0000FF00;
	BIT_SET(BIT_TEST, mask);
	print_in_binary(BIT_TEST);
	BIT_CLEAR(BIT_TEST, mask);
	print_in_binary(BIT_TEST);

	

	

	
	





}
