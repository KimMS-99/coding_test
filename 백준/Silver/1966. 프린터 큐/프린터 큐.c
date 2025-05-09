#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data, serial_num;
    struct node * next;
}node;

typedef struct
{
    node *head;
    node *tail;
}quque;

void init(quque *q, int *num);
void push(quque *q, int num, int sn);
int pop(quque *q);
int is_empty(quque *q);
int size(quque *q);
int head_v(quque *q);

int main(void)
{
    int t, n, m; // t : testcase, n : 문서의 개수, m : 몇번째로 나가는지 찾는 m번째 문서(맨 왼쪽부터 0)
    int check[9]; // 중요도 체크를 위한 배열
    int importance, serial_number, m_count, temp_pop, result_m;
    int i, j, k, count;
    quque q;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        init(&q, check); // quque와 체크를 위한 배열 초기화
        scanf("%d %d", &n, &m);
        count = 0;
        m_count = 0;
        serial_number = 0;
        for(j = 0; j < n; j++)
        {
            scanf("%d", &importance);
            check[importance - 1]++;
            push(&q, importance, serial_number++);
        }
        k = 9;
        while(1)
        {
            if(check[k - 1] == 0)
            {
                k--;
                continue;
            }
            else if (check[k - 1] > 0)
            {
                if(head_v(&q) == k)
                {
                    check[k - 1]--;
                    m_count++;
                    temp_pop = pop(&q);
                    if(temp_pop == m)
                    {
                        result_m = m_count;
                        break;
                    }
                }
                else
                    push(&q, head_v(&q), pop(&q));
            }
        }
        printf("%d\n", result_m);
    }
    return 0;
}

void push(quque *q, int num, int sn)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = num;
    n->serial_num = sn;
    n->next = NULL;
    if(is_empty(q))
    {
        q->head = q->tail = n;
    }
    else
    {
        q->tail->next = n;
        q->tail = n;
    }
}

int pop(quque *q)
{       
    node *n = q->head;
    int num = n->serial_num;
    q->head = n->next;
    free(n);
    return num;
}

int head_v(quque *q)
{
    if(is_empty(q))
        return -1;
    else
        return q->head->data;
}

int is_empty(quque *q)
{
    if(q->head == NULL && q->tail == NULL)
        return 1;
    else
        return 0;
}

void init(quque *q, int *num)
{
    q->head = q->tail = NULL;
    for(int i = 0; i < 9; i++)
        num[i] = 0;
}

int size(quque *q)
{
    if(is_empty(q))
        return 0;
    else
    {
        node *n = q->head;
        int j = 0;
        for(node *i = n; i != NULL; i = i->next)
            j++;
        return j;
    }
}
