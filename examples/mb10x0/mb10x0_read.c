#include <breezystm32.h>


void setup()
{
  pwmInit(true, false, false, 490, 1000);

//  startSonar();
}


void loop()
{
  pwmRead(2);

  printf("\nsonar read = ");
  for (int i = 0; i < 7; i++)
  {
    float distance = sonarRead(i);
    printf("%d.%dm\t", (int32_t)distance, (int32_t)(distance*1000)%1000);
  }
  delay(50);
}
