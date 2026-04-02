#ifndef VEHICLE_H
#define VEHICLE_H

#include <stdint.h>

typedef struct VEHICLE_DATA {
    uint16_t car_speed;
    uint16_t RPM;
    uint8_t  coolant_temp;
    uint8_t  fuel_level;
    uint8_t  status_flags;
} data;

void vehicle_data(data * p);


#define FLAG_엔진경고 (1<<0)
#define FLAG_연료부족 (1<<1)
#define FLAG_배터리위험 (1<<2)
#define FLAG_에어컨고장 (1<<3)
#define FLAG_와이퍼고장 (1<<4)
#define FLAG_브레이크고장 (1<<5)
#define FLAG_가속고장 (1<<6)
#define FLAG_핸들고장 (1<<7)



#endif //VEHICLE.H
