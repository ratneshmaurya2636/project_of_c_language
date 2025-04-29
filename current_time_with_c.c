# include<stdio.h>
# include<time.h>
// # include<stdlib.h>
// # include<unistd.h> // for usleep function

int main(){
  time_t s, val = 1;
  struct tm *tm_info;
  char buffer[26];
  time(&s); // get current time
  tm_info = localtime(&s); // convert to local time
  // print time in HH:MM:SS format
  printf("Time: %02d:%02d:%02d\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
  // clear output buffer in gcc
  fflush(stdout);
  // sleep for 1 second
  while (1)
  {
    // clear output screen
    system("clear"); // Use "cls" for Windows
    time(&s); // get current time
    tm_info = localtime(&s); // convert to local time
    // print time in HH:MM:SS format
    printf("Time: %02d:%02d:%02d\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
    // clear output buffer in gcc
    fflush(stdout);
    sleep(1); // sleep for 1 second
  }
  return 0;
}