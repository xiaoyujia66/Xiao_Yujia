a)  错误：number是指针不是变量。
    改正：把语句改为 cout << *number << endl。
b)  错误：没有间接引用指针realPtr。
    改正：最后一个语句改为 integerPtr = *realPtr。
c)  错误：引用变量时，没有使用地址运算符&。
    改正：把语句改为 x = &y。
d)  错误：for条件错误。
    改正：把语句改为 for( int i = 0; *(s + i) != '0'; ++i )。
e)  错误：间接引用一个void指针。
    改正：要间接引用void指针，就必须先把void指针强制转换为整数指针。将语句改为 result = *static_cast<int * >( genericPtr)。
f)  错误：指针前没有*。
    改正：把语句改为 cout << *xPtr << endl。
