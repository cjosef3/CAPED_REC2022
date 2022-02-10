/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define Servo_SCL_Pin GPIO_PIN_0
#define Servo_SCL_GPIO_Port GPIOC
#define Servo_SDA_Pin GPIO_PIN_1
#define Servo_SDA_GPIO_Port GPIOC
#define Servo_Enable_Pin GPIO_PIN_2
#define Servo_Enable_GPIO_Port GPIOC
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define IR1_Pin GPIO_PIN_6
#define IR1_GPIO_Port GPIOA
#define IR2_Pin GPIO_PIN_7
#define IR2_GPIO_Port GPIOA
#define IR3_Pin GPIO_PIN_4
#define IR3_GPIO_Port GPIOC
#define IR4_Pin GPIO_PIN_5
#define IR4_GPIO_Port GPIOC
#define IR5_Pin GPIO_PIN_0
#define IR5_GPIO_Port GPIOB
#define IR6_Pin GPIO_PIN_1
#define IR6_GPIO_Port GPIOB
#define IR7_Pin GPIO_PIN_2
#define IR7_GPIO_Port GPIOB
#define ACC_SCL_Pin GPIO_PIN_10
#define ACC_SCL_GPIO_Port GPIOB
#define ACC_SDA_Pin GPIO_PIN_11
#define ACC_SDA_GPIO_Port GPIOB
#define Limit4_Pin GPIO_PIN_12
#define Limit4_GPIO_Port GPIOB
#define Limit3_Pin GPIO_PIN_13
#define Limit3_GPIO_Port GPIOB
#define Limit2_Pin GPIO_PIN_14
#define Limit2_GPIO_Port GPIOB
#define Limit1_Pin GPIO_PIN_15
#define Limit1_GPIO_Port GPIOB
#define Override5_Pin GPIO_PIN_6
#define Override5_GPIO_Port GPIOC
#define Override4_Pin GPIO_PIN_7
#define Override4_GPIO_Port GPIOC
#define Override3_Pin GPIO_PIN_8
#define Override3_GPIO_Port GPIOC
#define Override2_Pin GPIO_PIN_9
#define Override2_GPIO_Port GPIOC
#define Override1_Pin GPIO_PIN_8
#define Override1_GPIO_Port GPIOA
#define RIDESTOP_Pin GPIO_PIN_9
#define RIDESTOP_GPIO_Port GPIOA
#define ESTOP_Pin GPIO_PIN_10
#define ESTOP_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define Stepper2_dir_Pin GPIO_PIN_15
#define Stepper2_dir_GPIO_Port GPIOA
#define Stepper2_step_Pin GPIO_PIN_10
#define Stepper2_step_GPIO_Port GPIOC
#define Stepper2_EN_Pin GPIO_PIN_11
#define Stepper2_EN_GPIO_Port GPIOC
#define Stepper1_dir_Pin GPIO_PIN_12
#define Stepper1_dir_GPIO_Port GPIOC
#define Stepper1_step_Pin GPIO_PIN_2
#define Stepper1_step_GPIO_Port GPIOD
#define Stepper1_EN_Pin GPIO_PIN_3
#define Stepper1_EN_GPIO_Port GPIOB
#define TOF_SCL_Pin GPIO_PIN_6
#define TOF_SCL_GPIO_Port GPIOB
#define TOF_SDA_Pin GPIO_PIN_7
#define TOF_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
