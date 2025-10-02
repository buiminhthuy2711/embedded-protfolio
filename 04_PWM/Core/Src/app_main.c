#include "app_main.h"
#include "main.h"

extern TIM_HandleTypeDef htim1;

void SetColor(uint16_t r, uint16_t g, uint16_t b)
{
  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_1, r); // PA8 - Red
  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_2, g); // PA9 - Green
  __HAL_TIM_SET_COMPARE(&htim1, TIM_CHANNEL_3, b); // PA10 - Blue
}
void app_main(void)
{
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1); // Red
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2); // Green 
    HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_3); // Blue

    while (1)
    {
        SetColor(1000, 0, 0); // Red
        HAL_Delay(1000);

        SetColor(1000, 1000, 0); // Red + Green
        HAL_Delay(1000);

        SetColor(0, 1000, 0); // Green
        HAL_Delay(1000);

        SetColor(0, 1000, 1000); // Green + Blue
        HAL_Delay(1000);

        SetColor(0, 0, 1000); // Blue
        HAL_Delay(1000);

        SetColor(1000, 0, 1000); // Red + Blue
        HAL_Delay(1000);
    }
    
}