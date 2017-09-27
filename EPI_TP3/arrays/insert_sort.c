#include <stdio.h>
#include <stdlib.h>

void array_shift(int *begin, int *end);
void array_insert(int *begin, int *end, int x);
void array_insert_bin(int *begin, int *end, int x);
void array_insert_sort(int *begin, int *end);
void array_copy(int *dst, int *begin, int *end);
void print_array(int *begin, int *end);

int main (){
  int array[14]={1,9,5,4,7,8,6,2,7,3,6,8,99,1};
  int *begin=array;
  int *end=begin+14;
  printf("------Array to sort------\n");
  print_array(begin,end);
  printf("\n----array insert sort----\n");
  array_insert_sort(begin,end);
  print_array(begin,end);

}

void print_array(int *begin, int *end){
  for(;begin<end;++begin)
    printf("%d",*begin);
  printf("\n");
}

void array_rshift(int *begin, int *end){
  end--;
  for (;begin<end;--end)
    *end=*(end-1);
}


void array_insert(int *begin, int *end, int x){
  while(begin<end){
    if(x>=*begin){
      array_rshift(begin,end);
      *begin = x;
    }
    ++begin;
  }
}

void array_insert_bin(int *begin, int *end, int x){
  int *left = begin;
  int *right = end;
  int *mid = begin + (end-begin)/2;
  while (left != right && *mid != x && left != mid){
    if (*mid > x)
      left = mid;
    else
      right = mid;
    mid=left+(right-left)/2;
  }
  array_rshift(mid,end);
  *mid = x;
}

void array_copy (int *dst, int *begin, int *end){
  for(;begin<end;++begin)
    *(dst++)=*begin;
}

void array_insert_sort(int *begin, int *end){
  int *tab = malloc(sizeof(int)*(end-begin));
  int *endtab = tab + (end-begin);
  *tab=*begin;
  begin++;
  for(;begin<end;++begin){
    array_insert(tab,endtab,*begin); // Vérifier la comparaison
    print_array(begin,end);
  }
  array_copy(end,tab,endtab);
}


