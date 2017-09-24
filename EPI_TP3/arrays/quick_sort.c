/* quick_sort.c : simple quick sort implementation */
 
# include <stdlib.h>
 
# include "helper.h"
# include "quick_sort.h"
 
int* partition(int *begin, int *end)
{
  // FIX ME
}
 
void quick_sort(int *begin, int *end)
{
  // FIX ME
}
 
void hybrid_sort(int *begin, int *end)
{
  if (end - begin < 2 || array_is_sorted(begin, end))
    return;
  quick_sort(begin, end);
}
