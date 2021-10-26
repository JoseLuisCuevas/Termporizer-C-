#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <string>
using namespace std;
void temporizer(int days, int hours, int minutes, int seconds);
void temporizer(int hours, int minutes, int seconds);
void temporizer(int minutes, int seconds);
void temporizer(int seconds);
void format_time(int d, int h, int min, int sec);
string h, m, secs;

int main(void){
  cout << "DD:HH:MM:SS\n";
  temporizer(1, 12, 10, 5);
return 0;
}

//temporizer functions
void temporizer(int seconds){
  if(seconds > 59){
    cerr << "Invalid number of seconds\n";
    exit(1);
}
  while(seconds >= 0){
    cout << "00:00:00:" << seconds << endl;
    seconds -= 1;
 }
}

void temporizer(int minutes, int seconds){
  if(minutes > 59 || seconds > 59){
    cerr << "Invalid time\n";
    exit(1);
 }
  for(int s = seconds; s >= 0; --s){
    if(s == 0 && minutes >= 1){
      cout << "00:00:" << minutes << ":" << s << endl;
      s = 59;
      minutes -= 1;
  }
  cout << "00:00:" << minutes << ":" << s << endl;
 }
}

void temporizer(int hours, int minutes, int seconds){
  if(hours > 23 || minutes > 59 || seconds > 59){
    cerr << "Invalid time\n";
    exit(1);
  }
  for(int s = seconds; s >= 0; --s){
    if(s == 0 && hours >= 1){
      cout << "00:" << hours << ":" << minutes << ":" << s << endl;
      s = 59;
    if(minutes == 0){
      hours -= 1;
      minutes = 60;
    }
      minutes -= 1;
    }
    cout << "00:" << hours << ":" << minutes << ":" << s << endl;
  }
}

void temporizer(int days, int hours, int minutes, int seconds){
  if(days > 518 || hours > 23 || minutes > 59 || seconds > 59){
     cerr << "Invalid time\n";
     exit(1);
  }
  int n = (days + hours + minutes + seconds);
  int s = seconds;
  while(n >= 0){
   if(n == 0){
     //cout << days << ":" << hours << ":" << minutes << ":" << s << endl;
     cout << days << ":" << h << ":" << m << ":" << secs << endl;
     break;
   }
   cout << days << ":" << h << ":" << m << ":" << secs << endl;
   if(s > 0){
      s -= 1;
   }else if(s == 0 && minutes > 0){
      minutes -= 1;
      s = 59;
   }else if(s == 0 && minutes == 0 && hours > 0){
      hours -= 1;
      minutes = 59;
      s = 59;
  }else if(s == 0 && minutes == 0 && hours == 0 && days > 0){
      days -= 1;  
      hours = 23;
      minutes = 59;
      s = 59;
  }
  n = (days + hours + minutes + s);
  if(hours <= 9)
    h = "0" + (char)hours;
  else
    h = hours;

  if(minutes <= 9)
    m = "0" + (char)minutes;
  else
    m = (char)minutes;

  if(s <= 9)
    secs = "0" + s;
  else
    secs = s
; }
}