int myAtoi(char* s) 
{
    int i = 0;

    int sign = 1;
   long long res = 0;
    while((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
    i++;

    if (s[i] == '+' || s[i] == '-')
    {
        if(s[i] == '-')
        sign = sign * -1;
        i++;
    }

    while ((s[i] >= '0' && s[i] <= '9'))
    {
        res = res * 10 + (s[i] - '0') ;
if ((res > 2147483647 && sign == 1) || (res > 2147483648 && sign == -1)) 
{
        if (sign == 1)
            return 2147483647;
        else
            return -2147483648;
    }
        i++;
    } 
        return (int)(res *= sign);
}
