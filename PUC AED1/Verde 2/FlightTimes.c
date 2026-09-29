#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int hour;
    int minute;
} Time;

Time parseTime(const char *timeStr) {
    Time t;
    sscanf(timeStr, "%d:%d", &t.hour, &t.minute);
    return t;
}

int timeToMinutes(Time t) {
    return t.hour * 60 + t.minute;
}

Time minutesToTime(int minutes) {
    Time t;
    minutes %= 1440;
    if (minutes < 0) minutes += 1440;
    t.hour = minutes / 60;
    t.minute = minutes % 60;
    return t;
}

int main() {
    char pA_str[6], cB_str[6], pB_str[6], cA_str[6];
    scanf("%s %s %s %s", pA_str, cB_str, pB_str, cA_str);
    
    Time pA = parseTime(pA_str);
    Time cB = parseTime(cB_str);
    Time pB = parseTime(pB_str);
    Time cA = parseTime(cA_str);
    
    int pA_min = timeToMinutes(pA);
    int cB_min = timeToMinutes(cB);
    int pB_min = timeToMinutes(pB);
    int cA_min = timeToMinutes(cA);
    
    int total = (cB_min - pA_min) + (cA_min - pB_min);
    int flight_time_min = total / 2;
    
    if (flight_time_min < 0) {
        flight_time_min += 720;
    } else if (flight_time_min >= 720) {
        flight_time_min -= 720;
    }
    
    int time_zone_diff_min = (cB_min - pA_min) - flight_time_min;
    
    int time_zone_diff_hours = time_zone_diff_min / 60;
    
    if (time_zone_diff_hours <= -12) {
        time_zone_diff_hours += 24;
    } else if (time_zone_diff_hours > 12) {
        time_zone_diff_hours -= 24;
    }
    
    printf("%d %d\n", flight_time_min, time_zone_diff_hours);
    return 0;
}
