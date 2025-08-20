// enum_example.c - 列舉使用範例
#include <stdio.h>

// 定義星期列舉
typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Weekday;

// 定義成績等級列舉
typedef enum {
    FAIL = 0,
    PASS = 60,
    GOOD = 70,
    VERY_GOOD = 80,
    EXCELLENT = 90
} Grade;

// 定義交通燈狀態
typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

const char* getWeekdayName(Weekday day) {
    switch(day) {
        case MONDAY: return "星期一";
        case TUESDAY: return "星期二";
        case WEDNESDAY: return "星期三";
        case THURSDAY: return "星期四";
        case FRIDAY: return "星期五";
        case SATURDAY: return "星期六";
        case SUNDAY: return "星期日";
        default: return "未知";
    }
}

const char* getGradeDescription(int score) {
    if (score >= EXCELLENT) return "優秀";
    else if (score >= VERY_GOOD) return "很好";
    else if (score >= GOOD) return "良好";
    else if (score >= PASS) return "及格";
    else return "不及格";
}

void printTrafficLight(TrafficLight light) {
    switch(light) {
        case RED:
            printf("🔴 紅燈 - 停止\n");
            break;
        case YELLOW:
            printf("🟡 黃燈 - 準備\n");
            break;
        case GREEN:
            printf("🟢 綠燈 - 通行\n");
            break;
    }
}

int main() {
    printf("=== 列舉使用範例 ===\n\n");
    
    // 星期範例
    Weekday today = FRIDAY;
    printf("今天是: %s (值: %d)\n", getWeekdayName(today), today);
    
    // 成績範例
    int studentScore = 85;
    printf("學生分數: %d - %s\n", studentScore, getGradeDescription(studentScore));
    
    // 交通燈範例
    printf("\n交通燈狀態:\n");
    printTrafficLight(RED);
    printTrafficLight(YELLOW);
    printTrafficLight(GREEN);
    
    return 0;
}