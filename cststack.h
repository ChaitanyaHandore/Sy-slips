#define MAX 50
int top = -1, front = 0;
int stack[MAX];
void push(char);
void pop();
void push(char a)
{
    top++;
    stack[top]  =  a;
}
void pop()
{
    top--;
}
