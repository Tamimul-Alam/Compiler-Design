#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top = -1;
char stack[50];
void push(char x)
{
      stack[top] = x;
      top++;
}
void pop()
{
      if (top == -1)
      {
            printf("expression is invalid\n");
            exit(0);
      }
      else
      {
            top--;
      }
}
int main()
{
      int i,y;
      char x[50];
      
      while (1)
      {
            printf("\nChoose operation : ");
            scanf("%d", &y);
            switch (y)
            {
                  case 1:
                        printf("\nEnter the expression : ");
                        scanf("%s",x);
                        for (i = 0; x[i] != '\0';i++)
                        {
                              if (x[i] == '('&&'{'&&'[')
                              {
                                    push(x[i]);
                              }
                              else if (x[i] == ')'&&'}'&&']')
                              {
                                    pop();
                              }
                        }
                        if (top == -1)
                              printf("Given Expression is valid\n");
                        else
                              printf("Given Expression is invalid\n");
                        break;
                  case 2:
                        exit(0);
                  default: printf("Invalid operation...");
            }
      }
      return 0;
}


