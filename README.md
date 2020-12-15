# 数据结构与算法

## 抽象数据类型 (ADT) 的定义

```cpp
ADT 抽象数据类型名 {
    Data
        数据对象的定义
        数据元素之间逻辑关系的定义
    Operation
        操作 1
            初始条件
            操作结果描述
        操作 2
            ...
        操作 n
        ...
} ADT 抽象数据类型名
```

- 比如 Circle 的定义

    ```cpp
    ADT Circle {
        数据对象：D={r, x, y | r, x, y 均为实数}
        数据关系：R={<r, x, y> | r 是半径，<x, y>是圆心坐标}
        基本操作：
            Circle(&C, r, x, y)
                操作结果：构造一个圆。
            double Area(C)
                初始条件：圆已存在。
                操作结果：计算面积。
            double Circumference(C)
                初始条件：圆已存在。
                操作结果：计算周长。
            ...
    } ADT Circle
    ```

- 再比如 高级语言中没有复数类型，可以借助已有数据类型解决复数类型的问题

    ```cpp
    ADT Complex {
        D = { r1, r2 | r1, r2 都是实数 }
        S = { <r1, r2> | r1 是实部, r2 是虚部 }
        assign(&C, v1, v2)
            初始条件：空的复数 C 已存在
            操作结果：构造复数 C，r1 和 r2 分别被赋以参数 v1 和 v2 的值
        destroy(&C)
            初始条件：复数 C 已存在
            操作结果：复数 C 被销毁
        getReal(C, &realPart)
            初始条件：复数 C 已存在
            操作结果：用 realPart 返回复数 C 的实部值
        getImage(C, &imagePart)
            初始条件：复数 C 已存在
            操作结果：用 imagePart 返回复数 C 的虚部值
        add(C1, C2, &sum)
            初始条件：C1 和 C2 是复数
            操作结果：用 sum 返回复数 C1 和 C2 的和
        ...
    } ADT Complex
    ```
