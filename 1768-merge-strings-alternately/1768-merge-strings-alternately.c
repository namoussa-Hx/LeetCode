

char *mergeAlternately(char * word1, char * word2)
{
  
  char *merge;
  if (word1 == NULL || word2 == NULL)
    return NULL;
  int len1 = strlen(word1);
  int len2 = strlen(word2);
  int i = 0;
  int j = 0;
  merge = (char*)malloc(sizeof(char) * ((len1 + len2) + 1));
  
  if (merge == NULL)
  {
   return NULL;
  }
   
   while (i < len1 && j < len2)
   {
     merge[i + j] = word1[i];
     merge[i + j + 1] = word2[j];
     i++;
     j++;
     }
     while(i < len1)
     {
       merge[i + j] = word1[i];
      i++;
       }
       while(j < len2)
       {
         merge[i + j] = word2[j];
         j++;
         }
   merge[i + j] = '\0';
   return merge;
}