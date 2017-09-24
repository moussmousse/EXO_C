#include <stdio.h>
#include <stdlib.h>


int sum_of_divisors(int x, size_t *count);

int main(void){
	int x = 28;
	size_t count;
	int res;
	res = sum_of_divisors(x, &count);
	printf("res = %d\n", res);
	printf("count = %zu\n", count);

	return 0;
}


int sum_of_divisors(int x, size_t *count){



}
