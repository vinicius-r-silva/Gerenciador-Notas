#include "System.h"

//Abre os arquivos com as notas e identificacoes dos alunos, trabalhos e provas
int Init_Files(FILE **File_Alunos, FILE **File_Provas, FILE **File_Trabalhos) {
	//Abre Arquivo com as notas dos alunos
	*File_Alunos = fopen("Alunos.dat", "r+");
	if (*File_Alunos == NULL) { //Caso o arquivo nao exista, cria um
		printf("Arquivo de alunos inexistente, criando novo...");
		*File_Alunos = fopen("Alunos.dat", "w+");

		if (*File_Alunos == NULL) { //Se deu erro ao criar o arquivo, retorna -1
			printf("Erro ao criar arquivo de alunos\n");
			return 0;
		}
		else
			printf("Sucesso!\n");
	}
	else
		printf("Arquivo de alunos localizado com sucesso\n");

	//Abre arquivo de indentificao das provas
	*File_Provas = fopen("Provas.dat", "r+");
	if (*File_Provas == NULL) {
		printf("Arquivo de provas inexistente, criando novo...");
		*File_Provas = fopen("Provas.dat", "w+");

		if (*File_Provas == NULL) {
			printf("Erro ao criar arquivo de provas\n");
			return 0;
		}
		else
			printf("Sucesso!\n");
	}
	else
		printf("Arquivo de provas localizado com sucesso\n");

	//Abre arquivo de indentificacao dos trabalhos
	*File_Trabalhos = fopen("Trabalhos.dat", "r+");
	if (*File_Trabalhos == NULL) {
		printf("Arquivo de trabalhos inexistente, criando novo...");
		*File_Trabalhos = fopen("Trabalhos.dat", "w+");

		if (*File_Trabalhos == NULL) {
			printf("Erro ao criar arquivo de trabalhos\n");
			return 0;
		}
		else
			printf("Sucesso!\n");
	}
	else
		printf("Arquivo de trabalhos localizado com sucesso\n");

	//Se deu tudo certo, retorna 1
	return 1;
}