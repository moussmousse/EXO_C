#include <stdio.h>
#include <stdlib.h>


int sum_of_divisors(int x, size_t *count);

int main(void){
	int x = 27;
	size_t count;
	int res;
	res = sum_of_divisors(x, &count);
	printf("res = %d\n", res);
	printf("count = %zu\n", count);

	return 0;
}


int sum_of_divisors(int x, size_t *count){
	*count = 0;
	if (x == 0 || x == 1){
		*count = 1;
		return 1;
	}
	
	int k = x-1;
	int res = 0;
	while (k>0){
		if (x%k==0){
			res+=k;
			*count = *count +1;
		}
		k--;
	}
	return res;
}
