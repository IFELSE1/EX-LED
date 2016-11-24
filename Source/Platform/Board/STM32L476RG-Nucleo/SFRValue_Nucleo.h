/**
  ******************************************************************************
  * @file    
  * @author  
  * @version 
  * @date    
  * @brief   
  *          
  * @attention
  ******************************************************************************
  */ 

#ifndef __SFRVALUE_NECLEO_H
#define __SFRVALUE_NECLEO_H

/*********************************************************************
  GPIOA:
  ---O OOOO OOOO OOOO
  |||| |||| |||| ||||
  |||| |||| |||| |||+-- 0[ 14pin]: NC   	    <PA0>
  |||| |||| |||| ||+--- 1[ 15pin]: NC	  	    <PA1>
  |||| |||| |||| |+---- 2[ 16pin]: NC           <PA2>
  |||| |||| |||| +----- 3[ 17pin]: NC	  	    <PA3>
  |||| |||| |||+------- 4[ 20pin]: NC  			<PA4>
  |||| |||| ||+-------- 5[ 21pin]: LED    		<PA5>
  |||| |||| |+--------- 6[ 22pin]: NC  			<PA6>
  |||| |||| +---------- 7[ 23pin]: NC  			<PA7>
  |||| |||+------------ 8[ 41pin]: NC  			<PA8>
  |||| ||+------------- 9[ 42pin]: NC  			<PA9>
  |||| |+--------------10[ 43pin]: NC  			<PA10>
  |||| +---------------11[ 44pin]: NC  			<PA11>
  |||+-----------------12[ 45pin]: NC  			<PA12>
  ||+------------------13[ 46pin]: NC  			<PA13>
  |+-------------------14[ 49pin]: NC  			<PA14>
  +--------------------15[ 50pin]: NC  			<PA15>
*********************************************************************/
/* @Normal */

/**
  * @brief  GPIO Mode Configuration
  *         Configure IO Direction mode (Input, Output, Alternate or Analog)
  */
#define	PLT_INIT_GPIOA_MODER		0x00000400 	        /* 0b0000 0000  0000 0000 0000 0100 0000 0000 */
/**
  * @brief  GPIO Output Type  Configuration
  *         Configure IO Output Type (0: Output push-pull (reset state),1: Output open-drain)
  */
#define	PLT_INIT_GPIOA_OTYPER 	0x0000                 /* 0b0000 0000 0000 0000 */
/**
  * @brief  GPIO Speed Configuration 
  *         Configure IO Speed (00:Low speed,01:Medium speed,10:High speed,11:Very high speed)
  */
#define	PLT_INIT_GPIOA_OSPEEDR 	0x00000400          /* 0b0000 0000 0000 0000 0000 0100 0000 0000 */
/**
  * @brief  GPIO Pull-up or Pull down  Configuration 
  *        (00: No pull-up, pull-down,01: Pull-up,10: Pull-down,11: Reserved)
  */
#define	PLT_INIT_GPIOA_PUPDR	    0x00000000	       /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Set pin or Clear pin  Configuration 
  *        (Bits 31-16 : 0: No action,1:Clrar pin
  *         Bits 15-0  : 0: No action,1:Set pin)
  */
#define	PLT_INIT_GPIOA_BSRR	    0x00000000         /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  Low 8-bit GPIO Alternate Function Configuration         
  */
#define	PLT_INIT_GPIOA_AFRL	    0x00000000         /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  High 8-bit GPIO Alternate Function Configuration         
  */
#define	PLT_INIT_GPIOA_AFRH	    0x00000000        /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Analog Connection Configuration        
  *         (0: Disconnect analog switch to the ADC input (reset state)
  *          1: Connect analog switch to the ADC input)
  */
#define	PLT_INIT_GPIOA_ASCR	    0x0000              /* 0b0000 0000 0000 0000 */



/*********************************************************************
  GPIOB:
  OOOO OOOO OOOO OOOO
  |||| |||| |||| ||||
  |||| |||| |||| |||+-- 0[ 26pin]: NC   	    <PB0>
  |||| |||| |||| ||+--- 1[ 27pin]: NC	  	    <PB1>
  |||| |||| |||| |+---- 2[ 28pin]: NC           <PB2>
  |||| |||| |||| +----- 3[ 55pin]: NC	  	    <PB3>
  |||| |||| |||+------- 4[ 56pin]: NC  			<PB4>
  |||| |||| ||+-------- 5[ 57pin]: NC    		<PB5>
  |||| |||| |+--------- 6[ 58pin]: NC  			<PB6>
  |||| |||| +---------- 7[ 59pin]: NC  			<PB7>
  |||| |||+------------ 8[ 61pin]: NC  			<PB8>
  |||| ||+------------- 9[ 62pin]: NC  			<PB9>
  |||| |+--------------10[ 29pin]: NC  			<PB10>
  |||| +---------------11[ 30pin]: NC  			<PB11>
  |||+-----------------12[ 33pin]: NC  			<PB12>
  ||+------------------13[ 34pin]: NC  			<PB13>
  |+-------------------14[ 35pin]: NC  			<PB14>
  +--------------------15[ 36pin]: NC  			<PB15>
*********************************************************************/
/* @Normal */

/**
  * @brief  GPIO Mode Configuration
  *         Configure IO Direction mode (Input, Output, Alternate or Analog)
  */
#define	PLT_INIT_GPIOB_MODER		0x00000000 	        /* 0b0000 0000  0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Output Type  Configuration
  *         Configure IO Output Type (0: Output push-pull (reset state),1: Output open-drain)
  */
#define	PLT_INIT_GPIOB_OTYPER 	0x0000                 /* 0b0000 0000 0000 0000 */
/**
  * @brief  GPIO Speed Configuration 
  *         Configure IO Speed (00:Low speed,01:Medium speed,10:High speed,11:Very high speed)
  */
#define	PLT_INIT_GPIOB_OSPEEDR 	0x00000000          /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Pull-up or Pull down  Configuration 
  *        (00: No pull-up, pull-down,01: Pull-up,10: Pull-down,11: Reserved)
  */
#define	PLT_INIT_GPIOB_PUPDR	    0x00000000	       /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Set pin or Clear pin  Configuration 
  *        (Bits 31-16 : 0: No action,1:Clrar pin
  *         Bits 15-0  : 0: No action,1:Set pin)
  */
#define	PLT_INIT_GPIOB_BSSR	    0x00000000         /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  Low 8-bit GPIO Alternate Function Configuration         
  */
#define	PLT_INIT_GPIOB_AFRL	    0x00000000         /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  High 8-bit GPIO Alternate Function Configuration         
  */
#define	PLT_INIT_GPIOB_AFRH	    0x00000000        /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Analog Connection Configuration        
  *         (0: Disconnect analog switch to the ADC input (reset state)
  *          1: Connect analog switch to the ADC input)
  */
#define	PLT_INIT_GPIOB_ASCR	    0x0000              /* 0b0000 0000 0000 0000 */


/*********************************************************************
  GPIOC:
  OOOO OOOO OOOO OOOO
  |||| |||| |||| ||||
  |||| |||| |||| |||+-- 0[  8pin]: NC   	    <PC0>
  |||| |||| |||| ||+--- 1[  9pin]: NC	  	    <PC1>
  |||| |||| |||| |+---- 2[ 10pin]: NC           <PC2>
  |||| |||| |||| +----- 3[ 11pin]: NC	  	    <PC3>
  |||| |||| |||+------- 4[ 24pin]: NC  			<PC4>
  |||| |||| ||+-------- 5[ 25pin]: NC    		<PC5>
  |||| |||| |+--------- 6[ 37pin]: NC  			<PC6>
  |||| |||| +---------- 7[ 38pin]: NC  			<PC7>
  |||| |||+------------ 8[ 39pin]: NC  			<PC8>
  |||| ||+------------- 9[ 40pin]: NC  			<PC9>
  |||| |+--------------10[ 51pin]: NC  			<PC10>
  |||| +---------------11[ 52pin]: NC  			<PC11>
  |||+-----------------12[ 53pin]: NC  			<PC12>
  ||+------------------13[  2pin]: NC  			<PC13>
  |+-------------------14[  3pin]: NC  			<PC14>
  +--------------------15[  4pin]: NC  			<PC15>
*********************************************************************/
/* @Normal */

/**
  * @brief  GPIO Mode Configuration
  *         Configure IO Direction mode (Input, Output, Alternate or Analog)
  */
#define	PLT_INIT_GPIOC_MODER		0x00000000 	        /* 0b0000 0000  0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Output Type  Configuration
  *         Configure IO Output Type (0: Output push-pull (reset state),1: Output open-drain)
  */
#define	PLT_INIT_GPIOC_OTYPER 	0x0000                 /* 0b0000 0000 0000 0000 */
/**
  * @brief  GPIO Speed Configuration 
  *         Configure IO Speed (00:Low speed,01:Medium speed,10:High speed,11:Very high speed)
  */
#define	PLT_INIT_GPIOC_OSPEEDR 	0x00000000          /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Pull-up or Pull down  Configuration 
  *        (00: No pull-up, pull-down,01: Pull-up,10: Pull-down,11: Reserved)
  */
#define	PLT_INIT_GPIOC_PUPDR	    0x00000000	       /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Set pin or Clear pin  Configuration 
  *        (Bits 31-16 : 0: No action,1:Clrar pin
  *         Bits 15-0  : 0: No action,1:Set pin)
  */
#define	PLT_INIT_GPIOC_BSSR	    0x00000000         /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  Low 8-bit GPIO Alternate Function Configuration         
  */
#define	PLT_INIT_GPIOC_AFRL	    0x00000000         /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  High 8-bit GPIO Alternate Function Configuration         
  */
#define	PLT_INIT_GPIOC_AFRH	    0x00000000        /* 0b0000 0000 0000 0000 0000 0000 0000 0000 */
/**
  * @brief  GPIO Analog Connection Configuration        
  *         (0: Disconnect analog switch to the ADC input (reset state)
  *          1: Connect analog switch to the ADC input)
  */
#define	PLT_INIT_GPIOC_ASCR	    0x0000              /* 0b0000 0000 0000 0000 */













#endif /* __SFRVALUE_NECLEO_H */
/******************************* IFELSE **************************END OF FILE****/

