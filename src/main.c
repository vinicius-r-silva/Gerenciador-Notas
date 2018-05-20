//VINICIUS RIBEIRO DA SILVA
//vinicius.r@usp.br
//Ultima modificao 20/05/2018

#include <stdio.h>
#include <stdlib.h>

#include "Data.h"
#include "System.h"
#include "Interface.h"

//-------------------------------------MAIN------------------------------------//
int main() {
	FILE *File_Alunos = NULL;
	FILE *File_Provas = NULL;
	FILE *File_Trabalhos = NULL;

	Init_menu(); //Mostra interface inicial
	if (!Init_Files(&File_Alunos, &File_Provas, &File_Trabalhos)) //abre ou cria arquivos dos alunos, trabalhos e provas
		return -1;                                                //Caso deu erro em alguns dos arquivos, a funcao retorna 0

	//TODO: Remover o system("PAUSE") do main
	system("PAUSE");  //debug
}
