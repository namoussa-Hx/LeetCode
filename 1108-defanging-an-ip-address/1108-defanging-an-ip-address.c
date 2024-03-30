int my_strlen(char *str) 
{
    int i = 0;
    int count = 0;
  
    while (str[i]) 
    {
        if (str[i] == '.') 
            count += 2;
        i++;
    }
  
    return (count + i); 
}

char *defangIPaddr(char *address) 
{
    int i = 0;
    int j = 0;
    int len = my_strlen(address) + 1; 
    char *res = malloc(sizeof(char) * len);
    
    if (res == NULL) 
    {
       
        return NULL;
    }
    
    while (j < len - 1) 
    { 
        if (address[i] == '.') 
        {
            res[j++] = '[';
            res[j++] = '.';
            res[j++] = ']';
        }
        else
            res[j++] = address[i];
        i++;
    }
    
    res[j] = '\0';
    
    return res;
}