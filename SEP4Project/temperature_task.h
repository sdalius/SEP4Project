/*
 * temperature_task.h
 *
 * Created: 11/13/2020 12:56:59 PM
 *  Author: mmate
 */ 


#ifndef TEMPERATURE_TASK_H_
#define TEMPERATURE_TASK_H_

#include <stdint.h>
#include <hih8120.h>

uint16_t get_temp();
float get_temp_flt();


#endif /* TEMPERATURE_TASK_H_ */