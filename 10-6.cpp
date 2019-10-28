#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time
{
private:
    int hour,minute,second;
public:
    Time(int hour,int minute,int second){
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    }
    Time(int duration){
        if (duration > 86400) duration -= 86400;
        else if (duration < 0) duration += 86400;
        hour = duration/3600;
        minute = (duration/60 - hour*60) ;
        second = duration%60;
    }
    void setHour(int hour){
        this->hour = (hour>=0)?hour:0;
    }
    void setMinute(int minute){
        this->minute = (minute>=0)?minute:0;
    }
    void setSecond(int second){
        this->second = (second>=0)?second:0;
    }
    int getHour(){
        return hour;
    }
    int getMinute(){
        return minute;
    }
    int getSecond(){
        return second;
    }
    int getDuration(){
        return hour*3600 + minute*60 + second;
    }
    Time add(Time other){
        Time t(getDuration() + other.getDuration());
        return t;
    }
    int subtract(Time other){
        if (getDuration() >= other.getDuration())
            return getDuration() - other.getDuration();
        else return getDuration()+86400 - other.getDuration();
    }
    int equals(Time other){
        return (getDuration() == other.getDuration())?1:0;
    }
    string toString(){
        string s;
        s = (getHour()<10)?'0'+to_string(getHour()):to_string(getHour()) ;
        s += ':';
        s += (getMinute()<10)?'0'+to_string(getMinute()):to_string(getMinute());
        s += ':';
        s += (getSecond()<10)?'0'+to_string(getSecond()):to_string(getSecond());
        return s;
    }
};


int main()
{
   // implement program to test class Time
}