// conditional_compilation.cpp - 條件編譯範例
#include <iostream>
using namespace std;

// 版本控制
#define VERSION_MAJOR 2
#define VERSION_MINOR 1
#define VERSION_PATCH 0

// 功能開關
#define ENABLE_LOGGING 1
#define ENABLE_DEBUG 1
#define ENABLE_ADVANCED_FEATURES 0

// 平台檢測
#ifdef _WIN32
    #define PLATFORM "Windows"
    #define PATH_SEPARATOR "\\"
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__)
    #define PLATFORM "macOS"
    #define PATH_SEPARATOR "/"
    #define CLEAR_COMMAND "clear"
#elif defined(__linux__)
    #define PLATFORM "Linux"
    #define PATH_SEPARATOR "/"
    #define CLEAR_COMMAND "clear"
#else
    #define PLATFORM "Unknown"
    #define PATH_SEPARATOR "/"
    #define CLEAR_COMMAND "echo"
#endif

// 編譯器檢測
#ifdef __GNUC__
    #define COMPILER "GCC"
#elif defined(_MSC_VER)
    #define COMPILER "MSVC"
#elif defined(__clang__)
    #define COMPILER "Clang"
#else
    #define COMPILER "Unknown"
#endif

// 日誌系統
#if ENABLE_LOGGING
    #define LOG(level, msg) cout << "[" << level << "] " << msg << endl
    #define LOG_INFO(msg) LOG("INFO", msg)
    #define LOG_WARNING(msg) LOG("WARNING", msg)
    #define LOG_ERROR(msg) LOG("ERROR", msg)
#else
    #define LOG(level, msg)
    #define LOG_INFO(msg)
    #define LOG_WARNING(msg)
    #define LOG_ERROR(msg)
#endif

// 除錯系統
#if ENABLE_DEBUG
    #define DEBUG(msg) cout << "[DEBUG] " << __FILE__ << ":" << __LINE__ << " - " << msg << endl
    #define ASSERT(condition, msg) \
        if (!(condition)) { \
            cout << "[ASSERT FAILED] " << __FILE__ << ":" << __LINE__ << " - " << msg << endl; \
            exit(1); \
        }
#else
    #define DEBUG(msg)
    #define ASSERT(condition, msg)
#endif

// 進階功能
#if ENABLE_ADVANCED_FEATURES
    void advancedFeature() {
        cout << "執行進階功能..." << endl;
    }
    #define HAS_ADVANCED_FEATURES 1
#else
    #define HAS_ADVANCED_FEATURES 0
#endif

// 版本字串生成
#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define VERSION_STRING TOSTRING(VERSION_MAJOR) "." TOSTRING(VERSION_MINOR) "." TOSTRING(VERSION_PATCH)

// 建置資訊
void printBuildInfo() {
    cout << "=== 建置資訊 ===" << endl;
    cout << "版本: " << VERSION_STRING << endl;
    cout << "平台: " << PLATFORM << endl;
    cout << "編譯器: " << COMPILER << endl;
    cout << "路徑分隔符: " << PATH_SEPARATOR << endl;
    cout << "編譯日期: " << __DATE__ << " " << __TIME__ << endl;
    
    #if ENABLE_LOGGING
        cout << "日誌系統: 啟用" << endl;
    #else
        cout << "日誌系統: 停用" << endl;
    #endif
    
    #if ENABLE_DEBUG
        cout << "除錯模式: 啟用" << endl;
    #else
        cout << "除錯模式: 停用" << endl;
    #endif
    
    #if HAS_ADVANCED_FEATURES
        cout << "進階功能: 啟用" << endl;
    #else
        cout << "進階功能: 停用" << endl;
    #endif
}

// 配置檢查
void checkConfiguration() {
    LOG_INFO("檢查系統配置...");
    
    #if VERSION_MAJOR < 2
        LOG_WARNING("版本過舊，建議升級");
    #endif
    
    #ifndef PLATFORM
        LOG_ERROR("無法識別平台");
    #endif
    
    DEBUG("配置檢查完成");
}

// 功能測試
void testFeatures() {
    LOG_INFO("測試系統功能...");
    
    // 基本功能測試
    int result = 10 + 20;
    ASSERT(result == 30, "基本運算測試失敗");
    DEBUG("基本運算測試通過: " + to_string(result));
    
    // 進階功能測試
    #if HAS_ADVANCED_FEATURES
        advancedFeature();
    #else
        LOG_INFO("跳過進階功能測試（功能未啟用）");
    #endif
    
    LOG_INFO("功能測試完成");
}

int main() {
    cout << "=== 條件編譯範例程式 ===" << endl << endl;
    
    // 顯示建置資訊
    printBuildInfo();
    cout << endl;
    
    // 檢查配置
    checkConfiguration();
    cout << endl;
    
    // 測試功能
    testFeatures();
    cout << endl;
    
    // 平台特定操作
    cout << "清除螢幕指令: " << CLEAR_COMMAND << endl;
    
    LOG_INFO("程式執行完畢");
    
    return 0;
}