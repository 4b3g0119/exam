
using namespace std;
#include <iostream>


int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}



int main()
{
    //第一題 : 輸入月份，然後判斷其所屬的季節 （3~5 月為春季，6~8 月為夏季， 9~11 月為秋季， 12~2 月為冬季）。

    cout << "請輸入月份\n";
    int x;
    cin >> x; //輸入月份
    
    if (x >= 3 && x <= 5) {
        cout << "春季\n";
    }
    else if (x >= 6 && x <= 8) {
        cout << "夏季\n";
    }
    else if (x >= 9 && x <= 11) {
        cout << "秋季\n";
    }
    else {
        cout << "冬季\n";
    }
        
    //第二題 : 輸入一個正整數n，請以三種重複結構(for, while, do-while)來計算小於等於n的所有偶數和。

    int n;
    int sum = 0;
    cout << "輸入一個正整數";
    cin >> n; 
    
    //for迴圈
    for (int i = 2; i <= n ; i = i + 2) {
        sum = sum + i;
    }
   
    //while迴圈 
     int i = 1;
     int sum2 = 0;
     while (i <= n) {
         if (i % 2 == 0) sum2 = sum2 + i;
         i++;
     }
     
     

     //do-while迴圈
      i = 2;
     int sum3 = 0;
     do {
         sum3 = sum3 + i;
         i = i + 2;

     } while (i <= n);

     cout << "1~" << n << "之間所有的偶數和為:" << sum3 << endl;

     //第三題 : 輸入一個非負整數n，請以遞迴與非遞迴方式寫出階乘n!的結果。(n!=n*(n-1)*…*1, 0!=1)

     //非遞迴計算n!

     int result = 1;
     for (int i = 1; i <= n; i++) {
         result = result * i;
     }
     cout << n << "! =" << result << endl;

     //遞迴計算n!
     result = factorial(n);
     cout << n << "! =" << result << endl;




}


