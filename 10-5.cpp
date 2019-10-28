#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

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
        hour = duration/3600 ;
        minute = (duration/60 - hour*60) ;
        second = duration%60 ;
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
        stringstream ss;
        if (hour<10) ss << 0;
        ss << hour << ':';
        if (minute<10) ss << 0;
        ss << minute << ':';
        if (second<10) ss << 0;
        ss << second ;
        return ss.str();
    }
};


int main()
{
   // implement program to test class Time
}