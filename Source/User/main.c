/**
  ******************************************************************************
  * @file       main.c
  * @author     liuchengfei
  * @version    V1.0
  * @date       2016/11
  * @brief      
  *
  ******************************************************************************
  * @attention
  *                           _ooOoo_  
  *                          o8888888o  
  *                          88" . "88  
  *                          (| -_- |)  
  *                           O\ = /O  
  *                       ____/`---'\____  
  *                     .   ' \\| |// `.  
  *                      / \\||| : |||// \  
  *                    / _||||| -:- |||||- \  
  *                      | | \\\ - /// | |  
  *                    | \_| ''\---/'' | |  
  *                     \ .-\__ `-` ___/-. /  
  *                  ___`. .' /--.--\ `. . __  
  *               ."" '< `.___\_<|>_/___.' >'"".  
  *              | | : `- \`.;`\ _ /`;.`/ - ` : | |  
  *                \ \ `-. \_ __\ /__ _/ .-` / /  
  *        ======`-.____`-.___\_____/___.-`____.-'======  
  *                           `=---='  
  *  
  *        .............................................  
  *                 ·ð×æ±£ÓÓ             ÓÀÎÞBUG 
  *
  ******************************************************************************
  */
  
/* Includes ------------------------------------------------------------------*/
#include "main.h"
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/* Exported functions --------------------------------------------------------*/


	

int main(void)
{
  /* STM32L4xx HAL library initialization:
       - Configure the Flash prefetch
       - Systick timer is configured by default as source of time base, but user 
         can eventually implement his proper time base source (a general purpose 
         timer for example or other time source), keeping in mind that Time base 
         duration should be kept 1ms since PPP_TIMEOUT_VALUEs are defined and 
         handled in milliseconds basis.
       - Set NVIC Group Priority to 4
       - Low Level Initialization
     */
  HAL_Init();

  /* Configure the system clock to 80 MHz */
  PLT_SystemClock_Config();
  
  /* Enable the Peripheral clock */
  PLT_PeriphClock_Init();

  /*  */
  PLT_Port_Init(PLT_MODE_NORMAL);
  
  LED_Init();

  /* Infinite loop */
  while (1){
    
        PLT_ActivatePort(LED);
        Delay_ms(1000);
        PLT_DeactivatePort(LED);
        Delay_ms(1000);
  }
}












/******************************* IFELSE **************************END OF FILE****/

