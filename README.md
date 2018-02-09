# liblzma.a
Static library of lzma


compiler:

  arm-none-linux-gnueabi-gcc
  
  想用x86平台的话，修改C/Util/Lzma/makefile中的CC 和 AR为对应的编译器即可
  
make:
  
  cd C/Util/Lzma && make clean && make
  
库文件及头文件:
  
  C/Util/Lzma/liblzma.a & C/Util/Lzma/lzma.h
  
  
静态库使用：略
