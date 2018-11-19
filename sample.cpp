#include "sample.h"
 
void Sample::set(int num)
{
    m_num = num;
}
 
void Sample::set2(int num2)
{
    m_num2 = num2;
}

int Sample::get()
{
    return m_num + m_num2;

}