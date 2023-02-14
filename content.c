import java.util.Scanner;

class Main {
  public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int isPlay;
    while(true){
			
			System.out.println("請輸入欲選購的電影票種類:");
			System.out.print("1.全票(300元) 2.優待票(270元) 3.早場票(240)：");
			int ticket = sc.nextInt();
			int price=0;
			boolean isError = true;
			switch(ticket){
				case 1:
					isError = false;
					price = 300;
					break;
				case 2:
					isError = false;
					price = 270;
					break;
				case 3:
					isError = false;
					price = 240;
					break;
			}
			if(isError){
				System.out.println("輸入錯誤");
				break;
			}
			System.out.print("請輸入預購張數：");
			int num = sc.nextInt();
			if(num > 10){
				System.out.println("超過10張");
				break;
			}
			System.out.println("總價" + (num * price));			
			System.out.print("還要繼續運算嗎?1.繼續2.結束");
			isPlay = sc.nextInt();
			if(isPlay == 2) break;
				
		}
		System.out.println("程式結束");
  }
}
