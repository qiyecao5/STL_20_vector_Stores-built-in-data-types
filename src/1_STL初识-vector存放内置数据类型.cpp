#include <iostream>
using namespace std;
#include <vector>
#include <algorithm> // 标准算法头文件

void myPrint(int val) {
    std::cout << val << std::endl;
}


//vector容器存放欸之数据类型
void test01()
{   
    //创建了一个vector容器,数组
    vector<int>v;
    
    // 向容器中添加元素  
    v.push_back(11);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //通过迭代器访问容器中的数据
    // 第一种遍历方式
    // vector<int>::iterator itBegin = v.begin(); //起始迭代器 指向容器种第一个元素
    // vector<int>::iterator itEnd = v.end();     //结束迭代器 指向容器种最后一个元素的下一个位置
    // while (itBegin != itEnd) 
    // {
    //     std::cout << *itBegin << std::endl;
    //     itBegin++;
    //     /*
    //     itBegin是第一个位置,所以你第一次打印就是第一个位置的值
    //     但是打印完后,itBegin++; 把你的位置加1了,你变成第二个位置的指针了,这样循环遍历打印了
    //     */
    // }

    //第二种遍历方式
    // 使用迭代器遍历并打印vector中的元素  
    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // { 
    //     std::cout << *it << ' ';
    // }

    //第三种遍历方式  for_each 利用STL提供遍历算法
    for_each(v.begin(), v.end(), myPrint);

}


int main(){
    cout << "测试开始****七叶草00"<<endl;
    test01();
    system("pause");
}
