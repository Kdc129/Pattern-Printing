#include<stdio.h>
int main(){
          char c,i,j;
           printf("\nInput a character from user ::");
          scanf("%c",&c);
          for(i='A';i<c;i++){
                    for(j='A';j<c;j++){ 
                            
                              
                              printf("     %c    ",j);
                    }
                    printf("\n");
          }
          return 0;
}