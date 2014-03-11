#include <stdio.h>

#define UPTO 1000


main()
{
  sumOfMultiples3And5();
}

sumOfMultiples3And5()
{
  int num;
  int sumAdder = 0;

    for (num = 1; num < UPTO; ++num)
      if (num % 3 == 0){
        sumAdder = sumAdder + num;
    }
      else if (num % 5 == 0){
        sumAdder = sumAdder + num;
      }
  printf("%d\n", sumAdder);
}
