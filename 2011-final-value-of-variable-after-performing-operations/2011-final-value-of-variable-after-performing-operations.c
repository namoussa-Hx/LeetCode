int finalValueAfterOperations(char ** operations, int operationsSize) {
     register int x = 0;
     register int i = 0;

  while(i < operationsSize)
  {
        if (operations[i][0] == '-' || operations[i][2] == '-' ) 
        x--;
        else 
        x++;
        i++;
  }
    

    return x;
}