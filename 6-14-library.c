#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
	char userType, bookCategory;
	
	printf("User type ('T' for teacher, 'S' for student): ");
	scanf("%c", &userType);
	getchar();
	if (userType !='T' && userType!='S') {
		printf("Please, digit a valid user type ('T' for teacher, 'S' for student)");
	} else {
		printf("Book category ('A' or 'B'): ");
		scanf("%c", &bookCategory);
		getchar();
		if ((bookCategory != 'A' && bookCategory != 'B')) {
			printf("Please, digit a valid book category ('A' or 'B')");
		} else {
			if ((userType == 'T') || (userType == 'S' && bookCategory == 'A')) {
				printf("Allow. You can lease the book.\n");
			} else {
				printf("Denny. You can't lease the book.");
			}
		}
	}

	return 0;
}
