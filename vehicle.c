#include"vehicle.h"
#include<stdio.h>

void vehicle_data(data* p) {
	printf("\n-----------차량데이터----------\n");
	printf("속도 : %d \nRPM : %d \n수온 : %d\n연료량 : %d", p->car_speed, p->RPM, p->coolant_temp, p->fuel_level);

}