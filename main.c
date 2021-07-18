/*Funções de Conversão de Unidades, Interface e display de Fórmulas incluídos*/
#include "ConversionFunctions.h"
#include "Interface.h"
#include "Formules.h"

int main (void){
	/*string for input*/
	char line [MAX];
	/*Welcome message*/
	printf("Welcome!\n");
	printf("Use help for a list of instructions\n");
	do{
		printf("UConv->");
		gets(line);
		select_menu (line);
	}while(strcmp(line , "exit")!=0);
	/*Good Bye message*/
	printf("Goodbye!");
	return 0;
}