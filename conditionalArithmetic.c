
#include <stdio.h>
#include <limits.h>

int menu (int);
void getoperand(int*);
void Multiply(int operand);
void Add(int operand);

int main(int argc, char const *argv[])
{

    int choose = 0;
    int input = 0;
    int operand = 0;
    input = menu(choose);
    getoperand(&operand);

    if (input == 1)
    {
      Add(operand);
    }
    else if (input == 2)
    {
      Multiply(operand);
    }
}
int menu(int choose)
  {
    do {
      printf("Select Add (1) or Multiply (2):");
      scanf("%d", &choose);
    } while(choose > 2 || choose < 1);
    return choose;
  }

  void getoperand(int *operand)
    {
      do
      {
        printf("Select a number in the range (1-100)");
        scanf("%d",operand);
      } while(*operand < 1 || *operand > 100);

    }
    void Add(int operand)
    {
      int result = 0;

        for (int i = 1; i <= operand; i++)
        {
          if (i % 3 == 0 || i % 5 == 0)
          {
             result += i;
          }
        }

        printf("%d\n",result);
      }
      void Multiply(int operand)
      {
        int result = 1;
          for (int i = 1; i <= operand; i++)
          {
            if (i % 3 == 0 || i % 5 == 0)
            {
              result *= i;
            }
          }
            printf("%d\n",result);
      }
