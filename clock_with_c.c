// Description: This program demonstrates the use of the clock() function from the time.h library in C.
// It measures the time taken to execute a simple loop that counts from 0 to 99999999.
// The program prints the elapsed time in seconds and milliseconds.
# include<stdio.h>
# include<time.h>
# include<stdlib.h>
# include<unistd.h> // for usleep function

int main(){
  int hour, minute, second;
  hour = minute = second = 0;

  while (1)
  {
    // clear output screen
    system("clear"); // Use "cls" for Windows
    // print time in HH:MM:SS format
    printf("Time: %02d:%02d:%02d\n", hour, minute, second);
    // clear output buffer in gcc
    fflush(stdout);
    second++;
    if (second == 60) {
      minute+= 1;
      second = 0;
    }
    if (minute == 60) {
      hour+= 1;
      minute = 0;
    }
    // sleep for 1 second
    if (hour == 24) {
      hour = 0;
      minute = 0;
      second = 0;
    }
    sleep(1); // sleep for 1 second
  }
  return 0;

}

