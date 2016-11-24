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
  
/* Includes ------------------------------------------------------------------*/
#include "stm32l476rg.h"
  
/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/




/* Private function prototypes -----------------------------------------------*/


/* Private functions ---------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/
void
PLT_Port_Init(PLT_InitModeTypedef eMode){
    if (eMode == PLT_MODE_NORMAL ){
        /*寄存器reset后的初始值不全是0的，所以直接或上不好用，要先将相应的位置零再或上设定好的值才可以*/
        GPIOA->MODER   = 0x00000000;
        GPIOA->MODER   |= PLT_INIT_GPIOA_MODER;
        GPIOA->OTYPER  |= PLT_INIT_GPIOA_OTYPER;
        GPIOA->OSPEEDR |= PLT_INIT_GPIOA_OSPEEDR;
        GPIOA->PUPDR   |= PLT_INIT_GPIOA_PUPDR;
        GPIOA->BSRR    |= PLT_INIT_GPIOA_BSRR;
        GPIOA->AFR[0]  |= PLT_INIT_GPIOA_AFRL;
        GPIOA->AFR[1]  |= PLT_INIT_GPIOA_AFRH;
        GPIOA->ASCR    |= PLT_INIT_GPIOA_ASCR;  

       /*GPIOB....GPIOC...*/
    }

}




/******************************* IFELSE **************************END OF FILE****/

