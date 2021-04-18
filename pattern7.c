#include<stdio.h>
int main(){
          char c,i,j;
           printf("\nInput a character from user ::");
          scanf("%c",&c);
          for(i=c-1;i>='A';i--){
                    for(j=c-1;j>='A';j--){ 
                             if(i<=j)
                             printf("     %c    ",j);
                    }
                    printf("\n");
          }
          return 0;
}