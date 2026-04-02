#include "danger.h" //bring danger_system f
#include "vehicle.h" // bring struct, function, define
#include <stdio.h>// 

void danger_system(data* p) {
	if (p->RPM > 7000) p->status_flags |= FLAG_엔진경고;
	if (p->fuel_level < 20) p->status_flags |= FLAG_연료부족;
	if (p->car_speed > 280 && p->coolant_temp > 80) p->status_flags |= FLAG_배터리위험;
	if (p->coolant_temp > 60) p->status_flags |= FLAG_에어컨고장;
	if (p->car_speed > 260 && p->RPM > 6000) p->status_flags |= FLAG_와이퍼고장;
	if (p->car_speed > 290 && p->RPM > 7000) p->status_flags |= FLAG_브레이크고장;
	if (p->car_speed > 270 && p->RPM > 6000) p->status_flags |= FLAG_가속고장;
	if (p->car_speed > 280 && p->RPM > 5000) p->status_flags |= FLAG_핸들고장;

	printf("\n---경고등 상태---\n");
	if (p->status_flags & FLAG_엔진경고)   printf(" 엔진경고\n");
	if (p->status_flags & FLAG_연료부족)   printf(" 연료부족\n");
	if (p->status_flags & FLAG_배터리위험) printf(" 배터리위험\n");
	if (p->status_flags & FLAG_에어컨고장) printf(" 에어컨고장\n");
	if (p->status_flags & FLAG_와이퍼고장) printf(" 와이퍼고장\n");
	if (p->status_flags & FLAG_브레이크고장) printf(" 브레이크고장\n");
	if (p->status_flags & FLAG_가속고장) printf(" 가속고장\n");
	if (p->status_flags & FLAG_핸들고장) printf(" 핸들고장\n");



	// NO WARNING
	if (p->status_flags == 0) printf(" 정상\n");
}