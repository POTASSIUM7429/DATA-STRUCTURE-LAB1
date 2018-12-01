# 数据结构 第一次实验
## 顺存存储
---
### bas.req

1. 初始化表：<br>
函数名称是InitaList(L)；初始条件是线性表L不存在已存在；操作结果是构造一个空的线性表。
2. 销毁表：<br>
函数名称是DestroyList(L)；初始条件是线性表L已存在；操作结果是销毁线性表L。
3. 清空表：<br>
函数名称是ClearList(L)；初始条件是线性表L已存在；操作结果是将L重置为空表。
4. 判定空表：<br>
函数名称是ListEmpty(L)；初始条件是线性表L已存在；操作结果是若L为空表则返回TRUE,否则返回FALSE。
5. 求表长：<br>
函数名称是ListLength(L)；初始条件是线性表已存在；操作结果是返回L中数据元素的个数。
6. 获得元素：<br>
函数名称是GetElem(L,i,e)；初始条件是线性表已存在，1≤i≤ListLength(L)；操作结果是用e返回L中第i个数据元素的值。
7. 查找元素：<br>
函数名称是LocateElem(L,e,compare())；初始条件是线性表已存在；操作结果是返回L中第1个与e满足关系compare（）关系的数据元素的位序，若这样的数据元素不存在，则返回值为0。
8. 获得前驱：<br>
函数名称是PriorElem(L,cur_e,pre_e)；初始条件是线性表L已存在；操作结果是若cur_e是L的数据元素，且不是第一个，则用pre_e返回它的前驱，否则操作失败，pre_e无定义。
9. 获得后继：<br>
函数名称是NextElem(L,cur_e,next_e)；初始条件是线性表L已存在；操作结果是若cur_e是L的数据元素，且不是最后一个，则用next_e返回它的后继，否则操作失败，next_e无定义。
10. 插入元素：<br>
函数名称是ListInsert(L,i,e)；初始条件是线性表L已存在，1≤i≤ListLength(L)+1；操作结果是在L的第i个位置之前插入新的数据元素e。
11. 删除元素：<br>
函数名称是ListDelete(L,i,e)；初始条件是线性表L已存在且非空，1≤i≤ListLength(L)；操作结果：删除L的第i个数据元素，用e返回其值。
12. 遍历表：<br>
函数名称是ListTraverse(L,visit())，初始条件是线性表L已存在；操作结果是依次对L的每个数据元素调用函数visit()。
---
### data organization
- main: 以数组形式安置数据
- 多表操作
- 文件保存!!!!!//准确说事读取和储存

[![哼!哼!啊啊啊啊啊啊!](https://s1.ax1x.com/2018/11/30/Fmypv9.jpg)](https://imgchr.com/i/Fmypv9)

#### so.....
- 初始化程序;
- 预读文件,如果有,则准备读取;如果无,新建;//表放在多个文件里,每个表以#结尾
- 显示;
- 执行操作
- ....
---
#### 文件格式:
| 1 | 2 | 3 |  4 |
| --- | --- | --- | --- |
| data1 | data2 | data3 | data4 |
- 同行隔\t,换行隔\n
- 最后EOF.
---
- 组织操作
这个就很简单了8?
---
### Attention
1. 每次执行完后如有修改,更新文件.
2. 随机应变,注意统一接口
3. 命名和编程规范
4. 把状态处理和回显放在操作函数外,操作函数只负责操作
5. 本次时间较为充裕,尽心组织,尽量把事情往前面做<br>
6. 注意特殊输入和非法输入
---
2018/11/30
---
## V 1.1.0
今天发现模板已经给出了...以上基本需要重构.不过给出的文件读写函数实在不想用,于是还是要重写.
- 重构函数
- 操作函数初步实现(一堆bug)
---
## TODO:
- 文件函数编写
- 函数联调联试
- 文档和注释
希望明天能够想起来这茬...最近欠债太多了,效率挂零....<br>
12/1
---
