

#include<stdio.h>
#include<string.h>
   int main()
   {
        char str[25];
        printf("Enter a string:\n");
        scanf("%s", str);
        int len = strlen(str);

        for(int i = len-1; i >= 0; i--)
        {
            printf("%c\n", str[i]);
            scanf("\n");
        }
        return 0;
    }



        
   