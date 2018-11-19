#include <iostream>
#include "sample.h"
 
using namespace std;
 
int main()
{
    CSample obj;  // CSampleをインスタンス化
    int num;
    int num2;
     
    cout << "整数を入力して下さい1:" << endl;
    cin >> num;
    cout << "整数を入力して下さい2:" << endl;
    cin >> num2;
     
    obj.set( num );  // CSampleのメンバ変数をセット
    cout << obj.get() << endl;  // メンバ変数の値を出力
 
 
    return 0;
}