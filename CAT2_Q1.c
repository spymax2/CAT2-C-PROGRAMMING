/*
// program to define a structure
author:vibert ondieki
reg no:CT101/G/22151/24
date:7th november 2024

*/
#include<stdio.h>
#include<string.h>
struct employee{
	char name[25];
	int id;
	char department[20];
	float salary;
	char email[50];
}
employee1;
int main(){
	//declaration of variables
	strcpy(employee1.name,"john dee");
	employee1.id=12345;
	strcpy(employee1.department,"human resource");
	employee1.salary=55000.50;
	strcpy(employee1.email,"john.doe@company.com");
	
	//display the output
	printf("name is :%s\n",employee1.name);
	printf("id is :%d\n",employee1.id);
	printf("department is :%s\n",employee1.department);
	printf("salary is :%f\n",employee1.salary);
	printf("email is :%s\n",employee1.email);
	
	
	
	
	
	
	return 0;
}
