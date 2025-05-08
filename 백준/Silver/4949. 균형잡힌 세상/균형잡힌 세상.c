#if 01

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node
{
    char data;
    struct node *next;
}node;

typedef struct{
    node *top;
}stack;

void init(stack *s);
void push(stack *s, char c);
char pop(stack *s);

int main(void)
{
    char c[102];
    int cnt, VPS;
    stack s;
    init(&s);
    while (1)
    {
        fgets(c, sizeof(c), stdin);
        if(c[0] == '.')
            break;
        cnt = 0, VPS = 0;
        for(int i = 0; i < strlen(c) - 1; i++)
        {
            if(c[i] == '(' || c[i] == '[')
            {
                push(&s, c[i]);
                cnt++;
            }
            else if(c[i] == ')' || c[i] == ']')
            {
                char cc = pop(&s);
                if((c[i] == ')' && cc == '(') || (c[i] == ']' && cc == '['))
                    cnt--;
                else
                    VPS--;
            }
        }
        if(cnt != 0 || VPS != 0)
        {
            while(pop(&s) != '0');
            printf("no\n");
        }
        else
            printf("yes\n");
    }
    

    return 0;
}

void init(stack *s)
{
    s->top = NULL;
}

void push(stack *s, char c)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = c;
    n->next = s->top;
    s->top = n;
}

char pop(stack *s)
{
    if(s->top == NULL)
        return '0';
    else
    {
        node *n = s->top;
        char c = n->data;
        s->top = n->next;
        free(n);
        return c;
    }
}

#endif