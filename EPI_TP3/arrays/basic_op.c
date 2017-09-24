#include <stdio.h>
#include <stdlib.h>


int sum_of_divisors(int x, size_t *count);
int array_sum(int *begin, int *end);
void array_reverse (int *begin, int *end);
void swap (int *a, int *b);
void print_array(int *begin,int *end);

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
	/*
	int res = array_sum(begin,end);
	printf ("array sum = %d (sum of 1+2+3+4+5+6+7+8+9+10)\n",res);
	*/
	print_array(begin,end);
	array_reverse(begin,end);
	print_array(begin,end);
	return 0;
}


void print_array(int *begin, int *end){
	for(;begin<end;++begin)
		printf("%d,",*begin);
	printf ("\n");
}

void swap (int *a, int *b){
	int c = *a;
	*a = *b;
	*b = *a;
}

void array_reverse (int *begin, int *end){
	int* mid =begin+(end - begin)/2;
	for (; begin < mid; ++begin){
		swap ((begin),(--end));
	}
}

int array_sum(int *begin, int *end){
	int res = 0;
	for(;begin < end; ++begin){
		res += *begin;
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
