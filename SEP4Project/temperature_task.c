/*
 * temperature_task.c
 *
 * Created: 11/13/2020 12:55:59 PM
 *  Author: Matey Matev
 */ 
#include <stdint.h>
#include "temperature_task.h"

uint16_t get_temp() {
	return hih8120_getHumidityPercent_x10();
}

float get_temp_flt() {
	return hih8120_getTemperature();
}

void temperature_measure_task(void * p) {
	#if (configUSE_APPLICATION_TASK_TAG == 1)
	// Set task no to be used for tracing with R2R-Network
	vTaskSetApplicationTaskTag(NULL, (void*) 1 );
	#endif

	for(;;)
	{
	hih8120_wakeup();
	vTaskDelay(pdMS_TO_TICKS(50));
	if (hih8120_isReady()) {
		return hih8120_getTemperature_x10();
	}
	}
}