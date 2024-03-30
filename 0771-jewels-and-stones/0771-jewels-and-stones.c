int numJewelsInStones(char* jewels, char* stones)
 {
    int i = 0;
    int j = 0;
    int count = 0;
    int len = strlen(stones);

    while(i < len)
    {
      if (strchr(jewels, stones[i]))
        j++;
       i++;
    }
    return j;
    
}