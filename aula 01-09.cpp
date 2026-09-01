#include <iostream>

/* crie u programa que receba uma letra e verifique se ela é vogal ou ou consoantes, 
se ela for vogal, verifique se ela é 'a' ou 'o' caso seja mostre 'aoba' caso seja 'i' ou 'u' mostre 'Lá ele"
Caso contrario '67' */

int main(int argc, char** argv) {
	
	char letra;
	printf ("insira uma letra:\n");
	scanf ("%c", &letra);
	
	if(letra == 'a' || letra =='e' || letra =='i'|| letra =='o' || letra =='u'){
		if(letra =='a' || letra == 'o'){
			printf ("aoba");
		}
		if (letra == 'i'|| letra == 'u'){
			printf("LA ELE");
			
		}
	}
	else {
		printf("67");
	}
	
	if (letra=='a')printf ("a de amor");
	else if (letra=='b')printf("\nb de baixxxinhooooo");	/* coloquei o \n para mudar de linha */
	else if (letra=='c')printf ("c de coração");
	else if (letra=='d')printf ("d de docinho");
	
	/* swith case */
	
	switch(letra){
		case 'e':
			printf ("\ne de escola");/* coloquei o \n para mudar de linha */
			break;
		case 'f':
			printf("f de feijao");
			break;	
		case 'g':
			printf("g de gato");
			break;
	}
	
	return 0;
}
