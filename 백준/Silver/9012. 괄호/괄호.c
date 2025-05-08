#if 01

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char data;
    struct node *next;
}node;

typedef struct{
    node *head, *tail;
    int cnt;
}quque;

void init(quque *q);
void push(quque *q, char c);
char pop(quque *q);

int main(void)
{
    int t; // t : testcase 
    int cnt, VPS;
    char c[51]; // c : 괄호 입력
    char check;
    quque q;
    init(&q);
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%s", c);
        cnt = 0;
        VPS = 0;
        for(int j = 0; j < strlen(c); j++)
            push(&q, c[j]);

        for(int j = 0; j < strlen(c); j++)
        {
            check = pop(&q);
            if(check == '(' && cnt >= 0)
                cnt++;
            else if (check == ')')
                cnt--;
        }
        if(cnt == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}

void init(quque *q)
{
    q->head = q->tail = NULL;
    q->cnt = 0;
}

void push(quque *q, char c)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = c;
    n->next = NULL;
    if(q->cnt == 0)
        q->head = n;
    else
        q->tail->next = n;
    q->tail = n;
    q->cnt++;
}

char pop(quque *q)
{
    if(q->cnt == 0)
        return '1';
    else
    {
        node *n = q->head;
        char c = q->head->data;
        q->head = n->next;
        q->cnt--;
        free(n);
        return c;
    }
}

#endif