#include <stdio.h>

int main(  )
{
   int n;

    printf("�п�J�j�p:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	for(int k=1;k<=i;k++)printf(" ");
        for(int k=1;k<=n;k++)printf("*");
        printf("\n");
    }

//your code

   return 0;
}
