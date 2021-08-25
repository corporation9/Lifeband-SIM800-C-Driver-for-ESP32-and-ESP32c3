# SIM800 C Driver for ESP32
### Atumcell Industries 2021
## About

SIM800 Driver for use with ESP32. Pure C library. Supporting native projects that require true control and customisation for device firmware.


1) First configure UART
```
configureUART();
```

2) Now you can run supported modem functions
```
uint8_t res = runGSMCommands(GSM_Init, GSM_Init_CmdsSize);
ESP_LOGW(TAG, "GSM Initilazation returned %d",res);

res = runGSMCommands(Send_SMS, 4);
ESP_LOGW(TAG, "SMS Sent Successfully %d",res);
```
