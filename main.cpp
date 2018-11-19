#include <iostream>
#include "sample.h"
 
using namespace std;
 
int main()
{
    Sample obj;  // Sampleをインスタンス化
    int num;
    int num2;
     
    cout << "整数を入力して下さい1:" << endl;
    cin >> num;
    cout << "整数を入力して下さい2:" << endl;
    cin >> num2;
     
    obj.set( num );  // Sampleのメンバ変数をセット
    obj.set2( num2 );
    cout << obj.get() << endl;  // メンバ変数の値を出力
    return 0;
}