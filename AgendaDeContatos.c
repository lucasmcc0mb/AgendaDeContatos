/*********************************************

Nomes: Marcus Felipe e Lucas Emanuel
Turma: I1A

**********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.c>
#include <windows.h>

struct contatos{
	char nome[20];
	long int num;
	char local[15];
	int idade;
	char numlog[13];
} salvos[100], login;

int main(){
	srand(time(NULL));
	strcpy(login.nome, "<vazio>");
	strcpy(login.numlog, "<vazio>");
	strcpy(login.local, "<vazio>");
	
	char pesquisa[20], saving[20];
	int i, resp, j, nc=0, t, t2, prob, log=0, flag=0, aux;
	
	for(i=0; i<100; i++){
		strcpy(salvos[i].nome, "VAZIO");
	}
	while(resp!=6){
		float load = 0.0;
		system("color 3F");
		system("cls");
		//logo agenda
		for(i=0; i<7; i++){
			for(j=0; j<50; j++){
				gotoxy(10+j, 9+i);
				textbackground(6); //2
				printf(" ");
			}
		}
		textbackground(10); //14
		//Texto AGENDA
		gotoxy(14, 14); printf(" "); gotoxy(14, 13); printf("        "); gotoxy(15, 12); printf(" "); gotoxy(16, 11); printf(" ");
		gotoxy(17, 10);
		printf("  ");
		gotoxy(19, 11); printf(" "); gotoxy(20, 12); printf(" "); gotoxy(21, 14); printf(" ");
		
		gotoxy(24, 10); printf(" "); gotoxy(25, 10); printf(" "); gotoxy(26, 10); printf(" "); gotoxy(27, 10); printf(" "); gotoxy(28, 10); printf(" "); gotoxy(23, 11); printf(" "); gotoxy(23, 12); printf(" "); gotoxy(23, 13); printf(" ");
		gotoxy(24, 14); printf(" "); gotoxy(25, 14); printf(" "); gotoxy(26, 14); printf(" "); gotoxy(27, 14); printf(" "); gotoxy(28, 13); printf(" "); gotoxy(28, 12); printf(" "); gotoxy(27, 12); printf(" "); gotoxy(26, 12); printf(" ");
		
		gotoxy(30, 10); printf(" "); gotoxy(31, 10); printf(" "); gotoxy(32, 10); printf(" "); gotoxy(33, 10); printf(" ");
		gotoxy(30, 11); printf(" ");
		gotoxy(30, 12); printf(" "); gotoxy(31, 12); printf(" "); gotoxy(32, 12); printf(" "); gotoxy(33, 12); printf(" ");
		gotoxy(30, 13); printf(" ");
		gotoxy(30, 14); printf(" "); gotoxy(31, 14); printf(" "); gotoxy(32, 14); printf(" "); gotoxy(33, 14); printf(" ");
	
		gotoxy(35, 10); printf(" "); gotoxy(36, 10); printf(" "); gotoxy(37, 10); printf(" "); gotoxy(40, 10); printf(" ");
		gotoxy(35, 11); printf(" "); gotoxy(37, 11); printf(" "); gotoxy(40, 11); printf(" "); 
		gotoxy(35, 12); printf(" "); gotoxy(37, 12); printf(" "); gotoxy(38, 12); printf(" "); gotoxy(40, 12); printf(" ");
		gotoxy(35, 13); printf(" "); gotoxy(38, 13); printf(" "); gotoxy(40, 13); printf(" ");
		gotoxy(35, 14); printf(" "); gotoxy(39, 14); printf(" "); gotoxy(40, 14); printf(" ");
	
		gotoxy(42, 10); printf(" "); gotoxy(43, 10); printf(" "); gotoxy(44, 10); printf(" "); gotoxy(45, 10); printf(" ");
		gotoxy(42, 11); printf(" "); gotoxy(46, 11); printf(" ");
		gotoxy(42, 12); printf(" "); gotoxy(46, 12); printf(" ");
		gotoxy(42, 13); printf(" "); gotoxy(46, 13); printf(" ");
		gotoxy(42, 14); printf(" "); gotoxy(43, 14); printf(" "); gotoxy(44, 14); printf(" "); gotoxy(45, 14); printf(" ");
		
		gotoxy(48, 14); printf(" "); gotoxy(48, 13); printf("        "); gotoxy(49, 12); printf(" "); gotoxy(50, 11); printf(" ");
		gotoxy(51, 10);
		printf("  ");
		gotoxy(53, 11); printf(" "); gotoxy(54, 12); printf(" "); gotoxy(55, 14); printf(" ");
		
		textbackground(3);
		
		if(log==1){
			gotoxy(24, 19);
			printf("Digite uma das opcoes:");
		} else {
			gotoxy(22, 19);
			printf("Digite 0 para fazer login:");
		}
		gotoxy(74, 10);
		printf("1-Cadastrar");
		gotoxy(74, 12);
		printf("2-Listar");
		gotoxy(74, 14);
		printf("3-Alterar");
		gotoxy(74, 16);
		printf("4-Remover");
		gotoxy(74, 18);
		printf("5-Pesquisar");
		gotoxy(74, 20);
		printf("6-Sair");
		gotoxy(33, 21);
		textbackground(15);
		printf("   ");
		textcolor(0);
		gotoxy(34, 21);
		scanf("%d", &resp);
		system("color 30");
		system("cls");
		//tela de carregamento
		prob = rand() % 12;
		if(prob<=5){
			gotoxy(55, 14);
			if(resp<6 && resp>=0){
				printf("Carregando...");
				for(t=0; t<23; t++){
					textbackground(3);
					gotoxy(59, 16);
					printf("%.0f%%", load);
					load+=4.44;
					gotoxy(50+t, 17);
					textbackground(2);
					printf(" ");
					Sleep(100);
				}
			}
		}
		system("color 3F");
		system("cls");
		switch(resp){
			case 1:
				if(nc==100){
					system("color 1F");
					gotoxy(50, 11);
					printf("Lista de contatos cheia!");
					gotoxy(50, 13);
					printf("Parece que voce atingiu a capacidade maxima permitida.");
					gotoxy(50, 15);
					printf("Somos ordenados a permitir somente 100 contatos salvos,");
					gotoxy(50, 16);
					printf("por favor, delete alguns contatos para salvar mais.");
					textbackground(WHITE);
					j=0;
					for(i=1; i<6; i++){
						gotoxy(36-i, 11+j);
						printf(" ");
						j++;
					}
					j=0;
					for(i=1; i<6; i++){
						gotoxy(36-i, 20-j);
						printf(" ");
						j++;
					}
					gotoxy(23,14);
					printf("    ");
					gotoxy(23,17);
					printf("    ");
					
					textbackground(1);
					gotoxy(50, 18);
					system("pause");
					break;
				}
				else{
					for(i=0; i<100; i++){
						if(strcmp(salvos[i].nome, "VAZIO") == 0){
							printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tNome:\n");
							textbackground(7);
							printf("\t\t\t\t\t\t                     ");
							textcolor(0);
							fflush(stdin);
							gotoxy(51, 13);
							gets(saving);
							textbackground(3);
							textcolor(15);
							for(i=0; i<100; i++){
								if(strcmp(saving, salvos[i].nome)==0){
									textcolor(15);
									textbackground(3);
									printf("\n\t\t\t\tParece que este contato ja existe, tente outro nome.");
									Sleep(1000);
									flag=1;
									break;
								}
								else{
									aux=i;
									if(strcmp(salvos[aux].nome, "VAZIO")==0){
										strcpy(salvos[aux].nome, saving);
										flag=0;
										break;
									}
								}
							}
							if(flag==0){
								printf("\n\t\t\t\t\t\tNumero (9 espacos):\n");
								textbackground(7);
								printf("\t\t\t\t\t\t                     ");
								textcolor(0);
								gotoxy(52, 16);
								scanf("%ld", &salvos[i].num);
								nc++;
								textcolor(15);
								textbackground(3);
								printf("\n\t\t\t\t\t\tContato salvo!");
								Sleep(700);
								break;
							}
							else
							break;
						}
					}
					flag=0;
				}
				break;
			case 2:
				gotoxy(72,2);
					printf("Contatos\n\n");
				for(i=0; i<=nc; i++){
					if(strcmp(salvos[i].nome, "VAZIO")!=0){
						printf("\t\t\t\t\t\t\t\tCodigo: [%d]\n", i);
						printf("\t\t\t\t\t\t\t\tNome: %s\n", salvos[i].nome);
						printf("\t\t\t\t\t\t\t\tNumero: %ld\n", salvos[i].num);
						printf("\t\t\t\t\t\t\t\t------------------------\n");
					}
				}
				textbackground(15);
				for(t=0; t<8; t++){
					for(t2=0; t2<17; t2++){
						gotoxy(21+t2, 7+t);
						printf(" ");
					}
					printf("\n");
				}
				for(t=0; t<4; t++){
					gotoxy(28, 8+t);
					textbackground(8);
					printf("   ");
				}
				gotoxy(28, 13);
				printf("   ");
				textbackground(3);
				gotoxy(21,16);
				printf("Voce: %s", login.nome);
				gotoxy(21,17);
				printf("Seu numero: %s", login.numlog);
				gotoxy(21,18);
				printf("Contatos: %d", nc);
				gotoxy(21,19);
				printf("Idade: %d", login.idade);
				gotoxy(21,20);
				printf("Local: %s", login.local);
				for(t=0; t<3; t++){
					for(t2=0; t2<3; t2++){
						gotoxy(28+t2, 23+t);
						textbackground(8);
						printf(" ");
					}
				}
				textbackground(7);
				gotoxy(29, 24);
				printf(" ");
				gotoxy(29,24);
				getch();
				break;
			case 3:
				printf("\n\n\n\t\t\tDigite o nome do contato para alterar:");
				textbackground(15);
				printf("                     ");
				textcolor(0);
				fflush(stdin);
				gotoxy(64, 4);
				gets(pesquisa);
				textbackground(3);
				textcolor(15);
				for(i=0; i<=nc; i++){
					if(strcmp(pesquisa, salvos[i].nome)==0){
						j=i;
						printf("\n\t\t\tDigite um novo nome: ");
						textbackground(15);
						printf("                       ");
						textcolor(0);
						fflush(stdin);
						gotoxy(47,6);
						gets(salvos[j].nome);
						textbackground(3);
						textcolor(15);
						printf("\n\t\t\tDigite um novo numero: ");
						textbackground(15);
						printf("                     ");
						textcolor(0);
						gotoxy(49,8);
						scanf("%ld", &salvos[j].num);
						textbackground(3);
						textcolor(15);
						printf("\n\t\t\t\t\t\tContato alterado!\n");
						break;
					}
					else
					if(i==nc-1)
					printf("\n\t\t\t\t\t    Contato nao encontrado!\n");
				}
				printf("\n\t\t\t");
				system("pause");
				break;
			case 4:
				printf("\n\n\n\t\t\tDigite o nome do contato que deseja remover: ");
				textbackground(15);
				printf("                     ");
				textcolor(0);
				fflush(stdin);
				gotoxy(72, 4);
				gets(pesquisa);
				textbackground(3);
				textcolor(15);
				for(i=0; i<nc; i++){
					int sure;
					if(strcmp(pesquisa, salvos[i].nome)==0){
						j=i;
						printf("\n\t\t\t\t\t\tVoce tem certeza disso?");
						gotoxy(48,9);
						textbackground(2);
						printf("  1  ");
						gotoxy(68,9);
						textbackground(4);
						printf("  2  ");
						textbackground(15);
						textcolor(0);
						gotoxy(59,10);
						printf("   ");
						gotoxy(60,10);
						scanf("%d", &sure);
						textbackground(3);
						textcolor(15);
						if(sure==1){
							strcpy(salvos[j].nome, "VAZIO");
							salvos[i].num = 0;
							printf("\n\t\t\t\t\t\t   Contato excluido!\n\n\t\t\t");
							nc--;
						}
						else
						printf("\n\n\t\t\t");
						break;
					}
					else{
						textbackground(3);
						textcolor(15);
						if(i==nc-1)
						printf("\n\t\t\tContato nao encontrado!\n\n\t\t\t");
					}
				}
				system("pause");
				break;
			case 5:
				printf("\n\t\t\t\tPesquisar:");
				textbackground(15);
				printf("                                       ");
				textcolor(0);
				fflush(stdin);
				gotoxy(45, 2);
				gets(pesquisa);
				textbackground(3);
				textcolor(15);
				for(i=0; i<nc; i++){
					if(strcmp(pesquisa, salvos[i].nome)==0){
						textbackground(7);
						for(t=0; t<8; t++){
							for(t2=0; t2<53; t2++){
								gotoxy(31+t2, 4+t);
								printf(" ");
							}
						}
						textcolor(0);
						gotoxy(1, 4);
						printf("\n\t\t\t\t\t    Status: Offline\n\t\t\t\t\t    Nome: %s\n\t\t\t\t\t    Telefone: %ld\n\t\t\t\t\t    Descricao: \"Ela reclamou pq eu troquei\n\t\t\t\t\t      ela por futebol, mas quando eu\n\t\t\t\t\t      perguntei qnts copas ela tinha...\"\n\n", salvos[i].nome, salvos[i].num);
						textbackground(8);
						for(t=0; t<6; t++){
							for(t2=0; t2<12; t2++){
								gotoxy(32+t2, 5+t);
								printf(" ");
							}
						}
						textbackground(3);
						textcolor(15);
						gotoxy(1, 13);
						break;
					}
					else
					if(i==nc-1)
					printf("\n\n\t\t\t\tContato nao encontrado!\n");
				}
				printf("\n\t\t\t\t");
				system("pause");
				break;
			case 6:
				load=0.0;
				gotoxy(55, 14);
				printf("Fechando...\n");
				for(t=0; t<23; t++){
					textbackground(3);
					gotoxy(59, 16);
					printf("%.0f%%", load);
					load+=4.44;
					gotoxy(50+t, 17);
					textbackground(2);
					printf(" ");
					Sleep(100);
				}
				system("color 30");
				system("cls");
				Sleep(1500);
				system("color 0F");
				Sleep(500);
				break;
			case 0:
				printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\tSeu nome:\n");
				textbackground(7);
				printf("\t\t\t\t\t\t                     ");
				textcolor(0);
				fflush(stdin);
				gotoxy(51, 10);
				gets(login.nome);
				textbackground(3);
				textcolor(15);
				printf("\n\t\t\t\t\t\tSeu numero:\n");
				textbackground(7);
				printf("\t\t\t\t\t\t                     ");
				textcolor(0);
				gotoxy(52, 13);
				fflush(stdin);
				gets(login.numlog);
				textbackground(3);
				textcolor(15);
				printf("\n\t\t\t\t\t\tIdade:\n");
				textbackground(7);
				printf("\t\t\t\t\t\t                     ");
				textcolor(0);
				gotoxy(52, 16);
				scanf("%d", &login.idade);
				textbackground(3);
				textcolor(15);
				printf("\n\t\t\t\t\t\tOnde mora (cidade ou pais):\n");
				textbackground(7);
				printf("\t\t\t\t\t\t                     ");
				textcolor(0);
				gotoxy(52, 19);
				fflush(stdin);
				gets(login.local);
				textbackground(3);
				textcolor(15);
				log=1;
				break;
			default:
				gotoxy(48,15);
				printf("Escolha uma opcao valida.\n");
				Sleep(1200);
				break;
		}
		system("cls");
	}

	return 0;
}

