# liblzma.a
Static library of lzma

platform：

  arm linux or X86 linux
  
  default:arm linux
  
  x86: Need to modify makefile CXX & AR
  
compiler:

  arm-none-linux-gnueabi-gcc or gcc
  
make:
  
  cd C/Util/Lzma && make clean && make
  
useful files:
  
  C/Util/Lzma/liblzma.a & C/Util/Lzma/lzma.h
