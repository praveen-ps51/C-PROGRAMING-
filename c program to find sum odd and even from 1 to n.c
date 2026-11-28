#include <stdio.h>

int sum_of_even_numbers(int n);
int sum_of_odd_numbers(int n);

int main()
{
    int n, even_sum = 0, odd_sum = 0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    even_sum = sum_of_even_numbers(n);
    odd_sum = sum_of_odd_numbers(n);

    printf("Sum of even numbers up to %d is %d\n", n, even_sum);
    printf("Sum of odd numbers up to %d is %d\n", n, odd_sum);

    return 0;
}

int sum_of_even_numbers(int n)
{
    int even_sum = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            even_sum = even_sum + n;
        }
        n--;
    }
    return even_sum;
}

int sum_of_odd_numbers(int n)
{
    int odd_sum = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            odd_sum = odd_sum + n;
        }
        n--;
    }
    return odd_sum;
}
