/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name: OSAVC

  @File Name
    filename.h

  @Summary
    This file provides a basic functional API to acquire data from a i2C interfaced sensor

  @Description
  A proof of concept 
 */
/* ************************************************************************** */

#ifndef _TEMPSUPPORT_H    /* Guard against multiple inclusion */
#define _TEMPSUPPORT_H
# define I2C_ADDR_TARGET 0x4D
# define REG_ADR 0x00
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "peripheral/i2c/master/plib_i2c1_master.h"
#include "peripheral/clk/plib_clk.h"
#include "peripheral/gpio/plib_gpio.h"
#include "peripheral/evic/plib_evic.h"
# define I2C_ADDR_TARGET 0x4D

void set_job();
uint8_t get_value();



// use set job to add I2C job to HCC based JOb Que
// use get_value() to get temperature)

    /* Provide C++ Compatibility */
#ifdef __cplusplus
#endif

#endif /* _EXAMPLE_FILE_NAME_H */

/* *****************************************************************************
 End of File
 */
