#include <DS3231.h>

// Init the DS3231 using the hardware interface
DS3231  rtc(SDA, SCL);

Time t;
Time tmp;

void setup()
{
  // Setup Serial connection
  Serial.begin(9600);
  // Uncomment the next line if you are using an Arduino Leonardo

  // Initialize the rtc object
  rtc.begin();
}

void loop()
{
  // Send Current time
  //Serial.print("Current Time.............................: ");
  //Serial.print(rtc.getDOWStr());
  //Serial.print(" ");
  //Serial.print(rtc.getDateStr());
  //Serial.print(" -- ");
  tmp = rtc.getTime();
  //t = rtc.getTime();
  // Send Unixtime
  // ** Note that there may be a one second difference between the current time **
  // ** and current unixtime show if the second changes between the two calls   **
  //Serial.print("Current Unixtime.........................: ");
  //Serial.println(rtc.getUnixTime(rtc.getTime()));
  
  t.hour = 14;
  t.min = 46;
  t.sec = 0;
  t.year = 2024;
  t.mon = t.mon;
  t.date = t.date;
  //Serial.println(rtc.getUnixTime(t));
  rtc.setTime(t.hour, t.min, t.sec);
  rtc.setDate(24, 4, 2025);
  // Wait indefinitely
  while(1);
}
