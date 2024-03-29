/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) 
{
   register int i;
   register int j;
   register int *res;
   
   i = 0;
   j = 0;
     res = malloc(sizeof(int) * wordsSize);
   if(res == NULL)
   {
    *returnSize = 0;
   return NULL;
   }
     while (i < wordsSize)
     {
       if (strchr(words[i], x) != NULL)
       {
       res[j++] = i;

       }
       i++;
      }
   *returnSize = j;
   return res;
 
}