/*
 * Vehicle.h
 *
 *  Created on: Aug 25, 2022
 *      Author: Zyad Hassan
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_
#endif /* VEHICLE_H_ */


//////////////////////////////////////////////////////////////


typedef enum{
	False=0,True=1
}bool;

typedef enum{
	OFF=0,ON=1
}state;

typedef struct{
	state Engine;
	state AC;
	int speed;
	float room_temp;
	state Engine_temp_controller;
	float Engine_temp;
}vehicle;





//////////////////////////////////////////////////////////////////
void print_state(vehicle*v1);
void Turn_ON(vehicle*v1);
void Set_traffic(vehicle*v1);
void Set_Room_Temp(vehicle*v1);
void Set_Engine_Temp(vehicle*v1);
void Check_Speed(vehicle*v1);




