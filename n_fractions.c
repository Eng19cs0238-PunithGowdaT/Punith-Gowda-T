//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction
{
    int n;
    int d;
};
typedef struct fraction Fraction;

Fraction getdata(int i)
{
    Fraction FractionInput;
    printf("Enter the Number %d numerator value: ", i);
    scanf("%d", &FractionInput.n);
    printf("Enter the Number %d denominator value: ", i);
    scanf("%d", &FractionInput.d);
    return FractionInput;
}

int gcd(int n, int d)
{
    if (d != 0)
        return gcd(d, n % d);
    else
        return n;
}

Fraction computeOne(Fraction s1, Fraction s2)
{
    Fraction Computevalue;
    int gcdvalue;
    Computevalue.n = (s1.n * s2.d) + (s1.d * s2.n);
    Computevalue.d = (s1.d * s2.d);
    gcdvalue = gcd(Computevalue.n, Computevalue.d);
    Computevalue.n = (Computevalue.n / gcdvalue);
    Computevalue.d = (Computevalue.d / gcdvalue);
    return Computevalue;
}

Fraction computeN(int n)
{
    Fraction f2, result;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            result = getdata(i + 1);
        }
        else
        {
            f2 = getdata(i + 1);
            result = computeOne(result, f2);
        }
    }
    return result;
}

int GetnumberOfFraction()
{
    int n;
    printf("Enter the number of fractions You wish to add: ");
    scanf("%d", &n);
    return n;
}

void displayOutput(Fraction sum, int n)
{
    printf("The sum of %d Fractions is  %d/%d ", n, sum.n, sum.d);
}

int main()
{
    Fraction SumOfFractions;
    int n;
    n = GetnumberOfFraction();
    SumOfFractions = computeN(n);
    displayOutput(SumOfFractions, n);
}
