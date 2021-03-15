#include <stdio.h>
#include <string.h>
int main(void) {
  printf("INSTRUÇÕES:\n");
  printf("Escolha as opções ao final de acordo com o seu número.\n");
  printf("(* Para multiplicação), (/ Para divisão), (- subtração), (+ adição)\n\n");
  float n1,n2,result=0;
  int stt=0;
  char simbol[5];
    for(;;){
      if(stt==0){
        printf("Digite um operador: ");
        scanf("%f",&n1);
      }
      printf("Digite a operação: ");
      scanf("%s",simbol);
      if(strcmp(simbol,"$")==0){return 0;}
      if(strcmp(simbol,"z")==0){
        stt=0;
        n1=0;
        printf("\nRESULTADO ZERADO\n");
      }
      else{
        stt=1;
        printf("Digite um operador: ");
        scanf("%f",&n2);
      }
    if(strcmp(simbol,"*")==0){n1 = n1*n2;}
    else if(strcmp(simbol,"+")==0){n1 = n1+n2;}
    else if(strcmp(simbol,"/")==0){n1 = n1/n2;}
    else if(strcmp(simbol,"-")==0){n1 = n1-n2;}
    else if(strcmp(simbol,"z")==0){continue;}
    else{printf("\nOperação não encontrada\n");}
    printf("\nResult = %f\n",n1);
  }
  return 0;
}