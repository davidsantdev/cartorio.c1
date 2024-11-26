#include <stdio.h> // biblioteca de comunicação com o usuarios 
#include <locale.h>// biblioteca de alocação de texto por região
#include <stdlib.h>//biblioteca de alocação de espaçoem memória 
#include <string.h>/biblioteca responsavel por cuidar das strings




int registro ()// função responsavel por cadastrar os usuarios no sistema 
{
	//inicio criação de variaveis
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//final da criação de variaveis
	printf("Digite o cpf a ser cadastrado:");//coletando as informações do usuario
	scanf ("%s", cpf);
	
	
	strcpy(arquivo, cpf);//responsavel por copiar os valores das strings
	
	FILE*file;//cria o arquivo
	file=fopen(arquivo, "w");//cria o arquivo e o "w" significa escrever
	fprintf (file, cpf);//salva o valor da variavel
	fclose (file);//fecha arquivo
	
	file=fopen (arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o nome a ser registrado:");
	scanf ("%s", nome);
	
	file=fopen (arquivo, "a");
	fprintf (file, nome);
	fclose (file);
	
	file= fopen (arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o sobrenome a ser cadastrado:");	
	scanf ("%s", sobrenome);
	
	file= fopen (arquivo, "a");
	fprintf (file, sobrenome);
	fclose (file);
	
	file= fopen (arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o cargo a ser cadastrado:");
	scanf ("%s", cargo);
	
	file=fopen (arquivo, "a");
	fprintf (file, cargo);
	fclose (file);
	
	system ("pause");
	system ("cls");
	
	
	
	
}



int consulta ()

{
	
	
	
	
    
     
     
     char cpf [40];
     char conteudo [200];
     
     printf ("Digite o cpf a ser consultado:");
     scanf ("%s", cpf);
     
     FILE*file;
     file=fopen(cpf, "r");
     
     if (file==NULL)
     {
     	
     	printf ("Nao foi possivel abrir o arquivo, nao localizado");
         
        
        
    	
	 }
	 
	 
	 while (fgets (conteudo, 200, file)!=NULL)
	 {
	 	
	 	printf ("\nEssas sao as informacoes do usuario");
	 	
	 	
	 	 printf ("%s", conteudo);
        printf ("\n\n");

	 	
	 	
	 	
	 }

      	
	system ("pause");
	fclose (file);
system ("cls");
	
}



int deletar ()
{
	
	char cpf [40];
	printf("Digite o cpf do usuario a ser deletado");
	scanf ("%s", cpf);
	
	remove (cpf);
	FILE *file;
	file=fopen (cpf, "r");
	
	if (file==NULL)
	{
		
		printf ("O usuario nao se encontra no sistema!\n");
		system ("pause");
		
		
	}
}
	
	
	
	int main ()
	
 {
 
    int opcao = 0;//definindo variaveis
    int laco = 1;
    for (laco=1; laco=1; )
{

    
	
        
        setlocale(LC_ALL, "Portuguese");//definindo a linguagem
	printf ("\tCartório da EBAC\t");//inicio do menu
	printf ("\n\nescolha a opcao desejada do menu\n\n");
	printf ("\t1- Registrar nomes \n");
	
	printf ("\t2- Consultar nomes \n");
	printf ("\t3- Deletar nomes \n");
	printf ("\t4- sair do programa\n\n ");
	printf ("opcao:");//fim do menu

    
    
	scanf("%d", &opcao);//armazenando a escolha do usuario
	system ("cls");//responsavel por limpar a tela

	switch (opcao)// inicio da seleção do menu
{
	
     case 1:
     registro();//chamada de função
     break;



	case 3:
    deletar();
    break;


	case 2:
	consulta();
	break;
	case 4:
		
		printf ("obrigado por usar o programa!");
	return 0;
	break;     
	
	default:
	
	system ("cls");           
	printf("\tEssa opcao nao esta disponivel\t\t");
	system("pause");
	break;
	          
	system ("cls");	
		
		
		
	}
	
	
	
	
	
	
}

}
