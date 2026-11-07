VISUAL STUDIO CODE

QUESTION1 

#include<stdio.h>
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
QUESTION 2 


#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) 
return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


QUESTION 3

#include<stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

QUESTION4
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);

            if(j < i)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}






QUESTION5
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", i);

            if(j < i)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
QUESTION6 
#include <stdio.h>

int main()
{
    int n, i, j, count = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", count);

            if(j < i)
                printf(" ");

            count++;
        }
        printf("\n");
    }

    return 0;
}
QUESTION 7
#include <stdio.h>

int main()
{
    int n, i, j, count = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", count);

            if(j < i)
                printf(" ");

            count++;
        }
        printf("\n");
    }

    return 0;
}
QUESTION 8
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
QUESTION 9
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        for(j = 1; j <= 2*(n-i)+1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
QUESTION 10
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 || i == n || j == 1 || j == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
QUESTION11
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(j == 1 || j == i || i == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
QUESTION 12
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            printf("%d", i*j);

            if(j < n)
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
QUESTION 13
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if((i+j) % 2 == 0)
            {
                printf("X");
            }
            else
            {
                printf("O");
            }
        }

        printf("\n");
    }

    return 0;
}

QUESTION 14
#include <stdio.h>

int main()
{
    int n, i, j, count = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", count);

            if(j < i)
                printf(" ");

            count++;
        }

        printf("\n");
    }

    return 0;
}
QUESTION 15
#include<stdio.h>
int main()
{
    int n, i, j, mid;

    scanf("%d", &n);

    mid = (n + 1) / 2;

    
    for(i = 1; i <= mid; i++)
    {
        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2 * (mid - i) + 1; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    
    for(i = mid - 1; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("*");

        for(j = 1; j <= 2 * (mid - i) + 1; j++)
            printf(" ");

        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
QUESTION 16
#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n-i; j++)
            printf(" ");

        for(j = 1; j <= 2*i-1; j++)
            printf("*");

        printf("\n");
    }

    
    for(i = n-1; i >= 1; i--)
    {
        for(j = 1; j <= n-i; j++)
            printf(" ");

        for(j = 1; j <= 2*i-1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
