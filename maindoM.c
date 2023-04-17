#include <stdio.h>
#include <math.h>
/*int main(void) {
  char nome[20];
  int idade;
  for(int i=0;i<8;i++){
    printf("Digite seu nome\n");
  scanf(" %s",nome);

  printf("Digite sua idade\n");
  scanf("%d",&idade);

    if(idade>21){
      printf("nome:%s.\n",nome);
    }
  }
  return 0;
}*/
/*int main(void){
  int n1,cubo;
  for(int i=0;i<10;i++){
    printf("\nDigite um numero:");
  scanf("%d",&n1);
    cubo=n1*n1*n1;
    printf("\no cubo do numero é:%d",cubo);
  }
  return 0;
}*/

int main (void){
  
  for(int i=1;i<=15;i++){
    printf("3 elevado a %d= %d\n",i,(int)pow(3,i));
    
}
return 0;
}