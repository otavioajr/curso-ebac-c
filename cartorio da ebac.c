#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro(){
    char arquivo [40];
    char cpf [40];
    char nome [40];
    char sobrenome [40];
    char cargo [40];
    
    printf("Digite o CPF: ");
    scanf("%s", cpf);
    
    strcpy(arquivo, cpf);
    
    FILE *file;
    
    file = fopen(arquivo, "w");
    fprintf(file, cpf);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o nome:");
    scanf("%s", nome);
    
    file = fopen(arquivo, "a");
    fprintf(file, nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file, sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o cargo: ");
    
}

int consulta(){
	printf("Você escolheu a opção consultar nomes\n\n");
	system("pause");
}

int deletar(){
	printf("Você escolheu a opção deletar nomes!\n\n");
	system("pause");
}

int main(){
	
	//Define a variável
	int opcao = 0;
	int laco = 1;
	
	for(laco = 1; laco = 1;){
			system("cls");//limpa a tela
		//Define a localidade do programa (para padrões de teclado ex: aceitar acentos
    	setlocale(LC_ALL, "Portuguese");
    
    	//criando o menu do programa
    	printf("### Cartório da EBAC ### \n\n");
    	printf("Escolha a opção desejada do menu: \n \n");
    	printf("\t1 - Registrar nomes\n");
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n\n");
    	printf("Opção: "); //apenas visual no momento em que o usuário digitar a opçãoo
    	//fim do menu

		scanf("%d", &opcao); //recebe e armazena a opção do usuário
		
		system("cls");//limpa a tela
		
		//versão criada com switch (melhor sistema de escolha para programas grandes pois utiliza menos memória)
		switch(opcao){		
			case 1:
				registro();
				break;
			
			case 2:
				consulta();
				break;
				
			case 3:
				deletar();
				break;
			
			default:
				printf("Essa opção é inválida!\n\n");
				system("pause");
				break;
		}
				
		/*	
		//versão feita com if
		//validando a opção selecionada pelo usuário
		if(opcao==1){
			printf("Você escolheu a opção registrar nomes!\n");
			system("pause");
		}
		if(opcao==2){
			printf("Você escolheu a opção consultar nomes!\n");
			system("pause");
		}
		if(opcao==3){
			printf("Você escolheu a opção deletar nomes!\n");
			system("pause");
		}
		if(opcao <= 0 || opcao >=4){
			printf("Essa opção é inválida!\n");
			system("pause");
		}
		*/
    
	}
}
