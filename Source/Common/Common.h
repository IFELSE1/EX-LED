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
#ifndef __COMMON_H
#define __COMMON_H	 
  
/* Includes ------------------------------------------------------------------*/
#include "includes.h"
#include "stm32l476xx.h" 








/* Private types -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private constants ---------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

#define   HIGH      1
#define   LOW       0
#define   TRUE      1
#define   FALSE     0

/* Exported macro ------------------------------------------------------------*/
/** @defgroup CRS_LL_Exported_Macros CRS Exported Macros
  * @{
  */

/** @defgroup CRS_LL_EM_WRITE_READ Common Write and read registers Macros
  * @{
  */

/**
  * @brief  Write a value in CRS register
  * @param  __INSTANCE__ CRS Instance
  * @param  __REG__ Register to be written
  * @param  __VALUE__ Value to be written in the register
  * @retval None
  */
//#define LL_CRS_WriteReg(__INSTANCE__, __REG__, __VALUE__) WRITE_REG(__INSTANCE__->__REG__, (__VALUE__))












/* Exported functions --------------------------------------------------------*/

void Delay_ms(uint32_t xms);


#endif /* __COMMON_H */
/******************************* IFELSE **************************END OF FILE****/

