# CS-F301 Assembly Language Programming
## Class Notes and Homework Repository :dizzy: :earth_americas:
  ```
  #include <iostream>
  int main() {
    std::cout << "Hello traveller, here's a towel for protection. Take care of yourself out there." << std::endl;
    return 0;
  }
  ```

### Class Repositories
  - [sowens23-GitHub](https://github.com/sowens23)
  - [GitHubPortal](https://github.com/sowens23/Newbie-Gains/blob/main/README.md)
  - [CS-F301 Class Homepage](https://docs.google.com/document/d/e/2PACX-1vTJJ1vxMtlhlFUd6GlIUGHZ9jElR95Tau21rUKf_HHHFdelLhEW6GRo9WlRi08CCHe5xkdo8Mpw11UM/pub)
  - [UAF CS Netrun](https://lawlor.cs.uaf.edu/netrun/run)

### Assembly/C# References
  - [x86 CheatSheet](https://docs.google.com/document/d/1hwABu-SL6u2cdhVkjOCUU6T0UyALujep1NfwYfQzWSo/edit)
  - [ARM CheatSheet](https://docs.google.com/document/d/1ozon1FnGTX7LZFA1JKBaXTrAZxlJNj0jMzrKgaUd_zA/edit#heading=h.8lf08sx6cr75)
  - [Assembly CheatSheet](https://docs.google.com/document/d/1hwABu-SL6u2cdhVkjOCUU6T0UyALujep1NfwYfQzWSo/edit)
  - [printf reference](https://cplusplus.com/reference/cstdio/printf/)
  - [OpCodes](https://www.sandile.org/x86/)


### Big Notes
  #### Compiling
    1. Write program.asm
    2. Compile program: nasm -f elf64 -o *.o *.asm
    3. Link program: ld *.o -o *
    4. Run program: ./*
  #### Scratch Registers
    - Common 64-bit (long) scratch registers: rcx, rdx, rsi, rdi, r8 - r11
    - Common 32-bit (int) scratch registers: ecx, edx, rsi, edi, r8d - r11d
    - Common 16-bit (short) scratch registers: cx, dx, si, di, r8w - r11w
    - Common 8-bit (char) scratch registers: ch/cl, dh/dl, sil, dil, r8b - r11b

# Class Notes and Assignments
  | Weekly Notes | Assignments | Other Notes |
  | --- | --- | --- |
  | [Week-1](#Week-1) | [HW00](https://github.com/sowens23/CS-F301/tree/main/homework) | |
  | [Week-2](#Week-2) | [HW01](https://github.com/sowens23/CS-F301/tree/main/homework) | |
  | [Week-3](#Week-3) | [HW02](https://github.com/sowens23/CS-F301/tree/main/homework) | |
  | [Week-4](#Week-4) | [HW03](https://github.com/sowens23/CS-F301/tree/main/homework) | |
  | [Week-5](#Week-5) | [HW04](https://github.com/sowens23/CS-F301/tree/main/homework) | |
  | [Week-6](#Week-6) | [HW05](https://github.com/sowens23/CS-F301/tree/main/homework) | |
  | [Week-7](#Week-7) | [HW06](https://github.com/sowens23/CS-F301/tree/main/homework) | |
  | [Week-8](#Week-8) | | |
  | [Week-9](#Week-9) | | |
  | [Week-10](#Week-10) | | Project Proposal Presentation |
  | [Week-11](#Week-11) | | |
  | [Week-12](#Week-12) | Final Project Rough Draft | |
  | [Week-13](#Week-13) | | Fall Break |
  | [Week-14](#Week-14) | | |
  | [Week-15](#Week-15) | Final Project PResentation | |

# Week-15 (Last week of instruction)
[Top](#TOP)
## 2023-12-06
  - Final next Friday
  - Class overview review
## 2023-12-04
  - Second round of final presentations
  - I gave my presentation on the final project
## 2023-12-04
  - First round of final presentations

# Week-14
[Top](#TOP)
## 2023-12-01
 ### [Quantum Computing](https://www.google.com/url?q=https://docs.google.com/document/d/1Mdi6yc8eiW4gREd5BBsyRWoq3Nje92TH0yWEm1GrFgg/edit&sa=D&source=editors&ust=1701471895515732&usg=AOvVaw3FXPM3m83KF0xDNIIHoutM)
## 2023-11-29
 ### [Future of computer architecture](https://www.google.com/url?q=https://docs.google.com/presentation/d/1T5YwKc_xq59OqxuzWLeGymNi7RvFpGPNgmZGg3KWZuc/edit%23slide%3Did.p&sa=D&source=editors&ust=1701471895516092&usg=AOvVaw2iFQnTNq0TCo652TjgKLTC)
## 2023-11-27
  ### [Computer Architecture Past, Present, and Future](https://www.google.com/url?q=https://docs.google.com/presentation/d/1T5YwKc_xq59OqxuzWLeGymNi7RvFpGPNgmZGg3KWZuc/edit%23slide%3Did.p&sa=D&source=editors&ust=1701126196035833&usg=AOvVaw1wZFaUoVhttZE6IWqsqMpb)

# Week-13
[Top](#TOP)
## 2023-11-24
  - Holiday Break
## 2023-11-22
  - Holiday Break
## 2023-11-20
  ### [mmap The Framebuffer](https://www.google.com/url?q=https://docs.google.com/document/d/17w260GjDLj7wBEbz8MtdLF5Hjlp8xWTglBnuvs_0ScI/edit&sa=D&source=editors&ust=1701126196036272&usg=AOvVaw1Rkeak7xQHqPIqClg4RM33)

# Week-12
[Top](#TOP)
## 2023-11-17
  ### [Identifying CUDA-friendly problems and Amdahl's Law](https://www.google.com/url?q=https://docs.google.com/document/d/1qshJn72ptVW35vJBWXOIIlwwoPkodeD4iMipKVSrM-s/edit&sa=D&source=editors&ust=1701126196036600&usg=AOvVaw24m1cKRABiknsDSmT0ztVp)
## 2023-11-15
  ### [Optimizing CUDA programs via __shared__](https://www.google.com/url?q=https://docs.google.com/document/d/1NdkzIYb77hdvfyOxivZZzjpN0VIR9GeerVGk2icUoks/edit%23heading%3Dh.m9svmspgeaiz&sa=D&source=editors&ust=1700077438405395&usg=AOvVaw0iB3O875uPJi__q1lyUiac)
  - Most of CUDA has 1:1 GPU to CPU architecture.
  - CUDA spawns threads in hardware at a very high rate, so it's affordable to make millions of threads.
  - CUDA or multicore CPU have multiple threads write to the same value in memory is a race condition with unpredictable results.
  - CUDA thread "warps" are very similar to SIMD lanes on a CPU.
  - There is no direct multicore analag to __shared __ memory, which is shared between all CUDA thread blocks
  - [NVIDIA: Using Shared Memory in CUDA C/C++](https://developer.nvidia.com/blog/using-shared-memory-cuda-cc/) and [NVIDIA: Deep tuning and loop unrolling for CUDA parallel reduction](http://developer.download.nvidia.com/compute/cuda/1.1-Beta/x86_website/projects/reduction/doc/reduction.pdf)
  - Everything you do in CUDA, needs to be on the GPU.
    - Global Variables are stored in the CPU
    - Global Variables are potentially access by ALL threads *BAD*
    - "__device__ char buff[1024];"  
  - CUDA has atomic arithmetic
    ```c
    #include <chrono>

    const int buff_len = 1024;
    __device_ char buff[buff_len];
    //__device__ char buff[1024]; // THIS LINE IS SUSCEPTIBLE TO BUFFER OVERFLOW
    __device__ int buff_idx=0;

    __device__ void gpu_putchar(char c);
    {
      unsigned int my_idx - atomicAdd(&buff_idx,1); // Returns my index
      // Line below has an issue with not being unsigned?
      //int my_idx - atomicAdd(&buff_idx,1); // Returns my index
      buff[my_idx] = c;
    }

    __global__ void runKernel(void)
    {
      // int y=threadIdx.x;
      gpu_putchar('!');
      // printf(" I am thread %d\n", y);
    }

    {
      int blocks-1, threadsPer=2;
    }
    printf("CPU Started!\n")
    {
      auto start = std::chrono::system_clock::now();
      runKernel<<<blocks,threadsPer>>>();
      cudaDevicesSynchronize(); // join CPU threads

      auto end = std::chrono::system_clock::now();

      auto time_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end)
      float ns_per_thread = time_ns/ float(blocks*threadsPer);
      std::cout<<"total "<<time_ns<<" and ns_per_thread " <<std...
    }

    //std::cout <<>>
    ```
  - 

## 2023-11-13
  ### [CUDA: Million-thread parallel programming](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/11_08_CUDA.html&sa=D&source=editors&ust=1700077438405597&usg=AOvVaw1_HNNllfeOMLsAg0K6JXW7) and [GPU](https://www.google.com/url?q=https://www.tomshardware.com/features/nvidia-ampere-architecture-deep-dive&sa=D&source=editors&ust=1700077438405735&usg=AOvVaw3v0GC8YEGABXQg6Jw0Yx7J) vs [CPU](https://www.google.com/url?q=https://www.anandtech.com/show/16214/amd-zen-3-ryzen-deep-dive-review-5950x-5900x-5800x-and-5700x-tested/2&sa=D&source=editors&ust=1700077438405882&usg=AOvVaw23DOszpcvBQvOnWBv9zj4D)
  - At the dentist, listened to lecture during a cleaning.
  - GPUs are arithmetics goliaths.


# Week-11
[Top](#TOP)
## 2023-11-10
  ### [Multicore Memory Consistency](https://www.google.com/url?q=https://docs.google.com/document/d/1x_H0UUHu3thPpoPhF2Wwi20Hmu7WYkY4kaJUlowc-dU/edit%23heading%3Dh.bdiu1o132j24&sa=D&source=editors&ust=1700077438406137&usg=AOvVaw2x-KxOEn6KMucy7jC_X33A)
  - There is a guarentees *sequential consistency* when using one thread. You write to a register.
  - We can dictate that multi threads run in sequential order, which comes at a very high cost. But we can use other locks to make sure that registers use new data, even if that core has an outdated version of a value in it's cache.
  - Basically mutex takes care of this. It's default security measure is sequential consistency
    ```c++
    #include <atomic>

    std::atomic<int> doneFlag {0};

    long foo() {
      doneFlag.store(1, std::memory_order_release);
      //int x = doneFlag.load();
      return 0;
    }
    ```
  - mfence is required in assembly for sequential consistency. So if you use the default mutex, it will call mfence and it will run quite a bit slower 
  - [ARM LDR and STXR instructions](https://cirosantilli.com/linux-kernel-module-cheat/arm-ldxr-and-stxr-instructions.html) and [std::atomic cpp reference](https://en.cppreference.com/w/cpp/atomic/atomic_ref#:~:text=The%20std%3A%3Aatomic_ref%20class%20template%20applies%20atomic%20operations%20to,object%20it%20references%20is%20considered%20an%20atomic%20object.)
  - 

## 2023-11-08
  ### [Multicore Cache Coherence and False Sharing](https://www.google.com/url?q=https://docs.google.com/document/d/e/2PACX-1vS6K2a-6GVXzd4ChnAn1t47kPParAgaVVMoc3MicIrcxRWM4-PrwqiJurgpVLigfFq3xlygu_iTNdgb/pub&sa=D&source=editors&ust=1700077438406361&usg=AOvVaw1xLXLU15SP5H8AB_TmK5bK)
  - Hardware level of caches of increasing size
    - Registers -> L1 -> L2 -> L3 -> L4 -> Main Memory: Solid State, Disk Drive
  - Managing cache coherence is hard to handle, because a read-only copy of something in L3 memory, can be stored in a core's L1, so what happens if L1 has a read-only copy of something in L3, and another core changes it in L3?
    - The general process is that writes go all the way out to RAM and caches are sensitive to writes.
    - Atmoic safeguarding actually prevents data from being written and read simultaneously but comes at a cost. When two threads are accessing data from the same 64 byte cache line of memory, they have to wait for eachother.
  - False sharing penalty is a side effect of Cache Coherence: write conflicts result in the cores stopping to figure out who has the most up-to-date data.
  - If we have 4 cores, and use 1 core to process 4mb of data, the 4mb can't fit on a local cache for that core, but if you use 4 cores, with 1mb of data each, now this data can fit in the core's respective cache, so that you can actually get better than 4x efficiency speed up, because the data is split and saved in a closer cache.

## 2023-11-06
  ### [Multicore atomics and lock internals](https://www.google.com/url?q=https://www.cs.uaf.edu/courses/cs441/notes/locks/&sa=D&source=editors&ust=1700077438406527&usg=AOvVaw2NDZ0KzZncRKOFLKmpmgct)
  - Timing operations
    ```
    #include <chrono>

    ```
  - Overhead of omp parallel is about 36,000 nanoseconds. So its definitely not better to use multithreading if your for loop or total operation is running faster than that.
  - When threads are handling a variable that is not thread independent. You can add a mutex lock.
    - OMP actually has a built in solution. You can add 
    - This excludes all other threads from accessing this. Means you can reduce the time processed significantly.
      ```c++
      #pragma omp critical // lock a mutex
        high_value_pixel += 1;
      ```
  - The solution really to handle critical variables that need to be handled by every thread, is to reduce the overhead to make it run.
  - Atomic variables are a good way to handle this. It allows threads to use an 'atomic' version of a critical variable. ```std::atomic (long) high_value_pixel=0```

  - In assembly we can provide locks
    ```assembly
    retry:
      mov rcx, 1 ; I want to lock
      lock xchg [mymutex], rdx ; swap it in (atomic even without lock prefix)
      cmp rcx, 0
      jne rety ; There was a zero in the lock, we just wrote a 1 so it's outs!
    ret

    section .data 
    mymutex:
      dq 0 ; 0 == unlocked; 1 == locked
    ```

# Week-10
[Top](#TOP)
## 2023-11-03
  ### [Multicore via OpenMP](https://www.google.com/url?q=https://www.cs.uaf.edu/courses/cs301/2014-fall/notes/threads/&sa=D&source=editors&ust=1700077438406820&usg=AOvVaw2VtxiuCzi4Aklv2ZOUQEj-)
  - We talked about how to use omp parallel threading.
  - When threads stop doing things simultaneously (serialization) you are defeating the purpose
    - Make sure your threads are running parallel
    ```c++
    #include <omp.h>

    long foo ()
    {
      std::string total="0.0";
      
    #pragma omp parallel for
      for (int i=0;i<1000;i++) {

        #pragma omp critical
          total += 3;
      }
      return total.size();
    }
    ```
  - Writing some graphics apps using threading and recursion
  - Map of squares in a complex planes
  - [Mandelbrot Set](https://en.wikipedia.org/wiki/Mandelbrot_set)
    ```c++
    /* 
    Grayscale Mandelbrot set renderer

    Dr. Orion Lawlor, lawlor@alaska.edu, 2023-11-03 (Public Domain)
    */

    // This is the size of the image we're drawing:
    int wid=1024, ht=1024;

    // This is the datatype for our grayscale image
    typedef unsigned char color;

    // Compute the color of the pixel at coordinates (x,y)
    color compute_color(int x,int y)
    {
      int iterations = 0;
      
      // The complex constant determines what part of the Mandelbrot set we're rendering
      float cr = 0.0 + (x-wid/2)*(4.0)/wid;
      float ci = 0.0 + (y-ht /2)*(4.0)/ht;
      
      // z is the complex number we're squaring
      float zr = cr, zi = ci;
      
      // Repeated squaring
      for (int i=0;i<100;i++)
      {
        // z = z^2 + c
        // (zr + i*zi) = (zr + i*zi)*(zr + i*zi)
        float nr = zr*zr - zi*zi + cr;
        float ni = 2.0*zr*zi + ci;
        zr=nr; zi=ni; 
        
        float radius = sqrt(zr*zr+zi*zi);
        if (radius>2.0) return 20*iterations;
        iterations++;
      }
      return 255;
    }


    long foo() 
    {
      // Make an image
      color img[wid*ht];
      
      // Render the pixels
      for (int y=0;y<ht;y++)
      for (int x=0;x<wid;x++)
      {
        img[y*wid + x] = compute_color(x,y);
      }
      
      // Write it as a PPM image (a simple uncompressed format supported by NetRun)
      std::ofstream imgfile("out.ppm");
      imgfile<<"P5\n"<<wid<<" "<<ht<<" 255\n";
      imgfile.write((char *)img,sizeof(img[0])*wid*ht);
      return 0;
    }
    ```

## 2023-11-01
  ### Begin [Multicore via threads](https://www.google.com/url?q=https://www.cs.uaf.edu/courses/cs301/2014-fall/notes/threads/&sa=D&source=editors&ust=1700077438406999&usg=AOvVaw04CfnGFY287DaAPHOtsBMt), SIMD reference: [Depth Camera Example](https://www.google.com/url?q=https://www.cs.uaf.edu/courses/cs301/2014-fall/notes/threads/&sa=D&source=editors&ust=1700077438406999&usg=AOvVaw04CfnGFY287DaAPHOtsBMt), [Bitwise if-then-else multiplexer trick](https://www.google.com/url?q=https://www.cs.uaf.edu/2020/fall/cs301/lecture/10_19_mux.html&sa=D&source=editors&ust=1700077438407324&usg=AOvVaw0JDxblweYlUna-1MbpJwR4)
  - Understanding how to utilize threads. There is a 'thread' header. But some functions can not be shared very well.
    - Like std::cout in the code below, it will print something different everytime, because the thread, and main are fighting for cout.
    - A thread's stack will be pretty far away from the main stack.
    - You want most IO operations to happen on the same thread for this reason.
    - It's totally okay to read global values from multiple threads,
      - but there is an issue when a thread is changing the variable in which other threads are dependent on.
    - Generally, never use global variables 
      ```c++
      #include <thread>

      std::vector<int> g;
      std::mutex lock_g;

      void otherFunction(void) {
        for (int i=0;i<10000;i++) {
          // RAII
          std::lock_guard<std::mutex> guard(lock_g);
          //lock_g.lock();
          g.push_back(i);
          lock_g.unlock();
        }
      }

      long foo (void) {
        std::thread myThread(otherFunction);
        for (int i=0;i<10000;i++) {
          lock_g.lock();
          g.push_back(i);
          lock_g.unlock();
        }
        myThread.join(); // Finish running thread before exit
        return 0;
      }
      ```
  - Threads are tricky to get to use together.
## 2023-10-30
  ### Final Project background presentations
  ### Stare in horror at bitwise manipulation code in STL [pow code](https://www.google.com/url?q=https://github.com/bminor/glibc/blob/master/sysdeps/ieee754/flt-32/e_powf.c&sa=D&source=editors&ust=1700077438407501&usg=AOvVaw2vz5SRrmQwF8mInzRHoXoO)
  - Bitwise Continued

# Week-9
[Top](#TOP)
## 2023-10-27
  ### Using [bitwise operators](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_27_bitwise.html&sa=D&source=editors&ust=1700077438407699&usg=AOvVaw1nF651s_DBr9wqTn2ClOtg) and SIMD
  - Let's scale an array?
    ```c++
    const int N=8192; // length of data
    float in_data[8192]={100.0,200.0,300.0,400.0};
    float out_data[8192];

    // out_data[i] = in_data[i] * scale for i in 0...N-1
    extern "C"
    void scale_array(const float *in_data, float *out_data, 
      long N, float scale);

    float foo() {
      scale_array(in_data, out_data, N, (float)(1.0 / sqrt(N)));
      /*
      for (int i=0;i<N;i++)
        out_data[i] = in_data[i] * (float)(1.0 / sqrt(N));
      */
      return out_data[0];
    }
    ```
  - Assmebly linked file to run program. This is used to increase speed/efficiency of program
    ```assembly
    ; // out_data[i] = in_data[i] * scale for i in 0...N-1
    ; extern "C"
    ; void scale_array(const float *in_data = *rdi, float *out_data in *rsi, 
    ;  long N in rdx, float scale in xmm0);
    .text
    global scale_array
    scale_array:
      mov rcx, 0 ; i=0
      start:
        mov rcx, 0 ; i=0
        start:
          vmovss xm22, [rdi + 4*rcx] ; load src[i]
          vmulss xmm2, xmm2, xmm0 ; scale
          vmovss [rsi + 4*rcx], xmm2 ; store dest[i]

        add rcx, 1 ; i++
        cmp rcx, rdx; i<N
        jl start
    ```
## 2023-10-25
  ### [Parallel Floats via SSE](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/11_03_sse.html&sa=D&source=editors&ust=1700077438407932&usg=AOvVaw3C5kXASskqkbC9DzFa7SjR)
  - Flipping some bits using a bitwise operator and a mask!
  ```c++
  long base = 0x32100123333333;
  long flip = 0x0x000111001100;
  return base ^ flips;
  ```
## 2023-10-23
  ### [Bits inside a float](https://www.google.com/url?q=https://www.cs.uaf.edu/2020/fall/cs301/lecture/10_07_floatbits.html&sa=D&source=editors&ust=1700077438408115&usg=AOvVaw3AaY5PN0QUS0J_ooPLyV1c) and [Special Float Values](https://www.google.com/url?q=https://www.cs.uaf.edu/2011/fall/cs301/lecture/11_09_weird_floats.html&sa=D&source=editors&ust=1700077438408239&usg=AOvVaw08blGhhlS2A-5GdBcVFgrM)

# Week-8
[Top](#TOP)
## 2023-10-20
  ### [Floats in x86 and arm64 assembly](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/10_02_float_asm.html&sa=D&source=editors&ust=1700077438408433&usg=AOvVaw2bfBJS6KcBAOin4xj2bdyj)
  - Talked about ARM, x86, and ??? float types, and type conversion!
## 2023-10-18
  ### Arm64 machine performance: branching
  - We talked about threading. How CPU's will look into future code in search of dependencies, this will help the CPU know which calculations can be done simultaniously. 
  - 
    ```
    mov x9, 1000
    adr x8, tableOfBranches
    ldr, x5, [x8] // branch if 1, don't if 0

    mov x0, 0 // return value
    start:
      ror x5, x5, 1 // shift bits of x5 in a cicle
      and x4, x5, 1 // extract low bt of x5
      cmp x4, 1
      b.eq didBranch

        add x0, x0, 123

      didBranch:

      sub x9, x9, 1
      cmp x9, 0
      b.gt start

    ret

    tableOfBranches:
      .8byte 0xdeadbeefcaffeef0 // 0x
    ```

## 2023-10-16
  ### [Beyond x86: Aarch64 64-bit ARM](https://www.google.com/url?q=https://docs.google.com/document/d/1ozon1FnGTX7LZFA1JKBaXTrAZxlJNj0jMzrKgaUd_zA/edit&sa=D&source=editors&ust=1700077438408646&usg=AOvVaw0jdRaLYvMELfowqD3Z05Kh)
  - Differences between x86 and Arm64! Arm64 is way more energy efficient, keeps all registers to 32/16 its, so there is a lot of energy saved by not needing to run strange protocols to make sure everything is aligned correctly.
    ```
    ; Add is a 3 parameter operation
    mov x3, 7
    add x0, x3, 10
    ; returns x0
    ret
    ```
  - Arm does not access memory, so you cannot mov x0, [bigConst]
    ```
    mov x0, 0x10000
    adr x6, bigConst // Loads value of bigConst into register
    ldr x5, [x6] // access memory
    add x0, x3, x5
    str x0, [x6] // write to memory (needs .data permission)
    ret

    .data
    bigConst:
      .8byte 0xc0dec0ffee
    ```
  - Arm64 Push and Popping
    - You can push, without popping in Arm64
    - 
    ```
    mov x3, 13
    // The following line, is store pair, because you have to align the stack by 16 bytes.
    // So we are preserving registers x3, and x30(lr), and moving the lr down by 16 bytes.
    stp x3, lr, [sp, -16]! // (push) via preecrement

    mov x0, 123
    bl print_long // (trashed x30(lr), your stack pointer)

    ldp x0, lr, [sp], 16 // post incremement (pop)
    ret
    ```

# Week-7
[Top](#TOP)
## 2023-10-13
  ### [Performance Introduction](https://www.google.com/url?q=https://docs.google.com/document/d/e/2PACX-1vTVh6MhZx4oW05FEVa16zMlRDufliOleTiv7q_9m48H52X8sLtGWomrblzr_KZXUTwzva2_KYu6HIIk/pub&sa=D&source=editors&ust=1700077438408881&usg=AOvVaw3_D0qHvfLwvLvZCOuUOMn-)
## 2023-10-11
## 2023-10-09
  - Spent time reviewing stuff that will be on the Midterm
  - Final project dates
    - Discover project topic by 2023-10-13
    - Project background presentation 2023-10-30
    - Project proof of concept 2023-11-15
    - Project presentation 2023-12-6
    - Final code and technical blog post 2023-12-15

# Week-6
[Top](#TOP)
## 2023-10-06
  ### [Machine Code](https://www.google.com/url?q=https://docs.google.com/document/d/1ueOGpRE06QL0FIjNHcFAdpsuWogR4hffwIxVNCm1dj8/edit&sa=D&source=editors&ust=1700077438409360&usg=AOvVaw1v4k7LgzjQYmUpFug1lZus)
  - x86 Op Codes can be used to simplify a chain of commands using machine code!
    ```
    db 0x57 ; push rdi
    db 0x58 ; pop rax
    db 0xc3 ; ret
    ```
  - We can send strings of these Op Codes to execute functions
    ```
    ;jmp rdi ; We will jump to the rdi, as if it was an address
    ; Here we are reading in an input into rdi
    jmp codeAsNumber

    codeAsCode:
      push rdi
      pop rax
      ret

    codeAsBytes:
      db 86 
      db 88 
      db 155

    codeAsString:
      db `\x57\x58\xc3`

    codeAsNumber:
      dq 0xc35857
    ```

    ```
    mov QWORD[codeArea], rdi

    extern mprotect
    mov rdi, codeArea ; pointer
    mov rsi, 4096 ; bit size
    mov rdx, 7 ; rdx is set to 7, which should be readable, writable, and executable
    call mprotect ; Pass pointer, size (4096), permissions

    mov rdi, 9
    call codeArea
    ret

    section .data align=4096 ; Puts this pointer in multiples of 4096, which is the size of a "page"?
    codeArea:
      dq 0
    ```
  - The Sapphire/Slammer Work: Was a chain of assembly language that spread over the entire world in 30 minutes. When the packet lands in an unpatched SQL Server, it starts to run over and over, and it send it out to all computer network resources. [The Spread of the Sapphire/Slammer Worm](https://www.caida.org/catalog/papers/2003_sapphire/)
  - Let's execute code on the stack
    ```
    mov rdx,0xc300000003b8 ; machine code
    push rdx ; put it on the stack
    mov BYTE[rsp+1],7 ; change constant
    mov rax,rsp ; save pointer to our code
    pop rcx ; clean stack
    jmp rax ; run our code!
    ```

## 2023-10-04
  ### [Malloc from scratch](https://www.google.com/url?q=https://docs.google.com/document/d/1rDj5ifRoU5viSHry5wRmSqId3FtWydMpxTh9lpl99vo/edit&sa=D&source=editors&ust=1700077438409546&usg=AOvVaw1CyYChVCbo_WElSYp4y3lk)
  - In C family languages, including C++, you can intercept memory allocation calls by overriding your own "malloc" and "free".  There are many ways to write this, such as this simple stack-inspired buffer, which is nice and simple, but only works for very short programs.
    - The basic idea is we'll preallocate a big memory buffer at startup with nothing in it.
    - This will be our stuff to do with as we please. 
    ```
    ; Save old stack
    push rbp
    mov rbp,rsp ; save old stack pointer into rbp

    ; Allocate buffer to store new stack (malloc?)
    mov rdi,QWORD[sizeOfNewStack] ; number of bytes to allocate
    extern malloc
    call malloc
    ; rax = pointer to start of the new stack

    ; Start using new stack
    add rax,QWORD[sizeOfNewStack]
    mov rsp,rax

    ; Test out new stack
    mov rdi,7
    extern print_long
    call print_long

    ; Find buffer so we can later call free
    mov rdi, rsp ; bring back stack pointer
    sub rdi,QWORD[sizeOfNewStack]; <- back to malloc top of buffer

    ; Restore old stack
    mov rsp,rbp ; back to old stack
    pop rbp 

    ; Call free to get rid of the stack
    extern free
    call free

    ret

    sizeOfNewStack: ; size in bytes of new stack (needs to be a multiple of 16)
    dq 8000000
    ```

## 2023-10-02
  ### [Making a stack from scratch](https://www.google.com/url?q=https://docs.google.com/document/d/14v-YepwnukAxU-Vs751epuhxTgRI0OLWg1opc46q0To/edit&sa=D&source=editors&ust=1700077438409833&usg=AOvVaw0W5P2SSo4xipgx0CbBCaUY)
  - AAA.asm
    ```
    global doAsmStuff

    doAsmStuff
      push rbp ; save main's rb to main's stack
      mov rbp, rsp ; save main's stack to main's rbp

      mov rsp, newStackEnd
      extern puts
      mov rdi, thingToPrint
      call puts

      mov rsp, rbp ; restore main's stack to main's rbp
      pop rbp ; restores main's rb to main's stack
      mov rax, QWORD[canary]
      ret

    thingToPrint:
      db `We live!`, 0

    section .data align=16;
    canary:
      dq 123
      dq 0 ; align the new stack!
    newStack:
      times 1024 dq 0 ; 8 Kb of space for new stack
    newStackEnd:
    ```
  - AAA_main
    ```
    extern "c" long doAsmStuff(void);
    
    long foo(void) {
      return doAsmStuff();
    }
    ```

  - Writing assembly from Windows (Update compile properties to create .obj)
    - Remember to allocate 32 bytes for the shadow space
    ```
    section .test
    global runAsmStuff
    runAsmStuff:
      ; function parameter in rcx (windows!)
      mov QWORD[rsp+8], 1234 ; Move stuff into the shadow space

      sub rsp, 32+8 ; Align the stack and allocate shadow space

      mov rcx, helloMessage
      mov rdx, 3
      mov r8. 4
      mov r9, 5
      push 6
      pop
      extern printf
      call printf

      add rsp, 32+8; restore the stack
      ret

      helloMessage:
        db `hello from asm printf: rdx = %llx r8 = %llx r9 = %llx stack0 = %llx \n`, 0
        ; When you call %x, printf will return a 32 bit integer, so we need to use
        ;   '%llx' instead of '%x' to get the full bit value of these integers
        

    ```
    ```
    #include <iostream>

    extern "C" long runAsmStuff(long num);

    int main () {
      printf("Hello from printf?\n");
      std::cout << "Hello!\n";
      long v = runAsmStuff(11);
    }
    ```

# Week-5
[Top](#TOP)
## 2023-09-29
  ### [Linking C/C++ and Assembly together](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_22_linker.html&sa=D&source=editors&ust=1700077438410128&usg=AOvVaw0c3N47bxpB_KEmDQDcOW5q)
  - Before a function in a c++ program, you can mark it as "extern C" so that it's interface can be read in C
  ```
  extern "C"
  long doCoolStuff(const char *stuff) {
  }
  ```
  - How a specific language is linked to it's executable.
    | Input | Output |Name | Programs |
    | --- | --- | --- | --- |
    | .cpp | .obj | C++ compiler | g++, clang++, cl |
    | .c | .obj | C compiler | gcc, clang, cl /TC |
    | .S | .obj | Assembler | nasm, gas, masm |
    | Several .obj files | One .exe | Linker | ld |

    (Although it's more common to call it via the compiler.)

  - Python and Java do not use a .obj files for linking

  - You can compile both C and Assembly code together!
    1. asmcool.S: nasm -f elf64 asmcool.S: g++ main.o asmcool.o: ./a.out
    ```
    global doCoolStuff
    doCoolStuff
    ; argument: rdi is char * string to print
    push rbp

    extern printf
    mov rsi, rdi
    mov rdi, formatString
    mov al, 0
    call printf

    pop rbp
    ret

    formatString:
      db `Cool stuff: %s\n`, 0
    ```

    ```
    #include <stdio.h>

    long doCoolStuff(const char *);

    int main() {
      printf("Started C successfully);
      return doCoolStuff;
    }
    ```

    - How to compile shit in Windows
      - You have to run the Native Tools Command Prompt for VS Code
      - 


## 2023-09-27
  ### [printf: output in C or Assembly](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_25_printf.html&sa=D&source=editors&ust=1700077438410421&usg=AOvVaw3HjYcdFqW_Jr3umJcGsZ3j)
  - We can 
    - %0 = Leading zero
    - %d = print decimal
    - In C: You are susceptible
    ```
    Input: attacker_RSI=%016X_rdx=%016X_rcx=%016X_r8=%016X_r9=%016X_stack0=%016X_
    
    const char *p
    std::string s;
    std::cin >> s;

    printf(s)
    ```

    ```
    const int buflen=100;
    char buf[buflen];
    const char *p="world"
    snprintf(buf, buflen, "Hello %s!", p)
    puts(buf);
    return 0;
    ```
  - Changing strings in C++
    ```
    std::string s;
    int x=15, y=15;
    std::cout<<std::hex
      <<std::setw(8)<<std::setfill('0')<<x<<","
      <<std::setw(8)<<y<<std::dec<<stD::setfill(' '
    ```
  - Changing strings in Assembly
    ```
    push rbp ; Align stack
    mov rax, 2
    add rax, 2

    extern printf
    mov rdi, formatString ; format for printf
    mov rsi, rax ;
    mov al, 0 ; number of vector registers you're passing
    call printf ;

    pop rbp; restore
    ret

    formatString:
      db `Answer = %d\n`,0
    ```
  

## 2023-09-25
  ### [Buffer overflow attack intro](https://www.google.com/url?q=https://docs.google.com/document/d/e/2PACX-1vRoWBKDqPjHiNT7MQ_7ELIpAlpcaDiqQTd6x1XGOlkLoRKkSB3mNLih5mRgVm_O0Si-T0-qxk1AwbyG/pub&sa=D&source=editors&ust=1700077438410761&usg=AOvVaw2O-doxhTdOSw7CkFeYnuSV)
  - Buffer overflow error, what happens when the name is longer than 8 characters.
    - Here we will overwrite the next bites after name. Which are the permissions!!!
    - This is also a pretty common way to create strings in C
    ```
    struct student {
      char name[8];
      long permissions; // bit 0: supervisor
    }

    long foo(void) {
      struct student s;
      s.permissions=0;
      std::cin>>s.name;
      std::cout<<"Hello " << s.name << "\n";
      return s.permissions;
    }
    ```
  - Let's continue testing this with permissions in private section
    - Even if we put the permissions in the private section, this is still at risk for buffer overflow error!
    - Even if we make everything, **everything** private (just the class member variables). We will still have the same issue.
    - The way to prevent this comes through a few steps
    ```
    class student {
    public:
      char name[8];
      long get_permissions() const {
        return permissions;
      }
    private:
      long permissions; // bit 0: supervisor
    }

    long foo(void) {
      struct student s;
      s.permissions=0;
      std::cin>>s.name;
      std::cout<<"Hello " << s.name << "\n";
      return s.permissions;
    }
    ```
  - The way to prevent this comes through a few steps
    - We need something that is designed to store a string 
    - Using the string interface will prevent this from happening, however. You must be warned that even if you take in a string, and then pack the *string[0] length into a character pointer, you will run into a buffer overflow error again if the length of the string is greater than the character pointer memory capacity.
  - Essentially, never trust user input. Consider all possible inputs.
  - zero_canary=0 ; Essentially, you can put this in as a class member variable, and before executing weird code like a self destruct, you can verify that zero_canary equals zero. If the canaray is not zero, the mine is not safe.
    ```
    const int max_dest_list_length=4;
    struct robot dest {
      long dest[max_dest_list_length];
      long zero_canary; // Got the be zero
      long self_destruct;
    };

    long foo(void) {
      robot_dest d;
      d.zero_canary=0xc0de;
      d.self_destruct=0;

      int i=0;
      while (cin>>d.dest[i]) i++;
      
      if (d.zero_canary!=0xc0de) {
        std::cout<<"Canary should be zero: buffer overflow?\n";
        exit(1);
      }
      return d.self_destruct;
    }
    ```
  - Stack smashing, total issue here.
    ```
    // If we input something greater than the memory size we will stack smash
    // ex. aaaAAAAbbbbBBBB -> *** stack smashing detected ***: terminated
    char name[8];
    std::cin>>name;
    return 0;
    ```
  - We can find the pointer
    ```
    char name[8];
    char *p = &name[0];
    std::cout << (int *)p; << "\n"; // This will show you the stack point
    ```
    - This will show you a random address every time you output this. This is because the stack pointer actually changes as programs run, it's partially randomized for security purposes.
  - Make damn sure when you use an array, you know the length, and prevent it from running off the end.
  - In Assembly!
    ```
    push rbp
    ; Allocate an array
    mov rdi, 4*8 ; 4 bytes
    extern malloc
    call malloc
    ; rax points to our 32 bytes
    mov rbp, rax ; rbp points to our array

    mov QWORD[rbp+3*8],3

    ; Print data
    extern larray_print
    mov rdi, rax
    mov rsi, 4
    

    call larray_print


    ; Free buffer
    mov rdi, rbp
    extern free
    call free

    pop rbp
    ret
    ```
  

# Week-4
[Top](#TOP)
## 2023-09-22
  ### [Function Pointers](https://www.google.com/url?q=https://www.cs.uaf.edu/courses/cs301/2014-fall/notes/methods/&sa=D&source=editors&ust=1700077438411035&usg=AOvVaw04FGTO-G_kZzZ9_H51Ki7t)
  - Let's look at a linked list in C
    - * Dereferenced a pointer
    - -> Dereferences a pointer
    - & This takes the pointer of an object
    - && R value references
  - 
    ```
    push rbp
    mov rdi, foo
    mov rsi, 2
    extern larray_print ; rdi: pointer to array of longs, rsi: number of longs
    call larray_print
    ret

    myArr:
      dq 5
      dq 3
    ```
    ```
    // Not completed code.
    struct linked_list {
      long id; // the data in this link: one student ID
      struct linked_list *next // the next node, or NULL if none
    }

    struct linked_list end={567,0}; // We would like to declare the end of the list first
    struct linked_list first={123,&end}; // First link on list

    struct linked_list *cur = &first; //
    while (cur != NULL) {
      std::cout <<cur->id
    }
    ```
  - Here we have an array of functions that takes in an input, that will designate what step of the process we should 
    ```
    ; rdi: step this customer is on
    mov rcx,QWORD[tableOfFunctions + 8*rdi]
    jmp rcx


    tableOfFunctions: ; array of pointers (8 bytes each) to code
      dq step0
      dq step1
      dq step2
      dq step3

    step0:
      mov rax,123
      ret

    step1:
      mov rdi,helloString
      extern puts
      call puts
      ret

    step2:
      mov rdi,errString
      extern puts
      call puts
      ret

    step3:
      jmp step2

    helloString:
      db 'hello!',0
    errString:
      db 'oh noes!!!',0

    ```


## 2023-09-20
  ### [Class and Struct in Memory](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_20_structs.html&sa=D&source=editors&ust=1700077438411289&usg=AOvVaw3dCOxUx_wOiyyISw3lLXc7)
  - In C++ You can return the decimal value of a char `3` which would return 52
    ```
    char c = `c`;
    return (int)(c-`0`); // This is not super effective, it'd be best to reference the standard library
    ```
  - Moving code around using pointers and the .section data
    ```
    mov rcx, 1 ; We'll use this an the array index
    mov rax , [myArray+8*rcx]
    ret ; This returns 123456

    myArray:
      dq 7        ; [0]
      dq 123456   ; [1] 
    ```
  - More of the same fun, but instead of simply reading, we can write.
    ```    
    mov rcx, 2 ; We'll use this an the array index
    mov rax , [myArray+8*rcx] ; read arr[i]
    mov QWORD[myArray+8*rcx], 3 ; write arr[i]
    ret ; This returns 123456

    section .data
    myArray:
      dq 7        ; [0]
      dq 123456   ; [1] 
      dq 0x1c0de  ; [2]
    ```
  - Demo of class and struct (C++ implemented 'classes')
    - Classes - Objects and other stuff in a class are deemed private unless otherwise stated
    - Struct - By default things are all public
    - These are totally and absolutely interchangable. You can swap "class" with "struct" as you want
  - Demo of string in Assembly
    ```
    ; Input: rdi points to a std::string
    ; We put in "Hello!"
    mov rax, rdi 
    mov rax, QWORD[rdi] ; First thing in std::string: pointer to chars;
    mov BYTE[rdi+1],`a` ; Replaces the second byte of the string from `e` to `a`
    extern puts
    call puts ; Input is modified RDI
    ret ; Output RDI: "Hallo!"
    ```
    ```
    ; Input: rdi points to a std::string
    ; We put in "Hello!"
    mov rax, QWORD[rdi] ; First thing in std::string: pointer to chars; 0x912312903801928
    mov rdx, QWORD[rdi+8] ; Second thing in std::string: number of chars; 6
    mov rax, QWORD[rdi+16] ; Third thing in std::string: string data (If less than 16 chars?); 0x216F6C6C6548
    ret
    ```
  - Let's play a choose your own adventure
    ```
    push rbp ; save main's rbp
    mov rbp,startState

    print:
      mov rdi,QWORD[rbp] ; load string for this state
      extern puts
      call puts
      
      mov rbp,QWORD[rbp+8] ; load next for this state
      cmp rbp,0
      je end
      jmp print

    end:
    pop rbp ; restore main's rbp
    ret

    startState:
      dq myString
      dq nextState
    myString:
      db `You are sitting in a classroom.`,0

    nextState:
      dq nextString
      dq endState
    nextString:
      db `The class is almost over!`,0

    endState:
      dq endString
      dq 0
    endString:
      db `The class is now over!`,0
    ```

## 2023-09-18
  ### [Memory Allocation](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_18_allocation.html&sa=D&source=editors&ust=1700077438411544&usg=AOvVaw3LF4Bpa1nMj4-V2M6457ix)
  - Hello World in Assembly
    ```
    push 3 ; Align stack
    mov rdi, 0x41 ; H
    mov rdi, 0x69 ; i
    mov rdi, 0x0  ; Terminating zero
    mov rdi, 0x69410 ; 'Hi' <-- This doesn't work because it's not a value IN memory, it is a memory address.

    push 0x69410 ; This will work, but it's ugly.

    sub rsp, 8 ; Allocating 8 bytes of stack space
    mov BYTE [rsp+0], `H` ; Load byte 0 of string ; This literally overwrites the bytes of MAIN's address
    mov BYTE [rsp+1], `i` ; Load byte 1 of string
    mov BYTE [rsp+2], 0 ; terminating zero

    mov rdi, rsp ; Points to string
    extern puts
    call puts

    add rsp, 8 ; release stack space afterwards
    ret
    ```
  - Modifying and Allocating Data String
    ```
    mov QWORD [myConst], 3
    mov rax, QWORD[myConst]
    ret

    section .data ; Switching storage mode to modifiable data
    myCOnst:
      dq 1024
    ```
  | Name | Use | Discussion |
  | --- | --- | --- |
  | section .data | r/w data | This data is initialized, but can be modified |
  | section .rodata | r/o data | This data can't be modified, which lets it be shared across copies of the program |
  | section .bss | r/w space | This is automatically initialized to zero, meaning the contents don't need to be stored explicitly |
  | section .text | r/o code | This is the program's executable machine code (it's binary data, not plain text!) |
  - Allocating data
    - C++ allocation and deallocation
      ```
      int *arr=new int[3];
      arr[0]=5;
      delete[] arr; // Without this you would have a memory leak
      return arr[0];
      ```
    - Plain C allocation and deallocation
      ```
      int n = 3;
      // For malloc, you must designate a specific amount of bits. If you specifically add 16, it will work for a 16 bit int
      // But if you need to then use it for a 32 or 64-bit int, you'll be in trouble. So here we can dynamically assign it enough bits based on the sizeof function
      int *arr = malloc(n*sizeof(int)); // You designate a specific amount of bits to an array pointer
      arr[0]=5;
      free(arr);
      return arr[0];
      ```
    - Assembly allocation and deallocation
      ```
      mov rdi, 8 ; Allocate space to t
      extern malloc
      call malloc
      ; rax = pointer to our allocated space
      mov rdi, rax ; points to string
      mov BYTE [rdi+0], `H` ; Load byte 0 of string
      mov BYTE [rdi+1], `i` ; Load byte 1 of string
      mov BYTE [rdi+2], 0 ; Load terminating zero to byte 2 of string

      extern puts
      push rdi ; Save pointer to stack
      call puts
      pop rdi ; restore pointer

      ; BEWARE: release heap space afterwards
      extern free
      call free ; takes address as rdi, and releases 
      ret
      ```
    - The difference between the HEAP and the STACK are simply the methods of allocation.

# Week-3
[Top](#TOP)
## 2023-09-15 
  ### [Pointer arithmetic: strings and arrays](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_15_strings_arrays.html&sa=D&source=editors&ust=1700077438411869&usg=AOvVaw2cHQiKXs5p4cRDx19gInp5)
  - foo is the 
  - 'dq' is Define Quadword, this 
    - dq 10 - is new line
    - dq 32 - is a space
    - 0x41 = 4x16 + 1 = 65
    - 0x4142 = BA = Little 'Endian' We are looking at the little end first. the lowest byte is 42 thus B, then 41 for A
  - in puts(const char *s); We can insert a whole string into a char, by using terminal characters between letters. Using a zero to terminate the string
    - dq 0x4142; this keeps reading forever, past this value, till it hits zero and spits out BABABA~? then gibberish
    - dq 0x41004241; this will print A, then B, then stop. Reading right, to left.
  - call puts (This will take rdi as it's input and translate this into a string character till it hits 0)
  - It will always look for a full 8 bytes, so if you only give it 4 bytes of information, it will fill in the remaining 4bytes with 0's which will effectively terminate the string output
    ```
    extern puts
    mov rdi, thingInMemory
    push
    call puts
    ret

    thingInMemory:
      dq 'babab', 0 ; Zero is needed here to terminate the string.
      dq 'Hello world!', 10, 'New Line Inserted', 0 ;
      ; In NetRun you can use 'backtick (`)' instead of quotations to use (\n)
        ; dq `Hellow World!\n` ; Like this
      ; dq 0x4142004241424142
    ```
  - String arithmetic in C++
    ```
    char string[] = "Hello horld";
    char *p = string;
    // p = p + 6; // Move pointer down
    // *p = 'w'; // Assign to memory

    // *(p+6) = 'W'; // I guess


    // p[6] = 'W'; // Array access
    // 6[p] = 'W'; // This works. Dont do it.
    puts(string);
    return 0;
    ```
  - String Arithmetic in Assembly
    ```
    ; This code shows how we can arrange pointer addresses
    mov r10, thingy
    add r10, 8
    mov rax, [r10]
    ret // Returns 7

    thingy:
      dq 5
      dq 7
      dq 9
    ```
    ```
    mov rdi, 1
    mov rax, [thingy+16*rdi] // In Assembly you can only multiply pointer addresses by powers of 2.
    ret

    thingy:
      dq 5
      dq 7
      dq 9
      dq 15
    ```

## 2023-09-13
  ### [Pointers and Addresses](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_13_memory.html&sa=D&source=editors&ust=1700077438412110&usg=AOvVaw1SzA88Yb7IRzw5CNUQYBMu)
  - rsp is the stack register, this aligns the push and pops
    - You can 'add rsp, 8' which will add 8 bytes which is a 64 bit reference
      - Essentially this is a pop, it 'removes' something off of the stack
      - Push goes towards null pointer 0
        - So push is technically a subtract of the stack register
      - pop goes away from null pointer
        - and pop is an addition to the stack register
  - We can keep the stack 'clean' by noting the reference point
    - rbp is a reserved register for you to save rsp on.
      ```
      push rbp ; save main's rbp
      mov rbp, rsp ; save rsp
      ; .... Bunch of crazy pops functions pushes
      mov rsp, rp ; chop off my stack
      pop rbp ; restore mains' rbp
      ret
      ```
  - We can read the top of the stack in this way [rsp]
    - The '[ ]' is used to de-reference a pointer address
      ```
      mov rax, [rsp] ; This will de-reference the rsp pointer to return it's register value
      ```
  - We can write to the top of the stack!
    ```
    push 5
    mov rdx, rsp ; rdx points to the top of the stack
    mov rcx, 8 
    mov [rdx], rcx ; Re-writes pushed value 5 at the top of the stack, to 8
    pop rax
    ret
    ``` 
  - If we push an integer value, we must define the register size (long, int, etc.)
    ```
    mov QWORD[rdx], 3 ;
    ```
    | C Datatype | Bits | Bytes | Register | *ptr |
    | ----- | ----- | ----- | ----- | ----- | 
    | char | 8 | 1 | al | BYTE |
    | short | 16 | 2 | ax | WORD |
    | int | 32 | 4 | eax | DWORD |
    | long | 64 | 8 | rax | QWORD |
    | float | 32 | 4 | xmm0 | DWORD |
    | double | 64 | 8 | xmm0 | QWORD |
  - "Transporter Malfunction" "Splinched"
    - If you are moving a pointer, you must move it by 8 bytes. NOT BY BITS
  - Referencing functions
    ```
    mov rcx, [x] ; You have just stored the bit value of the block of code 'x:'
    ret

    x:
      mov rsi, 5
      add rsi, 1
    
    ```
  - You can call a function 2 bytes after the memory address start of a function, you can essentially 'binary patch' yourself to skip parts of code that breaks things
    - This is a brittle fix, but it can get your code running this week.

## 2023-09-11
  ### [Introduction to Pointers](https://www.google.com/url?q=https://docs.google.com/presentation/d/e/2PACX-1vTNsqdZg7doTgfZ9jYANuD8RAivl6lVAEZ3T5mjN5o54z-jq3AHrQBNIQ1SYJg-6qV1wmJGMdswTt3v/pub?start%3Dfalse%26loop%3Dfalse%26delayms%3D60000%26slide%3Did.p&sa=D&source=editors&ust=1700077438412459&usg=AOvVaw0OMXuCZQdCOp8kWtcez17l)
  ### Recap and Why 'Assmebly'. Intro to Pointers
  - 8 bit signed int can reach about  billion
    - We can caluclate factorials up to 12, in an int.
    - Calculating in Hexidecimal (base 16) When you multiply by factors of 16, it shifts the hexidecimal value left, and puts a 0 on the end
      - 0xFACE * 16 = 0xFACE0
      - 0xFACE * 256 = 0xFACE00
    - In Assembly, you can add "L"or"l" (Capital preferred) onto any number, decimal, hexidecimal to upgrade an Int to LOng
    - Proper Factorial Calculator
      ```
      mov rsi, 
        return 0xFACEL * 256L * Scale
      ```
    - When we are dealing with overflow in assembly
      - If we are working with very large numbers, we might be best calculating with double variables.
    - rcx is built to count over loops
    - rdi is input #1
    - All 'ret's return to the last call
      - This is how your final ret of your program knows where to go afterwards
      - Call and return are handy, because if you have multiple potential jumps for a function
    - Push, jmp, and call are all the same
    - Pop and ret are also the same.
      ```
      ; Input: rdi, how far to multiply
      mov rdx,  ; sum of factorials 
      mov rsi, 1 ; n loop
      jmp checkOuter
      startOuter:
        ; Calculate factorial
        move rax, 1 ; product = 1
        mov rcx, 2 ; i=2
        jmp checkLoop
        startLoop: ; loop over numbers up to rdi
          imul rax, rcx ; !! Never use "mul", always use "imul"
          add rcx, 1 ; i++
          checkLoop:
          cmp rcx, rdi ; i<n
          jl startLoop
        add rdx, rax; add this factorial to the sum
        add rsi, 1
        checkOuter:  
        cmp rsi, rdi
        jle startOuter
      mov rax, rdx ; return sum ; return product
      ret ; return product because we are adding using rax
      ```


# Week-2
[Top](#TOP)
## 2023-09-08
  ### [Bits in signed/unsigned](https://www.google.com/url?q=https://docs.google.com/presentation/d/1ZotiJZG89kmycSsxp2yKT5baOOgqJipwxJZYbMbn2I0/&sa=D&source=editors&ust=1700077438412691&usg=AOvVaw1At31Zh_G2TzA1QC9U4lMD), [Counting in Binary](https://www.google.com/url?q=https://www.cs.uaf.edu/2012/fall/cs301/lecture/08_31_bits.html&sa=D&source=editors&ust=1700077438412811&usg=AOvVaw3MkyFRPAl61spnAIcH2N-f), and [Assembly datatype and register sizes](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_06_functions.html&sa=D&source=editors&ust=1700077438413210&usg=AOvVaw2UUQrvMqGOOn_Tpr9R2MDq).
  - Running over Binary, and Hexidecimal 
    - b10 10 in b2 is 1010 in b16 is a
  - The last bit in binary (128 bit) equals an negative sign.
    - This means that the 128 bit is actually -128. This means the domain of binary for unsigned/signed is -128 to 127
    - Overflow on 0111111 will become 1000000 which is equal to -128
  - Shifting
    - Unsinged right shift will leave a 0
    - Signed right shift will leave a 1
      ```
      char x=0;
      x = x-1;
      ret x 
      ; x will return as 255 because it's unsigned.
      ; x will return as -1 if it's signed.
      ```
  - Signed vs Unsigned operators
    - Only '<<', *, %, and 'cout' behave differently depending on the signed status of the variable
  - Evolution of scratch register
    - rax = 64b / eax = 32b / ax = 16b / ah & al = 8b
     - 0xFFFFFFFFFFFFFF80
      - 0x means Hexidecimal
      - Every one character in Hexidecimal represents 4 binary bits. F=15
      - 80 at the end means 'Signed'
        ```
        ; Overflow in unsigned register 
        mov rax,0
        add al,-128
        ;add al, 128 ; Max value for 8 bit integer
        ;add al, 128 ; This will return 0, because al can only store 8 bits.
        ;jo badStuff ; Jump if Overflow flag (jc) is 
        movsx rax,cl ; This will sign extend an 8 bit to a 

        ret

        :badStuff
          mov rax, 999
          ret
        ```

## 2023-09-06
  ### [Push/Pop the stack](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_08_stack.html&sa=D&source=editors&ust=1700077438413085&usg=AOvVaw2ZNx7k5xUPjhEnBYF_TwrT) and [Assembly Functions](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/09_06_functions.html&sa=D&source=editors&ust=1700077438413210&usg=AOvVaw2UUQrvMqGOOn_Tpr9R2MDq)
  - A brittle fix is when you 'fix' a loop to catch conditions that you cannot calculate.
    - ie. On inputs [0,10], return +2 if integer is even.
    - It's only appropriate to check if values are even then add two and return
    - Do not say if (x=0) else x=2, else x=4. --> BAD
  - There is a "unsigned int" error when you check a for loop int to a vector.size()
    - To avoid this issue you can use (int): for (int i=1;i<(int)nums.size();i++) {}
  - rbx is main's general register, which means you can only use it, if you push rbx, then pop rbx at the end of your function
    ```
    ;Basic return int 5
    mov eax, 5
    ret
    ```
    ```
    ; Call Function
    extern print_int ; This works as an include
    call print_int ; This calls the function
    ret ;
    ```
  - The stack is a little block of memory used to access memory
    - You are supposed to clean the stack before you return. Treating this similar to how you would allocate memory and use pointers in C++
    - If you want to save something, you must push it to the stack. When calling other functions, they may wipe your scratch registers.
    - Call and Ret are implicitely popping and pushing. This means that you must ALWAYS pop an equal amount to the times you push. Absolutely necessary.
      - This is how programs know where to go when they finish running. RET and CALL are the register values of where they go after they are done running.
      - In lieu of 'ret' you could do 'pop rdx; jmp rdx'
    - You must pop in the opposite order of your pushes, to return the same values to the registers.
  - You must push something first, before you call a function this "aligns the stack"
  - Stack overflow is when you have pushed to many values for the stack to hold.
    - Write a for loop
      - Three rules when creating a for loop
        - You must initialize a counter
        - You must compare two values
        - You must incriment values.
      ```
        push 7 ; align the stack

        mov rcx, 0 ; i=0
        start:
          mov rdi, rcx
          push rcx ; this saves your rcx value before the function
          extern print_int
          call print_int
          pop rcx ; this pulls the last pushed value on the stack to rcx

          add rcx, 1 ; i++
          cmp rcx, 10 ; i<10
          jl start ; iterate based on compare
        ret
      ```
      ```
      ; The Stack
      push 7 ; This will push the number 7 onto the top of the stack
      mov rcx,10 ; rcx, rax will be wiped because it's used by print_int
      ;pop rax ; This will remove the number 7 from the stack

      ; Using a function print
      mov rdi, 123
      extern print_int ; This is a function, it takes a parameter rdi
      call print_int ; This will print 123

      pop rax
      mov rax, rcx
      ret
      ```

# Week 1
[Top](#TOP)
## 2023-08-30
  ### [Assembly Language Basics: Registers/Instructions](https://www.google.com/url?q=https://www.cs.uaf.edu/2017/fall/cs301/lecture/08_30_assembly.html&sa=D&source=editors&ust=1700077438413621&usg=AOvVaw3gxycM55KzSuLbq_OmEpBm)
  ```
  ; Input: rdi is our first argument
  mov rcx, rdi    ; move arg to temp
  sub rcx, 4      ; 
  ```
  ```
  ; An example of a loop
  mov rcx, 3
  jmp theGood
    mov rdi, 5
    add rdx, 10
    mov rdi, rdx
  theGood:
  mov rax, 4
  ```
  ```
  ; rax is the register that 'ret' will return
  mov rcx, 2; moves value 2 to register rcx
  mov rax, rcx; moves value of rcx to rax
  ;mul rcx; mul will always multiply by rax if left with no parameter, then it will put the result in register rax.
  mul rax, 2; Multiplies rax (2) by 2
  imul; 
  
  ret; Always need an ret at the end, rax only ever is returned, there is no parameter to ret

  ```

## 2023-08-28
  ### [The Language Hierarchy ("Why Assembly")](https://www.google.com/url?q=https://docs.google.com/document/d/e/2PACX-1vQ6_GDJ6uEDzm3NGAH9Dd41h7MAbwHc0FSIXdHZ5xCW7fbeThK58QzeuH8tpsJAzDCTMvL0s5Wje5gg/pub&sa=D&source=editors&ust=1700077438413879&usg=AOvVaw1oashJrXyxRVq2WH8itVQk)
  - Don't be an int x32 loser, use longs
  - couple checks and inputs in the same line IE
    - ret - Returns a value
  - RDI is your input variable
