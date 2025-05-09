#include <stdio.h>
//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：进入整个程序的生命周期
/*
int main()
{
    {
        int a = 10;
        printf("%d\n", a);
    }  
    return 0;
}   
*/
//2.const修饰的常变量
//const int num = 10; //num就是常变量 - 具有常变量属性（不能改变的属性）
/*
int main()
{
    int arr[10] = {0};//10个元素
    
    const int n = 10;

    int arr2[n] = {0};//这个n必须是个常量才行。而这里的n依然是个变量是不行的
    return 0;
}
*/


//3.#define 定义的标识符常量
/*
#define MAX 100

int main()
{
    int n = MAX;
    printf("%d\n",n);
    return 0;
}
*/
//4.枚举常量
//用于一一列举的常量
enum Sex
{   //枚举常量
    MALE,
    FEMALE,
    SECRET
};//这种枚举类型的变量的未来可取的值
int main()
{
    enum Sex s = MALE;

    printf("%d\n",MALE);
    printf("%d\n",FEMALE);
    printf("%d\n",SECRET);


    return 0;
}