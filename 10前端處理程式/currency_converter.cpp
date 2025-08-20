// currency_converter.cpp - 匯率轉換器（巨集應用範例）
#include <iostream>
#include <iomanip>
using namespace std;

// 匯率定義（以台幣為基準）
#define USD_TO_TWD 31.5
#define EUR_TO_TWD 34.2
#define JPY_TO_TWD 0.21
#define GBP_TO_TWD 39.8
#define CNY_TO_TWD 4.35

// 轉換巨集（從外幣轉台幣）
#define USD_TO_TWD_CONVERT(usd) ((usd) * USD_TO_TWD)
#define EUR_TO_TWD_CONVERT(eur) ((eur) * EUR_TO_TWD)
#define JPY_TO_TWD_CONVERT(jpy) ((jpy) * JPY_TO_TWD)
#define GBP_TO_TWD_CONVERT(gbp) ((gbp) * GBP_TO_TWD)
#define CNY_TO_TWD_CONVERT(cny) ((cny) * CNY_TO_TWD)

// 轉換巨集（從台幣轉外幣）
#define TWD_TO_USD_CONVERT(twd) ((twd) / USD_TO_TWD)
#define TWD_TO_EUR_CONVERT(twd) ((twd) / EUR_TO_TWD)
#define TWD_TO_JPY_CONVERT(twd) ((twd) / JPY_TO_TWD)
#define TWD_TO_GBP_CONVERT(twd) ((twd) / GBP_TO_TWD)
#define TWD_TO_CNY_CONVERT(twd) ((twd) / CNY_TO_TWD)

// 手續費計算巨集
#define TRANSACTION_FEE_RATE 0.005  // 0.5%
#define CALCULATE_FEE(amount) ((amount) * TRANSACTION_FEE_RATE)
#define AMOUNT_WITH_FEE(amount) ((amount) + CALCULATE_FEE(amount))

// 條件編譯 - 是否顯示詳細資訊
#define SHOW_DETAILS 1

#if SHOW_DETAILS
    #define DETAIL_PRINT(msg) cout << "  " << msg << endl
#else
    #define DETAIL_PRINT(msg)
#endif

// 列舉定義貨幣類型
typedef enum {
    TWD = 1,  // 台幣
    USD,      // 美金
    EUR,      // 歐元
    JPY,      // 日圓
    GBP,      // 英鎊
    CNY       // 人民幣
} Currency;

// 貨幣名稱對應
const char* getCurrencyName(Currency currency) {
    switch(currency) {
        case TWD: return "台幣 (TWD)";
        case USD: return "美金 (USD)";
        case EUR: return "歐元 (EUR)";
        case JPY: return "日圓 (JPY)";
        case GBP: return "英鎊 (GBP)";
        case CNY: return "人民幣 (CNY)";
        default: return "未知貨幣";
    }
}

// 貨幣符號對應
const char* getCurrencySymbol(Currency currency) {
    switch(currency) {
        case TWD: return "NT$";
        case USD: return "$";
        case EUR: return "€";
        case JPY: return "¥";
        case GBP: return "£";
        case CNY: return "¥";
        default: return "";
    }
}

// 轉換為台幣
double convertToTWD(double amount, Currency fromCurrency) {
    switch(fromCurrency) {
        case TWD: return amount;
        case USD: return USD_TO_TWD_CONVERT(amount);
        case EUR: return EUR_TO_TWD_CONVERT(amount);
        case JPY: return JPY_TO_TWD_CONVERT(amount);
        case GBP: return GBP_TO_TWD_CONVERT(amount);
        case CNY: return CNY_TO_TWD_CONVERT(amount);
        default: return 0;
    }
}

// 從台幣轉換
double convertFromTWD(double twdAmount, Currency toCurrency) {
    switch(toCurrency) {
        case TWD: return twdAmount;
        case USD: return TWD_TO_USD_CONVERT(twdAmount);
        case EUR: return TWD_TO_EUR_CONVERT(twdAmount);
        case JPY: return TWD_TO_JPY_CONVERT(twdAmount);
        case GBP: return TWD_TO_GBP_CONVERT(twdAmount);
        case CNY: return TWD_TO_CNY_CONVERT(twdAmount);
        default: return 0;
    }
}

// 貨幣轉換主函數
void convertCurrency(double amount, Currency from, Currency to) {
    cout << "\n=== 貨幣轉換 ===" << endl;
    cout << "原始金額: " << getCurrencySymbol(from) << fixed << setprecision(2) << amount 
         << " " << getCurrencyName(from) << endl;
    
    DETAIL_PRINT("轉換步驟:");
    
    // 先轉為台幣
    double twdAmount = convertToTWD(amount, from);
    if (from != TWD) {
        DETAIL_PRINT("轉為台幣: NT$" + to_string(twdAmount));
    }
    
    // 再轉為目標貨幣
    double result = convertFromTWD(twdAmount, to);
    if (to != TWD) {
        DETAIL_PRINT("轉為目標貨幣: " + string(getCurrencySymbol(to)) + to_string(result));
    }
    
    // 計算手續費
    double fee = CALCULATE_FEE(result);
    double totalWithFee = AMOUNT_WITH_FEE(result);
    
    cout << "轉換結果: " << getCurrencySymbol(to) << fixed << setprecision(2) << result 
         << " " << getCurrencyName(to) << endl;
    cout << "手續費 (" << (TRANSACTION_FEE_RATE * 100) << "%): " 
         << getCurrencySymbol(to) << fee << endl;
    cout << "總計金額: " << getCurrencySymbol(to) << totalWithFee << endl;
}

// 顯示匯率表
void showExchangeRates() {
    cout << "\n=== 目前匯率表 (以台幣為基準) ===" << endl;
    cout << "1 USD = NT$" << USD_TO_TWD << endl;
    cout << "1 EUR = NT$" << EUR_TO_TWD << endl;
    cout << "1 JPY = NT$" << JPY_TO_TWD << endl;
    cout << "1 GBP = NT$" << GBP_TO_TWD << endl;
    cout << "1 CNY = NT$" << CNY_TO_TWD << endl;
}

// 顯示選單
void showMenu() {
    cout << "\n=== 貨幣轉換器 ===" << endl;
    cout << "請選擇貨幣:" << endl;
    cout << "1. 台幣 (TWD)" << endl;
    cout << "2. 美金 (USD)" << endl;
    cout << "3. 歐元 (EUR)" << endl;
    cout << "4. 日圓 (JPY)" << endl;
    cout << "5. 英鎊 (GBP)" << endl;
    cout << "6. 人民幣 (CNY)" << endl;
}

int main() {
    cout << "=== 國際貨幣轉換器 ===" << endl;
    
    // 顯示匯率表
    showExchangeRates();
    
    double amount;
    int fromChoice, toChoice;
    
    // 輸入轉換金額
    cout << "\n請輸入要轉換的金額: ";
    cin >> amount;
    
    // 選擇來源貨幣
    showMenu();
    cout << "選擇來源貨幣 (1-6): ";
    cin >> fromChoice;
    
    // 選擇目標貨幣
    cout << "選擇目標貨幣 (1-6): ";
    cin >> toChoice;
    
    // 驗證輸入
    if (fromChoice < 1 || fromChoice > 6 || toChoice < 1 || toChoice > 6) {
        cout << "錯誤: 無效的貨幣選擇!" << endl;
        return 1;
    }
    
    if (amount <= 0) {
        cout << "錯誤: 金額必須大於零!" << endl;
        return 1;
    }
    
    // 執行轉換
    Currency fromCurrency = static_cast<Currency>(fromChoice);
    Currency toCurrency = static_cast<Currency>(toChoice);
    
    convertCurrency(amount, fromCurrency, toCurrency);
    
    // 顯示一些常用轉換範例
    cout << "\n=== 常用轉換範例 ===" << endl;
    convertCurrency(100, USD, TWD);
    convertCurrency(1000, TWD, USD);
    convertCurrency(50, EUR, TWD);
    
    return 0;
}