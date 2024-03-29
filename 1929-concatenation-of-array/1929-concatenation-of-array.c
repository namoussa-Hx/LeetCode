/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) 
{
 int i;
 int len;
 int j;
 int *res;
 int *temp;
 
 i = 0;
 j = 0;
 len = 2 * numsSize;
 temp = nums;
 res = malloc(sizeof(int) * len);
 if (res == NULL)
   return NULL;
    while (i < numsSize)
    {
    res[j] = nums[i];
     i++;
     j++;
    }
    i = 0;
    while(i < numsSize)
    {
        res[j] = temp[i];
        i++;
        j++;
    }
  *returnSize = len;
      return res;
}