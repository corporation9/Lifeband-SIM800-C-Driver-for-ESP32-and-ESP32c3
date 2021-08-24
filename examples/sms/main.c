#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/uart.h"
#include <string.h>
#include "esp_system.h"
#include "esp_log.h"
#include "include/sim800l_cmds.h"
#include "include/sim800l.h"
#include "sim800l.c"

char * TAG = "[MAIN]";


void app_main()
{
	configureUART();	

	uint8_t res = runGSMCommands(GSM_Init, GSM_Init_CmdsSize);
	ESP_LOGW(TAG, "GSM Initilazation returned %d",res);


	while(1)
	{
    	res = runGSMCommands(Send_SMS, 4);
    	ESP_LOGW(TAG, "SMS Initilazation returned %d",res);
	}
		
}
