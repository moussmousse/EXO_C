/* Home Work */
 
# include <stdlib.h>
 
# include "math_func.h"
 
unsigned long fact(unsigned long n) {
  unsigned long  res = n;
  if (n == 0)
	  return 1;
  while (n>1){
  	n-=1;	  
  	res*=n;
  }
  return res;
}
 
unsigned long fibo(unsigned long n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibo(n-1)+fibo(n-2);
}
 
unsigned long int_sqrt(unsigned long n) {
	float x = 1;
	for (int i = 0 ; i < 10 ; i++){
		x = (x + (n/x))/2;
	}
	return x;
}
 
unsigned long digit_number(unsigned long n) {
	int cpt = 1;
	while (n >= 10){
		n=n/10;
		cpt++;
	}
	return cpt;
}
 
unsigned long binary_digit_number(unsigned long n) {
	int cpt = 1;
	while (n >= 2){
		n=n/2;
		cpt++;
	}
	return cpt;
}
 
unsigned long power_of_2(unsigned long n) {
	return 1 << n;
}
 
unsigned long divisor_sum(unsigned long n) {
	if (n == 0 || n == 1)
		return 1;
	int k = n-1;
	int res = 0;
	while (k>0){
		if (n%k==0)
			res+=k;
		k--;
	}
	return res;
}
