/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) 
{
    int i;
    int j;
    int *res;
    
    i = 0;
    j  = 0;
    res = malloc(sizeof(int) * numsSize);
    if (res == NULL)
    return NULL;
    while(i < numsSize)
    {
      res[j] = nums[nums[i]];
      j++;
      i++;
      }
      *returnSize = numsSize;
      return res;
}