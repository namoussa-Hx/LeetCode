int count_words(char *str)
{
  int i = 0;
  int flag = 0;
  int count = 0;
  
  while(str[i])
  {
    if(str[i] == 32 || flag == 0)
    {
      count++;
      flag = 1;
      
      }
    i++;
    }
    return count;
  }
int mostWordsFound(char** sentences, int sentencesSize) 
{
    int i = 1;
    char **str = sentences;
    int len = 0;
    int max = count_words(str[0]);
    
    
    while(i < sentencesSize)
    { 
      len = count_words(str[i]);
      
      if(len > max)
      max = len;
        
        i++;
    }
    return max;
}