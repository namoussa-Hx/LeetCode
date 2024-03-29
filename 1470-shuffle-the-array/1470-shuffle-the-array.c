

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
  register int i = 0;
  register int j = 0;
  register int *res;
  res = malloc(sizeof(int) * numsSize);
  if(res == NULL)
  return NULL;
  while(i < n && n < numsSize)
  {

   res[j++] = nums[i];
   res[j++] = nums[i + n];
   i++;
    }
    *returnSize = numsSize;
  return res;
}