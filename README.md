# SIM800 C Driver for ESP32
## About

SIM800 Driver for use with ESP32. Pure C implementation. 

Supports native projects that require true control and customisation for device firmware.

## Usage

1) First configure UART
```
configureUART();
```

2) Now you can run supported modem functions

### Initialise GSM
```
uint8_t res = runGSMCommands(GSM_Init, GSM_Init_CmdsSize);
ESP_LOGW(TAG, "GSM Initilazation returned %d",res);
```
### Send SMS
You must included ```\32``` at the end of your string, this is required for GSM to send the message.
```
char *smsMessageContent;
smsMessageContent = "Hello World!\32";
uint8_t res = GSM_Send_SMS(smsMessageContent);
ESP_LOGW(SYSTEM_TAG, "Sending SMS returned %d",res);
```
