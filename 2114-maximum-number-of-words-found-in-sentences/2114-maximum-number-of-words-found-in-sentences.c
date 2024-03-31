int mostWordsFound(char** sentences, int sentencesSize) 
{
    int i = 0;  
    int max = 0;
    int count;
    char *token;
    char **str = sentences;
    const char dil[] = " ";
    while (i < sentencesSize)
    {
        count  = 0;
      token = strtok(str[i], dil);
      while(token != NULL)
      {
        count++;
        token = strtok(NULL, dil);
        }
        if(count > max)
        max = count;
        
        i++;
    }
    return max;
}