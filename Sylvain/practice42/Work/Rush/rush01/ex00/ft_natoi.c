int     is_space(char chr)
{
        if (chr == 32 || (chr > 8 && chr < 14))
                return (1);
        return (0);
}

int     ft_natoi(char *str, int n)
{
        int             factor;
        int             nb;
        int             i;

        nb = 0;
        i = 0;
        factor = 1;
        while (is_space(str[i]))
                i++;
        while (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                        factor = -factor;
                i++;
        }
        while (str[i] >= '0' && str[i] <= '9' && --n)
        {
                nb = (int)str[i] - 48 + nb * 10;
                i++;
        }
        return (factor * nb);
}

