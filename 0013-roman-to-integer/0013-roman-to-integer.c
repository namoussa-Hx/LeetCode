#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
int check(char c)
{
  if(c == 'I')
  return 1;
  else if (c == 'V')
  return 5;
  else if (c == 'X')
  return 10;
  else if (c == 'L')
  return 50;
  else if (c == 'C')
  return 100;
  else if (c == 'D')
  return 500;
  else if (c == 'M')
  return 1000;
  return 0;
  }
int romanToInt(char* s)
{
    int i = 0;
    int res = 0;
    int j;
    while(s[i])
    {
      j = i + 1;
      if (check(s[i]) < check(s[j]))
      {
      res = res + (check(s[j]) - check(s[i]));
      
      i++;
      }
      else
      {
      res+=check(s[i]);
      }
      i++;     
    }
    return res;
}