#include<stdio.h>
#include<stdlib.h>
 struct Stack
 {
    int size;
    int top;
    int *S;
 };

 void create(struct Stack *st)
 {
    printf("Enter size: ");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int *)malloc(st->size*sizeof(int));
 }

 void Display(struct Stack st)
 {
    int i,top;
    for(i=st.top ;i>=0;i--)
    printf("%d ",st.S[i]);
    printf("\n");
 }
 //PUSH FUNCTION
 void push(struct Stack *st,int x)
 //no return type so void
 {
    if(st->top==st->size-1)
    printf("Stack overflow\n");
    else 
    {
      //increment the top value
        st->top++;
        st->S[st->top]=x;
    }
 }
 //POP FUNCTION
 int pop(struct Stack *st)
 {
    int x=-1;

    if(st->top==-1)
    printf("stack underflow\n");
    else{
        x=st->S[st->top--];
    }
    return x;
 }
 int peek(struct Stack st, int index)
 {
     int x=-1;
     if(st.top - index <0)
     printf("Invalid index \n");
     x=st.S[st.top-index+1];

     return x;

 }
 int isEmpty(struct Stack st)
 {
   if(st.top==-1)
   return 1;

   return 0;
 }
 int isFull(struct Stack st)
 {
   return st.top==st.size-1;

 }
 int stackTop(struct Stack st)
 {
    if(!isEmpty(st))
    return st.S[st.top];
    return -1;
 }
 int main()
 {
     struct Stack st;
     create(&st);

     push(&st,10);
     push(&st,20);
     push(&st,30);
     push(&st,40);
     push(&st,50);
   //   Display(st);
   //   printf("%d\n",pop(&st));
   //   Display(st);
   //   printf("%d\n",pop(&st)); //second time pop
   //   Display(st);
   //   printf("%d\n",pop(&st)); //third time pop 
   //   Display(st);
   //   printf("%d\n",pop(&st)); //fourth time pop 
   //   Display(st);
   //   printf("%d\n",pop(&st)); //fifth time pop 
   //   Display(st);
   //   printf("%d\n",pop(&st)); //sixth time pop 
   //   Display(st);

   printf("%d \n",peek(st,2));

    return 0;
 }
