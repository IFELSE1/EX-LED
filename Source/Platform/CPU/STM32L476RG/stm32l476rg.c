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
        /*�Ĵ���reset��ĳ�ʼֵ��ȫ��0�ģ�����ֱ�ӻ��ϲ����ã�Ҫ�Ƚ���Ӧ��λ�����ٻ����趨�õ�ֵ�ſ���*/
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

