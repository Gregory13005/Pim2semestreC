#include<stdio.h>
#include<string.h>
#include <locale.h>

int opcao = 0;
int confirme = 0;
int setor = 0;				// variaveis



char emaiil[70]; 
char email2[70];
 
void TelaLogin(){

    char login[10] = "teste";
    char login1[10];				//confirmaçao
    char senha[10] = "teste";
    char senha1[10];        
    

    printf("Digite o Login: ");
    scanf("%s", login1);
    printf("Digite a Senha: ");			//login
    scanf("%s", senha1);

    if (strcmp(login, login1) == 1 & strcmp(senha, senha1) == 1)
        printf("\n");
        else
        printf("\n\nDADOS INVALIDOS!\n\n");    
}



void MostrarMenu(){
    printf("                                        ----------------------------\n");
    printf("                                        |SEJA BEM-VINDO AO SMARTADM!|\n");
    printf("                                        ----------------------------\n\n\n\n");
    printf("                                     O Melhor software para sua empresa!!\n\n");
    printf("                                                 Vamos Iniciar?\n\n\n");					//menu
    printf("1) - CADASTRO DE Usuario\n");
    printf("2) - CADASTRO DE Clientes\n");
    printf("3) - ESOLHER SETOR\n\n");    
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcao);
    getchar();    
}
void CadastroUsuario(){
	
	char nome[70];	char endereco[70];char cidade[70];char email[70];		// variaveis
	char cep[70]; int idade; char cep2[70];		
	
	printf("\nDigite Seu Nome Completo:\n");
	gets(nome);
	
	
	printf("\nDigite Sua Endereço Completo:\n");
	gets(endereco);	

	printf("\n Digite Sua Cidade:\n");				// cadastros dos usuarios
	gets(cidade);	

	printf("\nEmail de Acesso:\n");
	gets(email);

	printf("\nCEP: apenas numeros\n");
	gets(cep);

	printf("\nCPF: apenas numeros\n");
	gets(cep2);


	printf("\nDigite Sua Idade:\n");
	scanf("%d", &idade);

	
	printf("\nSegue abaixo dados informados:\n\n");
	printf("Nome completo: %s.\n", nome);
	printf("Idade: %d.\n", idade);
	printf("Endereco: %s.\n", endereco);
	printf("Email: %s.\n", email);
	
	printf("CEP: %s.\n", cep);
	printf("CPF: %s.\n", cep2);


	printf("\nConfirma os dados? 1 para sim e 2 para nao\n");
	scanf("%d", &confirme);
}

void CadastroClientes(){
	
	char nome2[70];	char endereco2[70];char cidade2[70];char email2[70];
	char cep2[70]; char cpf2[70]; int idade2;
	
	printf("\nDigite Seu Nome Completo:\n");
	gets(nome2);
	
	
	printf("\nDigite Sua Endereço Completo:\n");			// cadastros dos clientes
	gets(endereco2);	

	printf("\n Digite Sua Cidade:\n");
	gets(cidade2);

	printf("\nEmail de Acesso:\n");
	gets(email2);

	printf("\nCEP: apenas numeros\n");
	gets(cep2);

	printf("\nCPF: apenas numeros\n");
	gets(cpf2);

	printf("\nDigite Sua Idade:\n");
	scanf("%d", &idade2);

	
	printf("\nSegue abaixo dados informados:\n\n");
	printf("Nome completo: %s.\n", nome2);
	printf("Idade: %d.\n", idade2);
	printf("Endereco: %s.\n", endereco2);
	printf("CEP: %s.\n", cep2);
	printf("CPF: %s.\n", cpf2);
	printf("Email: %s.\n", email2);

	printf("\nConfirma os dados? 1 para sim e 2 para nao\n");
	scanf("%d", &confirme);
}

void escolhersetor(){
	printf("Escolha seu setor:\n");
	printf("1-Para Setor de RH.\n");
	printf("2-Para Setor Financeiro.\n");
	printf("3-Para setor de TI.\n");
	printf("4-Para Setor comercial.\n");
	scanf("%d", &setor);
}
void confirmadosusuario(){
	printf("\n\nCadastro efetuado.");
	printf("\nSeu login: %s.", emaiil);
	printf("\nSua senha de acesso: 0304\n\n\n\n"); // opçao 3 do menu, nao mexer
	escolhersetor();
}
void naoconfirmausuario(){	
	printf ("\ndados nao confirmados\n\n\n");
	MostrarMenu();
}
void confirmadosclientes(){
	printf("\n\nCadastro efetuado.");
	printf("\nlogin do cliente: %s.", email2);
	printf("\nSenha de acesso do cliente: 0405\n\n\n\n");
	escolhersetor();
}
void naoconfirmacliente(){
	printf ("\n\ndados nao confirmados");
	printf ("\nVoce voltara ao menu inicial\n\n");
	MostrarMenu();
}
void setorrh(){
	printf("\nBem vindo ao RH\n");
}
void setorfinanceiro(){
	printf("\nBem vindo ao financeiro\n");
}
void setorti(){
	printf("\nBem vindo ao TI\n");
}
void setorcomercial(){
	printf("\nBem vindo ao Comercial\n");
}

int main(){
    TelaLogin();
    MostrarMenu();
        switch (opcao){
            case 1 :

                CadastroUsuario();
                switch (confirme){
                	case 1:
                	confirmadosusuario();	
                            break;
                		
                	case 2:
                	naoconfirmausuario();		
		break;
		}
            	 break;

               case 2 : 
                CadastroClientes();
	  switch (confirme){
                	case 1:
                	confirmadosclientes();	
               	break;
                		
                	case 2:
                	naoconfirmacliente();
            		break;
		}	
	 break;
		}
	
				
	escolhersetor();		
		if(setor==1){
		printf("Bem vindo ao RH\n");
		}					
		if(setor==2){
		printf("Bem vindo ao Financeiro\n");
		}			
		if(setor==3){
		printf("bem vindo ao TI\n");
		}			
		if(setor==4){
		printf("Bem vindo ao Comercial\n");
		}
		else("Setor digitado invalido\n");			
		};
	  
	


        

