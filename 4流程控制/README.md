# 流程控制

	//讓使用者輸入密碼,如果輸入的密碼正確(1234)，會顯示「歡迎光臨」, 如果輸入的密碼錯誤，不不會顯示歡迎訊息
		string password;
		cout << "請輸入密碼:";
		cin >> password;
		if(password == "1234"){
			cout << "歡迎光臨" << endl;
		}