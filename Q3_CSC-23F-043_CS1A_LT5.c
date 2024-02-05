#include<stdio.h>
int main()
{
     char input[100];
      int i = 0;

       printf("Enter a line in lowercase: ");
       scanf("%[^\n]s", input);

        while(input[i] != '\0')
             {
                  if(input[i] >= 'A' && input[i] <= 'Z')
                     {
                         printf("Error: Uppercase characters are not allowed!\n");
                              return 0;
                     }
                        i++;
              }

           i = 0;
               while(input[i] != '\0')
                    {
                         if(input[i] >= 'a' && input[i] <= 'z')
                             {
                                    printf("%c", input[i] - 32);
                             }
                         else
                             {
                                    printf("%c", input[i]);
                             }
                                i++;
                    }

                            printf("\n");

                                return 0;
}