# 前端處理程式練習題

## 基礎練習

### 練習 1: 列舉應用
**題目**: 建立一個學生成績管理系統，使用列舉定義成績等級。

**要求**:
- 定義成績等級列舉：優秀(90+)、良好(80-89)、及格(60-79)、不及格(0-59)
- 輸入學生分數，顯示對應等級
- 使用 switch 語句處理不同等級的訊息

**範例輸出**:
```
請輸入學生分數: 85
成績等級: 良好
建議: 繼續保持，爭取更好成績！
```

### 練習 2: 基本巨集定義
**題目**: 建立數學運算巨集庫。

**要求**:
- 定義圓周率 PI
- 建立計算圓面積、圓周長的巨集
- 建立計算矩形面積、周長的巨集
- 建立溫度轉換巨集 (攝氏↔華氏)

**範例輸出**:
```
請輸入圓半徑: 5
圓面積: 78.54
圓周長: 31.42

請輸入攝氏溫度: 25
華氏溫度: 77.00°F
```

## 進階練習

### 練習 3: 條件編譯應用
**題目**: 建立一個支援多種編譯模式的程式。

**要求**:
- 定義 DEBUG、RELEASE、TEST 三種模式
- 在不同模式下顯示不同的訊息
- 使用 #ifdef 控制功能開關
- 包含版本資訊和編譯時間

**編譯指令**:
```bash
# DEBUG 模式
g++ -DDEBUG_MODE exercises3.cpp -o exercises3_debug

# RELEASE 模式  
g++ -DRELEASE_MODE exercises3.cpp -o exercises3_release

# TEST 模式
g++ -DTEST_MODE exercises3.cpp -o exercises3_test
```

### 練習 4: typedef 複雜應用
**題目**: 建立學生資訊管理系統。

**要求**:
- 使用 typedef 定義學生結構
- 定義學生陣列型別
- 定義函數指標型別用於排序
- 實作按姓名、成績排序功能

**結構設計**:
```cpp
typedef struct {
    string name;
    int studentId;
    float grades[3];  // 三科成績
    float average;
} Student;

typedef Student StudentArray[100];
typedef bool (*CompareFunction)(const Student&, const Student&);
```

## 綜合練習

### 練習 5: 簡易計算機
**題目**: 使用前端處理程式技術建立功能完整的計算機。

**要求**:
- 使用列舉定義運算類型
- 使用巨集定義數學常數和運算
- 使用條件編譯控制進階功能
- 使用 typedef 簡化複雜型別

**功能需求**:
1. 基本四則運算
2. 三角函數運算 (條件編譯控制)
3. 對數運算 (條件編譯控制)
4. 歷史記錄功能 (DEBUG 模式)

**範例輸出**:
```
=== 簡易計算機 v1.0 ===
編譯模式: DEBUG
支援功能: 基本運算, 三角函數, 對數運算

請選擇運算類型:
1. 加法    2. 減法    3. 乘法    4. 除法
5. 正弦    6. 餘弦    7. 對數    0. 結束

選擇: 1
請輸入兩個數字: 10 20
結果: 10 + 20 = 30

[DEBUG] 運算歷史: 10 + 20 = 30
```

### 練習 6: 檔案處理系統
**題目**: 建立檔案操作的巨集系統。

**要求**:
- 定義檔案操作相關巨集
- 使用條件編譯支援不同作業系統
- 建立錯誤處理機制
- 使用 typedef 定義檔案處理函數指標

**巨集設計**:
```cpp
// 跨平台路徑分隔符
#ifdef _WIN32
    #define PATH_SEP "\\"
#else
    #define PATH_SEP "/"
#endif

// 檔案操作巨集
#define SAFE_FOPEN(file, name, mode) \
    do { \
        file = fopen(name, mode); \
        if (!file) { \
            printf("無法開啟檔案: %s\n", name); \
            return -1; \
        } \
    } while(0)

#define SAFE_FCLOSE(file) \
    do { \
        if (file) { \
            fclose(file); \
            file = NULL; \
        } \
    } while(0)
```

## 挑戰練習

### 練習 7: 記憶體管理巨集
**題目**: 建立安全的記憶體管理巨集系統。

**要求**:
- 建立安全的 malloc/free 巨集
- 加入記憶體洩漏檢測 (DEBUG 模式)
- 使用條件編譯控制檢測功能
- 建立記憶體使用統計

**巨集設計**:
```cpp
#ifdef DEBUG_MEMORY
    extern int g_malloc_count;
    extern int g_free_count;
    
    #define SAFE_MALLOC(ptr, size, type) \
        do { \
            ptr = (type*)malloc(size); \
            if (ptr) { \
                g_malloc_count++; \
                printf("[MALLOC] %p, size: %zu\n", ptr, size); \
            } \
        } while(0)
        
    #define SAFE_FREE(ptr) \
        do { \
            if (ptr) { \
                printf("[FREE] %p\n", ptr); \
                free(ptr); \
                ptr = NULL; \
                g_free_count++; \
            } \
        } while(0)
#else
    #define SAFE_MALLOC(ptr, size, type) ptr = (type*)malloc(size)
    #define SAFE_FREE(ptr) do { free(ptr); ptr = NULL; } while(0)
#endif
```

### 練習 8: 單元測試框架
**題目**: 使用巨集建立簡易的單元測試框架。

**要求**:
- 建立測試斷言巨集
- 統計測試結果
- 支援測試分組
- 產生測試報告

**框架設計**:
```cpp
// 測試統計
extern int g_test_total;
extern int g_test_passed;
extern int g_test_failed;

// 測試巨集
#define TEST_ASSERT(condition, message) \
    do { \
        g_test_total++; \
        if (condition) { \
            printf("[PASS] %s\n", message); \
            g_test_passed++; \
        } else { \
            printf("[FAIL] %s\n", message); \
            g_test_failed++; \
        } \
    } while(0)

#define TEST_EQUAL(expected, actual, message) \
    TEST_ASSERT((expected) == (actual), message)

#define TEST_GROUP(name) \
    printf("\n=== 測試群組: %s ===\n", name)

#define TEST_REPORT() \
    do { \
        printf("\n=== 測試報告 ===\n"); \
        printf("總計: %d\n", g_test_total); \
        printf("通過: %d\n", g_test_passed); \
        printf("失敗: %d\n", g_test_failed); \
        printf("成功率: %.2f%%\n", \
               (float)g_test_passed / g_test_total * 100); \
    } while(0)
```

## 解答提示

### 練習 1 提示
```cpp
typedef enum {
    FAIL = 0,
    PASS = 60,
    GOOD = 80,
    EXCELLENT = 90
} Grade;

Grade getGrade(int score) {
    if (score >= EXCELLENT) return EXCELLENT;
    if (score >= GOOD) return GOOD;
    if (score >= PASS) return PASS;
    return FAIL;
}
```

### 練習 2 提示
```cpp
#define PI 3.14159265359
#define CIRCLE_AREA(r) (PI * (r) * (r))
#define CIRCLE_PERIMETER(r) (2 * PI * (r))
#define RECT_AREA(w, h) ((w) * (h))
#define RECT_PERIMETER(w, h) (2 * ((w) + (h)))
#define C_TO_F(c) (((c) * 9.0 / 5.0) + 32)
#define F_TO_C(f) (((f) - 32) * 5.0 / 9.0)
```

### 練習 3 提示
```cpp
#define VERSION "1.0.0"

#ifdef DEBUG_MODE
    #define LOG(msg) printf("[DEBUG] %s\n", msg)
    #define MODE_NAME "DEBUG"
#elif defined(RELEASE_MODE)
    #define LOG(msg)
    #define MODE_NAME "RELEASE"
#elif defined(TEST_MODE)
    #define LOG(msg) printf("[TEST] %s\n", msg)
    #define MODE_NAME "TEST"
#else
    #define LOG(msg)
    #define MODE_NAME "UNKNOWN"
#endif
```

這些練習題涵蓋了前端處理程式的各個重要概念，從基礎到進階，幫助學生循序漸進地掌握這些技術。