int my_strlen(char *str) 
{
    register int  i = 0;
    register int count = 0;
  
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
    register i = 0;
    register j = 0;
    register len = my_strlen(address) + 1; 
    register char *res = malloc(sizeof(char) * len);
    
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