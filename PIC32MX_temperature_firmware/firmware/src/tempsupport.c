#include "tempsupport.h"
uint8_t myTxData [1] = {0};
uint8_t myRxData [1] = {0};
uint8_t NValidData[1]={257};
uint8_t NUM_BYTES=1;
uint8_t tem = 0;
uint8_t sb = 0;
uint8_t ret[2];
uint8_t state = 0;

void set_job()
{
     if(!I2C1_WriteRead( I2C_ADDR_TARGET, &myTxData[0], NUM_BYTES, myRxData, NUM_BYTES ))
        {
            // error handling
         printf("Error");
        }
}
void MyI2CCallback(uintptr_t context)
{
            // This function will be called when the transfer completes. Note
            // that this function executes in the context of the I2C interrupt.
tem = myRxData[0];
if (tem >= 128) 
    { 
        tem = 256 - tem;
        sb=1;
    }
    ret[0]=sb;
    ret[1]=tem;
state =1;
}
uint8_t get_value()
{
    if(state==1)
        return myRxData[0];
    else
        return tem;
    
        
}
