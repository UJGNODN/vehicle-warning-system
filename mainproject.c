#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdint.h>
#include"vehicle.h"
#include"danger.h"



int main(void) {
	int temp_speed, temp_rpm, temp_coolant, temp_fuel;

	while(1){
		printf("속도를 입력하시오(0~300km/h)");
		scanf("%d", &temp_speed);
		printf("RPM를 입력하시오(0~8000) ");
		scanf("%d", &temp_rpm);
		printf("수온을 입력하시오");
		scanf("%d", &temp_coolant);
		printf("연료량을 입력하시오(0~100)");
		scanf("%d", &temp_fuel);

		if (temp_speed > 0 && temp_speed<300
			&& temp_rpm > 0 && temp_rpm<8000
			&& temp_fuel > 0 && temp_fuel<100) {
			break;
		}
		else { printf("입력값이 범위를 초과했습니다\n"); }
	
	}
	data first = {
		(uint16_t)temp_speed,
		(uint16_t)temp_rpm,
		(uint8_t)temp_coolant,
		(uint8_t)temp_fuel,
		0
	};

	danger_system(&first);
	vehicle_data(&first);
	return 0;

}