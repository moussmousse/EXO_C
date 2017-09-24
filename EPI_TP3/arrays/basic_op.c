#include <stdio.h>
#include <stdlib.h>


int sum_of_divisors(int x, size_t *count);
int array_sum(int *begin, int *end);


int main(void){
	/*
	int x = 27;
	size_t count;
	int res;
	res = sum_of_divisors(x, &count);
	printf("res = %d\n", res);
	printf("count = %zu\n", count);
	*/

	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int *begin = array;
	int *end = begin +10;
	int res = array_sum(&begin,&end);
	printf ("array sum = %d (sum of 1+2+3+4+5+6+7+8+9+10)\n",res);
	return 0;
}

int array_sum(int *begin, int *end){
	int res = 0;
	for(int i = 0;i < (begin - end); i++){
		res += *(begin + i);
	}
	return res;	
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
