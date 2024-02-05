#include<stdio.h>
int main()
{
       double numbers[10];
       int i = 0;
           
            printf("Enter 10 numbers:\n");

        while(i < 10)
           {
               printf("Enter number %d: ", i+1);
               scanf("%lf", &numbers[i]);
               i++;
           }

         double max = numbers[0];
         double min = numbers[0];
         i = 1;

         while(i < 10)
           {
               if(numbers[i] > max)
                 {
                     max = numbers[i];
                 }
               if(numbers[i] < min)
                 {
                     min = numbers[i];
                 }
                  i++;
           }

                 printf("Maximum number: %.2lf\n", max);
                 printf("Minimum number: %.2lf\n", min);
                    
                     return 0;
}