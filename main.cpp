/**************************************************
* 龙门项目：机器视觉全面入门教程
* 
* C++的Lambda表达式，本项目并不着重讲语法，但还是要
* 讲一下Lambda表达式，因为理解透彻Lambda表达式对理解
* C++很有帮助。
***************************************************/

#include <iostream>
#include <list>

using namespace std;


class lambda_xxxx
{
public:
    lambda_xxxx(int _a, int _b) :a(_a), b(_b)
    {
    }
    bool operator()(int x, int y) throw()
    {
        return a + b > x + y;
    }
private:
    int a;
    int b;
};

int main()
{
    int a = 2;
    int b = 3;
    int c = 4;
    //定义Lambda表达式
    auto lambdaFunc = [=](int x, int y, int z = 0) -> bool
    {
        return a + b > x + y;
    };
    class lambdaFunc_xxx
    {
    public:
        lambdaFunc_xxx(int _a, int _b, int _c)
        {
            a = _a;
            b = _b;
            c = _c;
        }
        bool operator()(int x, int y, int z = 0)
        {
            return a + b > x + y;
        }
    private:
        int a;
        int b;
        int c;
    };

    //lambdaFunc_xxx fun(1, 2, 2);
    //bool ret = fun(2, 5);

    bool ret = lambdaFunc(1, 2);
    bool ret2 = lambdaFunc_xxx(a, b, c)(1, 2);

    cout << ret << endl;
    cout << ret2 << endl;

    list<string> LONGMEN_BUILD_LIST =
    {
        "LONGMEN_BUILD_Cpp_Encapsulation",
        "LONGMEN_BUILD_Cpp_Inherits",
        "LONGMEN_BUILD_Cpp_Lambda"
    };

	return 0;
}

//int a = 2;
//int b = 3;
//
////定义Lambda表达式
//auto lambdaFunc = [a, b](int x, int y)mutable throw() -> bool
//{
//    return a + b > x + y;
//};
//bool ret = lambdaFunc(3, 4);
//
//auto lambdaClass = lambda_xxxx(a, b);
//ret = lambdaClass(3, 4);
//
////匿名调用
//ret = (new lambda_xxxx(a, b))->operator()(3, 4);