import java.util.Scanner;

class Main {
  public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int isPlay;
    do{
			System.out.println("請輸入欲選購的電影票種類:");
			System.out.print("1.全票(300元) 2.優待票(270元) 3.早場票(240)：");
			int ticket = sc.nextInt();

			System.out.print("請輸入預購張數：");
			int num = sc.nextInt();

			
			System.out.print("還要繼續運算嗎?1.繼續2.結束");
			isPlay = sc.nextInt();
			if(isPlay == 2) break;
				
		}while(true);
		System.out.println("程式結束");
  }
}
