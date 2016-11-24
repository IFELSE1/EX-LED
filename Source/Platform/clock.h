/**
  ******************************************************************************
  * @file    
  * @author  
  * @version 
  * @date    
  * @brief   
  *
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/ 
#ifndef __CLOCK_H
#define __CLOCK_H	 
 
/* Includes ------------------------------------------------------------------*/
#include "common.h"
#include "includes.h"



/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/



/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/**
  * @brief   Enable or disable the peripheral clock.
  * @param   PeriphName
  *          This parameter can be one of the following values:
  *            @arg  GPIOx   (x=A..H)
  *            @arg  TIMn    (n=1..7,15..17)
  *            @arg  UARTn   (n=1..5)
  *            @arg  SPIn    (n=1..3)
  *            @arg  IICn	 (n=1..3)
  *            @arg  CANn    (n=1)
  *            @arg  DACn    (n=1)
  *            @arg  DMAn    (n=1..2)
  *            @arg  PWR
  *            @arg  USB
  *            @arg  FLASH    
  *            @arg  CRC
  *            @arg  TSC
  *            @arg  USB_OTG_FS
  *            @arg  ADC
  *            @arg  AES
  *            @arg  RNG
  *            @arg  FMC
  *            @arg  QSPI
  *            @arg  LCD
  *            @arg  RTCAPB
  *            @arg  WWDG
  *            @arg  
  * @retval None
  */
#define PLT_PeriphClock_Enable( PeriphName)     __HAL_RCC_##PeriphName##_CLK_ENABLE()

#define PLT_PeriphClock_Disable( PeriphName)    __HAL_RCC_##PeriphName##_CLK_DISABLE()







/* Exported functions --------------------------------------------------------*/
void PLT_SystemClock_Config(void);

void PLT_PeriphClock_Init(void);









#endif /* __CLOCK_H */
/******************************* IFELSE **************************END OF FILE****/
