#include<stdio.h>
#include<stdio.h>

void main(){
	int num, i, marks;
	char name[50];
	FILE *fp;

	printf("Enter number of students: ");
	scanf("%d", &num);

	fp = (fopen("output.txt","a"));

	for(i = 0; i < num; i++){
		printf("%d. Enter name of student: ", i + 1);
		scanf("%s", name);
		printf("Enter marks: ");
		scanf("%d", &marks);
		fprintf(fp, "\nName: %s \nMarks: %d \n", name, marks);
	}
	fclose(fp);
}
