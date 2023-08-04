# Cuda
## 1. Parallel computing
### 1）Von Neumann model
- CPU: two parts — control unit and ALU
- **Forking** starting a thread
- **Joining** terminating a thread
- modification from Von Neumann model to memory hieraechy<img src=/img/vnm.jpg width=50%><img src=/img/memoryh.jpg width=80%>
### 2）Memory hierarchy
- Cache


### 3）Two important Laws
- **Amdahl’s Law**
  - S=1/(1-a+a/n)
  - a为并行计算部分所占比例
  - n为并行处理结点个数。
  - 当1-a=0时，(即没有串行，只有并行)最大加速比s=n；
  - 当a=0时（即只有串行，没有并行），最小加速比s=1；
  - 当n→∞时，极限加速比s→ 1/（1-a），这也就是加速比的上限。
  - 例如，若串行代码占整个代码的25%，则并行处理的总体性能不可能超过4。
  - 我们可以从“加速比”的公式中看出，单纯地增加cup处理器的数量并不一定可以有效地提高系统的性能，只有在提高系统内并行化模块比重的前提下，同时合理增加处理器的数量，才能以最小的投入得到最大的加速比，这就是阿姆达尔定律要告诉我们的核心思想，它很直观地反应了加速比与处理器个数、系统串行比例之间的关系
- **Gustafson’s Law**
  - S=n-f(n-1)
  - 执行时间： 串行时间a + 并行时间b
  - 优化后任务： a + nb
  - 加速比： (a + nb) / (a + b)
  - f串行比例 ： a / (a + b)
  - 如果串行比例很小，那个加速比就是处理器的个数。

## 2. Distributed Memory Programming  with MPI
- MPI definition
  - MPI 是一个库，不是一门语言。MPI 提供库函数/过程供C/C++/FORTRAN 调用。
  - MPI 是一种标准或规范的代表，而不特指某一个对它的具体实现
  - MPI 是一种消息传递编程模型。最终目的是服务于进程间通信这一目标 
- 通信器
  - MPI 系统在一个 MPI 程序运行时会自动创建两个通信器
  - 一个称为 MPI_COMM_WORLD，它包含 MPI 程序中所有进程
  - 另一个称为MPI_COMM_SELF，它指单个进程自己所构成的通信器。




# cuda 算法框架
1. cuda memory transfers
  cudamalloc, cudamemcpy 分配输入输出
2. Kernel Invocation
// Setup the execution configuration
       dim3 dimGrid(1, 1);
       dim3 dimBlock(Width, Width);
// Launch the device computation threads!
    MatrixMulKernel<<<dimGrid, dimBlock>>>(Md, Nd, Pd, Width);



3. cuda kernel编程，multithread， 用ID计算内存地址
thread 同步方式： shared memory, stomic operation, barrier
Thread threadIdx.x, threadIdx.y
