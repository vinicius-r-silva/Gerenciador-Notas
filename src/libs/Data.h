#ifndef DATA_H
#define DATA_H

struct Id_Trabalhos {
	int Id;
	char Nome[30];
	float Media_Turma;
	struct Id_Trabalhos *ProxTrabalho;
};

struct Id_Provas{
	int Id;
	char Nome[30];
	float Media_Turma;
	struct Id_Provas *ProxProva;
};

struct Trabalhos_Aluno{
	int Id_Trabalho;
	int p;
	float Nota;
	struct Trabalhos_Aluno *Prox;
};

struct Provas_Aluno{
	int Id_Prova;
	float Nota;
	struct prova *Prox;
};

struct aluno {
	char Nome[30];
	int id;
	struct Provas_Aluno *Provas;
	struct Trabalhos_Aluno *Trabalhos;
};

typedef struct Id_Trabalhos ID_TRABALHOS;
typedef ID_TRABALHOS *ID_TRABALHOS_PTR;

typedef struct Id_Provas ID_PROVAS;
typedef ID_PROVAS *ID_PROVAS_PTR;

typedef struct Trabalhos_Aluno TRABALHOS_ALUNO;
typedef TRABALHOS_ALUNO *TRABALHOS_ALUNO_PTR;

typedef struct Provas_Aluno PROVAS_ALUNO;
typedef PROVAS_ALUNO *PROVAS_ALUNO_PTR;

#endif 