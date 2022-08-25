/*
 ============================================================================
 Name        : Vehicle_Control_System.c
 Author      : Zyad Hassan
 Version     : 1
 Copyright   : Your copyright notice
 Description : Vehicle Control system
 ============================================================================
 */

#include "Vehicle.h"
#include <stdio.h>


int main(void){
	printf("Vehicle Control System\n\n");
	fflush(stdout);
	bool Quit=False;
	vehicle v1={OFF,OFF,10,25,OFF,125};

	do{
		char user_choice;
		printf("a. Turn on the vehicle engine\n");
		printf("b. Turn off the vehicle engine\n");
		printf("c. Quit the system\n");
		fflush(stdout);
		scanf(" %c",&user_choice);
		printf("\n");





		switch(user_choice){
		case 'a':
			printf("\tTurn on the vehicle engine\n\n");
			Turn_ON(&v1);
			// Function to turn on
			break;
		case 'b':
			printf("\tTurn off the vehicle engine\n\n");
			Quit=False;
			break;
		case 'c':
			printf("\tQuit the system\n");
			Quit=True;
		}




	}while(!Quit);







	return 0;
}
