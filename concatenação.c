#include <stdio.h>
#include <string.h>
int main(){
int i, x, tam;
char string2[100], string[30];

printf("Insira uma string: \n");
gets(string);
strcpy(string2,string);
do{
	printf("Insira uma string: \n");
	scanf("%s",string);
	strcat(string2,string);
	printf("Seu nome esta completo?\n1-sim\n2-nao\n");
	scanf("%d",&x);
	if(x==1){
		break;
	}
	else if(x==2){
		i=2;
	}
}while(i==2);
tam=strlen(string2);
printf("%s\n",string2);
printf("%d\n",tam);
return 0;
}
