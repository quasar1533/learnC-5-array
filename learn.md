## 学习数组
* 数组就是一组相同类型的数（广义的数）

### 常用的io_utility库
* 定义在/include/io_utils.h

### 关于数组的内存分配情况
* 不同编译器有不同的解决方案
* auto变量存在函数调用栈内存中，gcc会直接在其上分配，而msvc会统一整理一下
* 全局变量存储在一个较独立的内存空间上，所以一般都是0

### 了解数组的边界
* 认识内存分配情况
* 数组有边界，但C不会检查，只有在运行时会报错。   
* 相信程序员， C语言设计哲学

### 字符串 C语言中字符串实际上就是数组
* 字符型数组
* C语言的字符串必须以NULL结尾，所以默认长度要比实际长度长一格才可以
  * 字符串也是数组，如果结尾不加结束标识符NULL，则会继续越界输出下面内存单元的内容
    在MSVC中未初始化的内存 都自动填充cc --> 烫烫

### 更高级的语言，数组中附带了很多信息，C语言对效率追求极致。
  
### 排序算法
* 用c语言实现排序算法，更加贴近底层原理！
* 分置思想，递归操作