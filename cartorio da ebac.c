#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o

int registro(){
    printf("Voc� escolheu a op��o de registrar nome!\n\n");
    system("pause");
}

int consulta(){
	printf("Voc� escolheu a op��o ")
}

int main(){
	
	//Define a vari�vel
	int opcao = 0;
	int laco = 1;
	
	for(laco = 1; laco = 1;){
			system("cls");//limpa a tela
		//Define a localidade do programa (para padr�es de teclado ex: aceitar acentos
    	setlocale(LC_ALL, "Portuguese");
    
    	//criando o menu do programa
    	printf("### Cart�rio da EBAC ### \n\n");
    	printf("Escolha a op��o desejada do menu: \n \n");
    	printf("\t1 - Registrar nomes\n");
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n\n");
    	printf("Op��o: "); //apenas visual no momento em que o usu�rio digitar a op��oo
    	//fim do menu

		scanf("%d", &opcao); //recebe e armazena a op��o do usu�rio
		
		system("cls");//limpa a tela
		
		//vers�o criada com switch (melhor sistema de escolha para programas grandes pois utiliza menos mem�ria)
		switch(opcao){		
			case 1:
				printf("Voc� escolheu a op��o registrar nomes!\n\n");
				system("pause");
				break;
			
			case 2:
				printf("Voc�� escolheu a op��o consultar nomes!\n\n");
				system("pause");
				break;
				
			case 3:
				printf("Voc� escolheu a op��o deletar nomes!\n\n");
				system("pause");
				break;
				
			case 4:
                 teste();
                 break;
			
			default:
				printf("Essa op��o � inv�lida!\n\n");
				system("pause");
				break;
		}
				
		/*	
		//vers�o feita com if
		//validando a op��o selecionada pelo usu�rio
		if(opcao==1){
			printf("Voc� escolheu a op��o registrar nomes!\n");
			system("pause");
		}
		if(opcao==2){
			printf("Voc� escolheu a op��o consultar nomes!\n");
			system("pause");
		}
		if(opcao==3){
			printf("Voc� escolheu a op��o deletar nomes!\n");
			system("pause");
		}
		if(opcao <= 0 || opcao >=4){
			printf("Essa op��o � inv�lida!\n");
			system("pause");
		}
		*/
    
	}
}
