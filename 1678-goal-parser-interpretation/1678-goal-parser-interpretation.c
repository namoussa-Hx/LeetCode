char * interpret(char * command)
{
   int i  = 0;
   int j  = 0;
   int len = strlen(command) + 1;
   int lenc = strlen(command);
  char *res = malloc(sizeof(char) * len);
  char *ress = res;
  if(res == NULL)
  return NULL;
    while (i < lenc) 
    {  
      if (command[i] == 'G') 
        {
            *res = 'G';
            res++;
        } 
        else if (command[i] == '(' && command[i + 1] == ')') 
        {
            *res = 'o';
            res++;
            i++;
        } 
        else if (command[i] == '(' && command[i + 1] == 'a') 
        {
            strcpy(res, "al");
            res+=2;
            i += 3;
        }
        i++;
    }
    *res = '\0';
    return ress;
}