#include<stdio.h>
#include<string.h>

int main()
{
       char email[100];

         printf("Enter your email address: ");
         scanf("%s", email);

         char* atSymbol = strchr(email, '@');
           if(atSymbol != NULL)
               {
                    int atIndex = atSymbol - email;
                        if(atIndex > 0)
                            {
                                 char* dotSymbol = strchr(atSymbol, '.');
                                    if(dotSymbol  != NULL && strlen(dotSymbol) > 1)
                                        {
                                            printf("Valid email address\n");
                                        }
                                    else
                                        {
                                            printf("Invalid email address.Missing domain(e.g., username@example.com\n");
                                        }
                               }
                                     else
                                        {
                                            printf("Invalid email address.Missing username(e.g., username@example.com\n");
                                        }
                            }
                        else
                            {
                                           printf("Email address does not contain the '@' character\n");
                             }
             return 0;
}