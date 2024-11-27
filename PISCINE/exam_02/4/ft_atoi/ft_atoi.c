#include<stdio.h>
int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	if(*str == ' ' || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	while(*str == '+' || *str == '-')
	{
		if(*str == '-')
		{
			sign = -sign;
		}
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return(sign * result);
}
/*int main(void) {
    // Testes individuais
    printf("%d\n", ft_atoi("---+--+1234"));
    printf("ft_atoi(\"-1234\") = %d\n", ft_atoi("-1234"));
    printf("ft_atoi(\"0\") = %d\n", ft_atoi("0"));
    printf("ft_atoi(\"   42\") = %d\n", ft_atoi("   42"));
    printf("ft_atoi(\"42abc\") = %d\n", ft_atoi("42abc"));
    printf("ft_atoi(\"-42abc\") = %d\n", ft_atoi("-42abc"));
    printf("ft_atoi(\"abc\") = %d\n", ft_atoi("abc"));

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}*/
