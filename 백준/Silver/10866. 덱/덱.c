#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct deque
{
    int data;
    struct deque *ll;
    struct deque *rl;
}deque;

int q_size = 0;
deque *head = NULL;
deque *tail = NULL;

void push_front(int x);
void push_back(int x);
int pop_front(void);
int pop_back(void);
int empty(void);
int front(void);
int back(void);
int size(void);

// 10866 덱
int main(void)
{
    int n, q;
    char c[15];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", c);
        if(!strcmp(c, "push_front"))
        {
            scanf("%d", &q);
            push_front(q);
        }
        else if (!strcmp(c, "push_back"))
        {
            scanf("%d", &q);
            push_back(q);
        }
        else if (!strcmp(c, "pop_front"))
            printf("%d\n", pop_front());
        else if (!strcmp(c, "pop_back"))
            printf("%d\n", pop_back());
        else if (!strcmp(c, "empty"))
            printf("%d\n", empty());
        else if (!strcmp(c, "front"))
            printf("%d\n", front());
        else if (!strcmp(c, "back"))
            printf("%d\n", back());
        else if (!strcmp(c, "size"))
            printf("%d\n", size());
    }
    
    return 0;
}

void push_front(int x)
{
    deque *q = (deque *)malloc(sizeof(deque));
    q->data = x;
    q->ll = NULL;
    if (head == NULL && tail == NULL)
    {
        head = q;
        tail = q;
        q_size++;
    }
    else
    {
        q->rl = head;
        head->ll = q;
        head = q;
        q_size++;
    }
}

void push_back(int x)
{
    deque *q = (deque *)malloc(sizeof(deque));
    q->data = x;
    q->rl = NULL;
    if (head == NULL && tail == NULL)
    {
        head = q;
        tail = q;
        q_size++;
    }
    else
    {
        q->ll = tail;
        tail->rl = q;
        tail = q;
        q_size++;
    }
}

int empty(void)
{
    if (head == NULL)
        return 1;
    else
        return 0; 
}

int pop_front(void)
{
    if (empty())
        return -1;
    else
    {
        deque *q = head;
        int n = q->data;

        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->rl;
            head->ll = NULL;
        }
        q_size--;
        free(q);
        return n;
    }
    
}

int pop_back(void)
{
    if (empty())
        return -1;
    else
    {
        deque *q = tail;
        int n = q->data;

        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            tail = tail->ll;
            tail->rl = NULL;
        }
        q_size--;
        free(q);
        return n;
    }
}

int front(void)
{
    if (empty())
        return -1;
    else
        return head->data;
}

int back(void)
{
    if (empty())
        return -1;
    else
        return tail->data;
}

int size(void)
{
    return q_size;
}