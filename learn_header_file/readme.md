## Header file 是用来链接程序的 declaration 和 execution 的重要环节

![理解header，观察图片](https://res.cloudinary.com/willwang/image/upload/v1612071736/Screen_Shot_2021-01-30_at_9.40.06_PM_srxtml.png)

- convention 就是.h file 和它所指向的 function file 要取同一个名字，否则抓不到。
- 在最终 compile file 的时候，不能直接 g++ main.cpp 这样以来 compiler or linker 是找不到相对应的 sort functions
  的。要 g++ -o main source.cpp sort.cpp
