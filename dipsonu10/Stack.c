/*To implement a stack which will support three additional operations in addition to push and pop by modifying the basic stack operations
    - peekLowestElement - return the lowest element in the stack without removing it from the stack
    - peekHighestElement - return the highest element in the stack without removing it from the stack
    - peekMiddleElement - return the (size/2+1)th lowest element in the stack without removing it from the stack.*/
#include <stdio.h>
#define LEN 20
#define INV -999
#define DEF_TERM printf("\033[0m\n")


typedef struct node
{
    int top;
    int arr[LEN];
    int size;
} Stack;

void push(Stack *stk, int d)
{
    if (stk->top < LEN - 1)
    {
        stk->arr[++(stk->top)] = d;
        stk->size++;
    }
    else
    {
        printf("\033[31mOVERFLOW\n");
    }
}

int pop(Stack *stk)
{
    if (stk->top != -1)
    {
        stk->size--;
        return stk->arr[(stk->top)--];
    }
    return INV;
}

void display(Stack s)
{
    if (s.top != -1)
    {
        for (int i = s.top; i >= 0; i--){
            printf("\033[33;44m|%3d|", s.arr[i]);DEF_TERM;
        }

        printf("\033[33;44m+---+");DEF_TERM;
    }
    else
    {
        printf("\033[31mUNDERFLOW\n");
    }
}

int peek(Stack *s)
{
    if (s->top == -1)
        return INV;
    return s->arr[s->top];
}

int isEmpty(Stack *s)
{
    return (s->top == -1) ? 1 : 0;
}

int peekLowest(Stack *s)
{
    return (!isEmpty(s)) ? peek(s) : INV;
}

int peekMiddle(Stack *s)
{
    if (isEmpty(s))
        return INV;
    int count = (s->size / 2) + 1;
    Stack tmp;
    tmp.size = 0;
    tmp.top = -1;
    while (count > tmp.size + 1)
    {
        push(&tmp, pop(s));
    }
    int res = peek(s);
    while (!isEmpty(&tmp))
    {
        push(s, pop(&tmp));
    }
    return res;
}

int peekHighest(Stack *s)
{
    // to get the bottom
    if (isEmpty(s))
        return INV;
    Stack temp;
    temp.top = -1;
    temp.size = 0;
    while (!isEmpty(s))
    {
        push(&temp, pop(s));
    }
    int highest = peek(&temp);
    while (!isEmpty(&temp))
    {
        push(s, pop(&temp));
    }
    return highest;
}

void pushMin(Stack *s, int data)
{
    if (s->top == -1)
    {
        push(s, data);
        return;
    }
    // it the incomming data is min then insert it after pop till empty or get min than ddata
    if (data > peek(s))
    {
        Stack temp;
        temp.top = -1;
        temp.size = 0;
        while (s->top != -1 && peek(s) < data)
        {
            push(&temp, pop(s));
        }
        if (s->top == -1)
        {
            push(s, data);
            while (temp.top != -1)
            {
                push(s, pop(&temp));
            }
            return;
        }
        if (peek(s) >= data)
        {
            push(s, data);
            while (temp.top != -1)
            {
                push(s, pop(&temp));
            }
            return;
        }
    }
    else
    {
        push(s, data);
        return;
    }
}

int main(int argc, char const *argv[])
{
    int ch;
    Stack stk;
    stk.size = 0;
    stk.top = -1;
    do
    {
        printf("\033[33;38mEnter 1 -> display");DEF_TERM;
        printf("\033[33;38mEnter 2 -> push");DEF_TERM;
        printf("\033[33;38mEnter 3 -> pop");DEF_TERM;
        printf("\033[33;38mEnter 4 -> peekMin");DEF_TERM;
        printf("\033[33;38mEnter 5 -> peekMax");DEF_TERM;
        printf("\033[33;38mEnter 6 -> peekMiddle");DEF_TERM;
        printf("\033[33;38mEnter 0 -> exit");DEF_TERM;
        printf("-> ");
        scanf("%d", &ch);
        int k = 0;

        switch (ch)
        {
        case 1:
            display(stk);
            break;

        case 2:
            printf("Enter element to insert: ");
            scanf("%d", &k);
            pushMin(&stk, k);
            break;

        case 3:
            k = pop(&stk);
            (k != INV) ? printf("\033[33;44mPopped: %d", k) : printf("\033[31mAlready Empty!");
            DEF_TERM;
            break;

        case 4:
            k = peekLowest(&stk);
            (k != INV) ? printf("\033[33;44mLowest: %d", k) : printf("\033[31mAlready Empty!");
            DEF_TERM;
            break;

        case 5:
            k = peekHighest(&stk);
            (k != INV) ? printf("\033[33;44mHighest: %d", k) : printf("\033[31mAlready Empty!");
            DEF_TERM;
            break;

        case 6:
            k = peekMiddle(&stk);
            (k != INV) ? printf("\033[33;44mMiddle: %d", k) : printf("\033[31mAlready Empty!");
            DEF_TERM;
            break;
        }
    } while (ch);
    return 0;
}
