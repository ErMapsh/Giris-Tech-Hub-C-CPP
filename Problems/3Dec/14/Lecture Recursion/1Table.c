#include <stdio.h>

void showTable(int x);
int main()
{
    int n = 5;
    showTable(n);
    return 0;
}
void showTable(int x)
{
    static int count = 0;

    if (count != 10)
    {
        count++;
        printf("%d * %d = %d\n", x, count, x * count);
        showTable(x);
    }
}