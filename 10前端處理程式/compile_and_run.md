# 編譯與執行說明

## 編譯指令

### C 語言檔案
```bash
# 編譯 enum_example.c
gcc enum_example.c -o enum_example
./enum_example

# 或使用 clang
clang enum_example.c -o enum_example
./enum_example
```

### C++ 語言檔案
```bash
# 編譯 macro_examples.cpp
g++ macro_examples.cpp -o macro_examples
./macro_examples

# 編譯 conditional_compilation.cpp
g++ conditional_compilation.cpp -o conditional_compilation
./conditional_compilation

# 編譯 typedef_examples.cpp
g++ typedef_examples.cpp -o typedef_examples
./typedef_examples

# 編譯 currency_converter.cpp
g++ currency_converter.cpp -o currency_converter
./currency_converter
```

### 使用 C++11 標準
```bash
g++ -std=c++11 typedef_examples.cpp -o typedef_examples
./typedef_examples
```

### 除錯模式編譯
```bash
# 包含除錯資訊
g++ -g -DDEBUG_MODE=1 conditional_compilation.cpp -o conditional_compilation_debug
./conditional_compilation_debug

# 關閉最佳化，便於除錯
g++ -O0 -g macro_examples.cpp -o macro_examples_debug
./macro_examples_debug
```

### 條件編譯範例
```bash
# 啟用進階功能
g++ -DENABLE_ADVANCED_FEATURES=1 conditional_compilation.cpp -o conditional_advanced
./conditional_advanced

# 停用日誌功能
g++ -DENABLE_LOGGING=0 conditional_compilation.cpp -o conditional_no_log
./conditional_no_log
```

## 執行結果預覽

### enum_example.c
```
=== 列舉使用範例 ===

今天是: 星期五 (值: 5)
學生分數: 85 - 很好

交通燈狀態:
🔴 紅燈 - 停止
🟡 黃燈 - 準備
🟢 綠燈 - 通行
```

### macro_examples.cpp
```
=== 巨集使用範例 ===

基本運算:
SQUARE(5) = 25
CUBE(5) = 125
MAX(5, 3) = 5
MIN(5, 3) = 3
ABS(-10) = 10

幾何計算 (半徑 = 5):
圓面積: 78.5398
圓周長: 31.4159
球體積: 523.599
...
```

### currency_converter.cpp
```
=== 國際貨幣轉換器 ===

=== 目前匯率表 (以台幣為基準) ===
1 USD = NT$31.5
1 EUR = NT$34.2
1 JPY = NT$0.21
1 GBP = NT$39.8
1 CNY = NT$4.35

請輸入要轉換的金額: 100
...
```

## 常見問題

### 1. 編譯錯誤
```bash
# 如果出現 "command not found"
# 安裝編譯器 (Ubuntu/Debian)
sudo apt update
sudo apt install gcc g++

# 安裝編譯器 (macOS)
xcode-select --install
# 或使用 Homebrew
brew install gcc
```

### 2. 執行權限問題
```bash
# 給予執行權限
chmod +x enum_example
./enum_example
```

### 3. 中文顯示問題
```bash
# 設定 UTF-8 編碼
export LANG=zh_TW.UTF-8
export LC_ALL=zh_TW.UTF-8
```

## 進階編譯選項

### 警告選項
```bash
# 顯示所有警告
g++ -Wall -Wextra macro_examples.cpp -o macro_examples

# 將警告視為錯誤
g++ -Wall -Werror macro_examples.cpp -o macro_examples
```

### 最佳化選項
```bash
# 最佳化等級 1
g++ -O1 macro_examples.cpp -o macro_examples

# 最佳化等級 2 (推薦)
g++ -O2 macro_examples.cpp -o macro_examples

# 最佳化等級 3 (最高)
g++ -O3 macro_examples.cpp -o macro_examples
```

### 靜態連結
```bash
# 靜態連結 (產生獨立執行檔)
g++ -static macro_examples.cpp -o macro_examples_static
```