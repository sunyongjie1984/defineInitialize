int b; // 初始化为0。

int main()
{
    int a; // 不进行初始化。
    int ival = 1024;
    // 内置类型变量的初始化
    // 内置类型变量的初始化取决于变量定义的位置。在函数体外定义的变量都初始化成０。
    // 在函数体里定义的内置类型变量不进行自动初始化

    // 类类型变量的初始化
    // 每个类都定义了该类型的对象可以怎样初始化。类通过定义一个或多个构造函数来控制类对象的初始化。
    // 大多数类都提供了默认构造函数，如果类具有默认构造函数，那么就可以在定义该类的变量时不用显式地初始化变量。
    // 没有默认构造函数的类型，每个定义都必须提供显式的初始化式。

    int* pi = &ival;
    int* pi1 = new int;                // 动态分配一个int类型对象，未初始化
    int* pi2 = new int();              // 动态分配一个int类型对象，初始化0
    int* pi3 = new int(1024);          // 动态分配一个int类型对象，初始化1024
    int* pi4 = new int[1024];          // 动态分配一个数组对象，未初始化
    int* pi5 = new int[1024]();        // 动态分配一个数组对象，初始化0
    // int* pi6 = new int[1024](1024); // wrong

    // warning
    // 无论如何都是要把它看作是定义了一个指针，再不要看成是定义了一个字符串对象了。
    const char* q = "I love China";
    q = "I love American"; // 可以const指针值可以变化（变成另个一个字符串的地址了），所指向的内容不可以变化。
    // *q = 'a'; 对比*p = 'a'可以看出一个是编译能不能通过，一个是编译通过，但是运行崩溃。

    char* p = "I love China";

    p = "I love American"; // ok
    p++; // ok
    
    // *p = 'a'; 编译可以通过，但是运行就会崩溃


    char* p1 = new char;              // 含义与上面相同。      
    char* p2 = new char(); 
    char* p3 = new char('a');
    char* p4 = new char[1024];
    char* p5 = new char[1024]();
    return 0;
}
