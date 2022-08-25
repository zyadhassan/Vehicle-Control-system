/*
 * Vehicle.c
 *
 *  Created on: Aug 25, 2022
 *      Author: Zyad Hassan
 */

#include "Vehicle.h"
#include <stdio.h>


#define WITH_ENGINE_TEMP_CONTROLLER    1


void print_state(vehicle*v1){
	if(v1->Engine)printf("\nEnigine State is ON\n");
	else printf("\nEnigine State is OFF\n");


	if(v1->AC)printf("AC is ON\n");
	else printf("AC is OFF\n");

	printf("Vehicle speed : %d km\\hr \n",v1->speed);

	printf("Room Temperature : %0.1f c \n",v1->room_temp);
	#if(WITH_ENGINE_TEMP_CONTROLLER )
		if(v1->Engine_temp_controller)printf("Engine Temperature Controller State is ON\n");
		else printf("Engine Temperature Controller State is OFF\n");
		printf("Engine Temperature : %0.1f c \n",v1->Engine_temp);
	#endif
		printf("\n");


}


void Turn_ON(vehicle*v1){
	v1->Engine=ON;
	char user_choice;

	while (v1->Engine){
		printf("a. Turn off the engine\n");
		printf("b. Set the traffic light color.\n");
		printf("c. Set the room temperature (Temperature Sensor)\n");
#if(WITH_ENGINE_TEMP_CONTROLLER )
		printf("d. Set the engine temperature (Engine Temperature Sensor)\n");
#endif

		fflush(stdout);
		scanf(" %c",&user_choice);
		printf("\n");
		switch(user_choice){
		case 'a':
			v1->Engine=OFF;
			break;
		case 'b':
			Set_traffic(v1);
			print_state(v1);
			break;
		case 'c' :
			Set_Room_Temp(v1);
			print_state(v1);
			break;
		case 'd' :
			Set_Engine_Temp(v1);
			print_state(v1);
			break;

		}

	}
	return;

}



void Set_traffic(vehicle*v1){
	char traffic ;
	printf("Enter The required Color:\t");
	fflush(stdout);
	scanf(" %c",&traffic);

	switch(traffic){
	case 'G':
		v1->speed=100;
		break;
	case 'O':
		v1->speed=30;
		break;
	case 'R':
		v1->speed=0;
		break;
	}
	Check_Speed(v1);
	return;
}



void Set_Room_Temp(vehicle*v1){
	char temp ;
	printf("Enter The Room Temperature:\t");
	fflush(stdout);
	scanf(" %d",&temp);
	if(temp<=10){
		v1->AC=ON;
		v1->room_temp=20;
	}
	else if (temp>=30){
		v1->AC=ON;
		v1->room_temp=20;
	}
	else{
		v1->AC=OFF;
		v1->room_temp=temp;
	}
	return;
}



void Set_Engine_Temp(vehicle*v1){
	char temp ;
	printf("Enter The Engine Temperature:\t");
	fflush(stdout);
	scanf(" %d",&temp);
	if(temp<=100){
		v1->Engine_temp_controller=ON;
		v1->Engine_temp=125;
	}
	else if (temp>=150){
		v1->Engine_temp_controller=ON;
		v1->Engine_temp=125;
	}
	else{
		v1->Engine_temp_controller=OFF;
		v1->Engine_temp=temp;
	}
	return;
}

void Check_Speed(vehicle*v1){
	if(v1->speed==30){
		v1->AC=ON;
		float room=v1->room_temp;
		room=(room*((float)5/4))+1;
		v1->room_temp=room;

#if(WITH_ENGINE_TEMP_CONTROLLER )

		v1->Engine_temp_controller=ON;
		float engine=v1->Engine_temp;
		engine=(engine*((float)5/4))+1;
		v1->Engine_temp=engine;
#endif

	}
	return;
}


