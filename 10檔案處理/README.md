# 檔案處理
## 何謂串流?

```
C++語言將許多的裝置如螢幕、鍵盤、記憶體和磁碟的存取，均以串流的方式來存取，因此其存取的語法都示常類似。
```

### 串流類別(fstream)

```
c++提供fstream類別，可以用來讀取檔案資料，也可將資料寫入檔案儲存。要使用fstream類別
```

```c++
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
	fstream file;
	char buffer[200];
	file.open("readme.txt", ios::in);
	if(!file){
		cout << "檔案無法開啟!\n";
	}else{
		file.read(buffer,sizeof(buffer));
		cout << buffer << endl;
		file.close();
	}
	system("pause");
	return 0;
}
```

```
//readme.txt
鉅亨網國際中心資深召集人許光吟 (Allen) 於 6 日《鉅亨看世界》直播中指出，
美國 6 月製造業景氣報復性反彈，就業市場也逐步回穩，但美股本益比估值過高，企業的獲利能力是否能跟上，讓外界捉摸不透，
安聯投信產品經理胡韡耀透露，企業盈餘修正的狀況有趨緩跡象，
建議投資人要分散風險，不妨考慮向一流企業領特別收益。
```
