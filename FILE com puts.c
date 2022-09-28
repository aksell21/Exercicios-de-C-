#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	char texto[50];
	int i;
	 fp=fopen("d:\\teste1.txt","w");/*cria uma uma pasta */
	 if(fp==NULL)/*verifica se o ficheiro da erro ou nao */
	 printf("Erro ao criar ficheiro\n");
	  printf("Introduza o seu nome:");
	  gets(texto);/*guarda o texto*/ 
	  for(i=0;i<strlen(texto);i++)
	  fputc(texto[i],fp);/* introduzir caractera caracter */
	  fclose(fp);/* da close no FILE */ 
}
