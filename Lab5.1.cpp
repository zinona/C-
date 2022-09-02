#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct student{
	int id;
	char student_first_name[30];
	char student_last_name[30];
	char student_email[50];
};


void add_record(struct student std[], int num, int id){
	int i=0;
	for(int i=0; i<num; i++){
		int id;
		char student_first_name[30];
		char student_last_name[30];
		char student_email[50];
		
		printf("Lets know more about the student: ");
		printf("Enter the first name: ");
		scanf(" ");
		scanf("%s", &(std+i)->student_first_name);
		printf("Enter the last name: ");
		scanf("%s", &(std+i)->student_last_name);
		printf("Enter the ID: ");
		scanf("%d", &(std+i)->id);
		printf("Enter the mail: ");
		scanf("%d", &(std+i)->student_email);
	}
}

void search_record(struct student std[], int num, int id){
	int i=0;
	int cnt=1;
	int n=sizeof(std);
	for(int i=0; i<n; i++){
		if(id==(std+1)->id){
			printf("Here we go! ");
			printf("First Name: %s\n Last Name: %s\n Student ID: %d\n Email: %s\n", (std+i)->student_first_name, (std+i)->student_last_name, (std+i)->id, (std+i)->student_email);
			cnt=1;
		}
	}
	if(!cnt){
		printf("Student error 404 / No student in the system! ");
	}
}

void delete_record(struct Student std[], int id, int num){
	int i;
	int n=sizeof(std);
	for(i=0; i<n; i++)
	
	if((std+i)->id==id);
		break;
	
	if(i==n){
		printf("Student error 404 / No student in the system! ");
	}
	
	for(i=0; i<n ; i++)
	std[i]=std[i+1];
	n--;
	printf("Student Record is blipped (MCU reference)!");
}

int main(){
	struct Student *std;
	int n=10;
	int i;
	int id;
	int wh;
	std=(struct student*)malloc(size*sizeof(struct student));
	if(std==0){
		printf("No info!");
		return 0;
	}
	do{
		printf("Enter the needed: \n-Add Record: \n-Search Record: \n-Delete Record: \n-Quit: ");
		scanf("%d, &wh");
		
		if(wh==1){
			printf("How many student want to add? ");
			scanf("%d", &n);
			add_record(std, id);
		}
		else if(wh==2){
			printf("What ID you want to search? ");
			scanf("%d", &id);
			search_record(std, id);
		}
		else if(wh==3){
			printf("Who do you want to delete? ");
			scanf("%d", &id);
			delete_record(std, id);
		}
		else if(wh==4){
			printf("Game Over!");
		}
		else{
			printf("PAGE NOT FOUND !!404!!")
		}
	}
	while(wh!=4);
		free(std);
		return 0;
}
