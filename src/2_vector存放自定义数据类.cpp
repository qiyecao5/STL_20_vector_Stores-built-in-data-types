#include <iostream>
using namespace std;
#include <vector>
#include <string>

//vector容器中存放自定义数据类型
class Person
{
public:
    Person(string name, int age)
	{	
		this->m_Name = name;//将传入的`name`参数值赋给类的`m_Name`成员变量。  
		this->m_Age = age; //将传入的`age`参数值赋给类的`m_Age`成员变量。  
	}
    string m_Name;
    int m_Age;
};

void test01()
{
    vector<Person>v;

    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    Person p5("eee",50);

    //向容器中添加数据
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    //遍历容器中的数据
    for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {   
        //你要明白 *it  解出来的可是Person类型,它是我们定义的类.
        //所以要 的这个对象的名字,应该这样写(*it).m_Name
        //技巧:你看上面<Person>尖括号里面是什么类型,那么解出来的就应该是什么类型
        cout << "姓名: " << (*it).m_Name << "年龄: " << (*it).m_Age << endl;

        //你既然知道it它的属性了 它是个指针,你其实直接可以这样拿到
        cout << "姓名: " << it-> m_Name << "年龄: " << it-> m_Age << endl;
    }

}

//存放自定义数据类型 指针
void test02()
{
    vector<Person*>v;  //相对于 要把下面五个对象类型的指针保存住

    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    Person p5("eee",50);

    //向容器中添加数据,我们存的是指针,所以我们这里存的时候 要取址符&
    v.push_back(&p1);  
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    //遍历容器中的数据,保持的就是Person*这个类型,这里也要写Person*类型
    for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
    {   
        //你要明白 *it  是解的迭代器,也就是说,我们当前是一个迭代器指针,迭代器解出来后  是我们存的 Person*类型
        // 这是二级指针, 迭代器的指针 里面 存的是 Person*类型指针
        cout << "姓名:: " << (*it)->m_Name << "年龄:: " << (*it)->m_Age << endl;
        
        //既然我们知道这是一个指针的指针,那么我们也可以下面这样两个**代表 取指针里的指针里的值
        cout << "姓名: " << (**it).m_Name << "年龄: " << (**it).m_Age << endl;
    }
}


int main(){
    cout << "测试开始****七叶草00"<<endl;
    test01();
    system("pause");
}