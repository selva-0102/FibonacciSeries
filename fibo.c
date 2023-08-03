#include <stdio.h>

int fibo[1000];

int sumSeries(int size){
  int summ = 0;
  for(int i = 2; i < size; i++){
    summ += fibo[i];
  }
  printf("%d", summ);
  return summ;
}

void fibonacci(int n){
    int i;

    fibo[0]=0;
    fibo[1]=1;
    for (i=2;i<n;i++)
    {
      fibo[i]=fibo[i-1]+fibo[i-2];
    }

}
int main()
{
    int n;
    printf("Enter the Number for fibonacci series : ");
    scanf("%d",&n);
    fibonacci(n);
    sumSeries(n);
   return 0;
}