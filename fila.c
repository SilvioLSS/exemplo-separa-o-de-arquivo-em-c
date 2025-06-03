#define MAX 100

struct Fila{
	int item[MAX];
	int fim;
};

typedef struct Fila FILA;

FILA criarFila(){
	FILA fila;
	fila.fim = -1;
	return fila;
}

int verificarVazia(FILA *f){
	if( f->fim == -1 ){
		return 1;
	} else {
		return 0;
	}
}

int verificarCheia(FILA *f){
	if( f->fim == MAX - 1 ){
		return 1;
	} else {
		return 0;
	}
}

void inserirFila(FILA *f, int valor){
	if ( !verificarCheia(f) ){
		f->fim++;
		f->item[f->fim] = valor;
	} else {
		printf("\nA fila esta vazia!");
	}
}

void removerFila(FILA *f){
	if( verificarVazia(f) ){
		printf("\nA fila esta vazia!");
	} else {
		int i;
		for( i = 0; i < f->fim + 1; i++ ){
			f->item[i] = f->item[i + 1];
		}
		f->fim--;
		
	}
}
