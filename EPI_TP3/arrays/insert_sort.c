#include <stdio.h>
#include <stdlib.h>



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
  int left = begin; int right = end; int mid = begin + (end-begin)/2;
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

void array_insert_sort(int *begin, int *end){
  int *tab = malloc(sizeof(int)*(end-begin));
  int *endtab = tab + (end-begin);
  *tab=*begin;
  begin++
  for(;begin<end;++begin){
    array_insert(tab,endtab,*begin); // Vérifier la comparaison dans
  }				     // entre NULL & int in insert
}


void array_insert_sort_bin(
