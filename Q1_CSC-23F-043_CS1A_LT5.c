#include<stdio.h>
int main()
{
     int array[10]; 
     int i = 0;
     int median;

       while(i <  10)
          {             
              printf("Enter an integer: ");
              scanf("%d", &array[i]);
              i++;
           }

        int j = 0;
        int temp;
            while(j < 9)
               {
                    if(array[j] > array[j + 1])
                       {
                            temp = array[j];
                            array[j] = array[j + 1];
                            array[j + 1] = temp;
                       }
                            j++;
               }

          if(i % 2 == 1)
            {
                 median = array[i / 2];
            }
           else
             {
                 median = (array[i / 2] + array[i / 2-1]) / 2;
             }

                   printf("The median of the array is %d\n", median);

            return 0;
}