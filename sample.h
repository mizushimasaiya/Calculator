#ifndef _SAMPLE_H_
#define _SAMPLE_H_
 
// クラス宣言
class Sample
{
public:
    void set(int num);  // m_numに値を設定する
    void set2(int num2);
    int get();          // m_numの値を取得する
private:
    int m_num;
    int m_num2;
};
 
#endif //_SAMPLE_H_