#include <stdio.h>

int s_top = -1;

void push(int *n, int x);
int pop(int *n);
int empty(void);
int size(void);
int top(int *n);

int main()
{
    int s[1000000], N, t, p;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &t);

        switch (t)
        {
        case 1:
            scanf("%d", &p);
            push(s, p);
            break;
        case 2:
            printf("%d\n", pop(s));
            break;
        case 3:
            printf("%d\n", size());
            break;
        case 4:
            printf("%d\n", empty());
            break;
        case 5:
            printf("%d\n", top(s));
            break;
        }
    }
    
    return 0;
}

void push(int *n, int x)
{
    n[++s_top] = x;
}

int pop(int *n)
{
    if (empty())
        return -1;
    else
        return n[s_top--];
}

int empty(void)
{
    if (s_top == -1)
        return 1;
    else
        return 0;
}

int size(void)
{
    return s_top + 1;
}

int top(int *n)
{
    if (empty())
        return -1;
    else
        return n[s_top];
}