#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
//	char tipo_usuario, classif_livro; 
	
//	printf("Informe o tipo de usuário e a classificação do livro desejado: "); 
//   	scanf("%c %c", &tipo_usuario, &classif_livro); 
//   
//   	if ((tipo_usuario == 'P') || (tipo_usuario == 'A' && classif_livro == 'A'))
//		printf("Pode locar o livro\n"); 
//   	else 
//    	printf("Não pode locar o livro\n"); 
   
	char userType, bookCategory;

	printf("User type: ");
	getchar();
	scanf("%c", &userType);
	
	printf("Book category: ");
	getchar();
	scanf("%c", &bookCategory);
	
		switch (category) {
		case 'a' :
			
	    	break;
	    	
		case 'b' :
	    	
	    	break;
		
		case 'c' :
			
	    	break;
	     
	    default :
	    	printf ("Category invalid. Please, try again.");
			exit(0);
	}
		
	if((userType != 'T') && (bookCategory == 'B'))  {
		printf("Denny. \n");
	} else {
		printf("Alow.\n");
	}

	return 0;
}
