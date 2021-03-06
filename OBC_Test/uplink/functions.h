#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int init_CC1020(void);
void WriteToCC1020Register(unsigned char addr, unsigned char data);
unsigned char ReadFromCC1020Register(unsigned char addr);
void SetupCC1020PD(void);
void ResetCC1020(void);
void SetupCC1020Allregisters(void);
void WakeUpCC1020ToRX(char RXANALOG1);
int CalibrateCC1020(char PA_POWER1);
char SetupCC1020RX(char RXANALOG1, char PA_POWER1);

#define CAL_ATTEMPT_MAX   4

#endif
