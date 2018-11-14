#include <stdio.h>

int find(int n, int m)
{
    int i;
    int count[n + 1];

    count[0] = 0;

    for (i = 1; i <= n; i++) {
        if (i > m) {
            count[i] = count[i - 1] + count[i - m];
        } else if (i < m) {
            count[i] = 1;
        } else {
            count[i] = 2;
        }
    }
    return count[n];
}

int main()
{
    int n;
    int m;

    printf("Enter the n * m tile size\n");
    printf("n = ");
    scanf("%d",&n);
    printf("m = ");
    scanf("%d",&m);
    printf("Numbers of ways = %d",find(n,m));

    return 0;
}
