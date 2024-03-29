/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i;
    int j;
    int *res;
    
    i = 0;
    j = 0;
    
    res = malloc(sizeof(int) * 2);
    if (res == NULL)
    return NULL;
    
    while (i < numsSize)
    {
      j = i + 1;
      while(j < numsSize)
      {
        if (nums[i] + nums[j] == target)
        {
          res[0] = i;
          res[1] = j;
          *returnSize = 2;
          return res;
          }
          j++;
      }  
        i++;
      }
    *returnSize = 0;
    return NULL;
}