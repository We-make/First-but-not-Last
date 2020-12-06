Makefile.txt:

#程序名字
NAME != task
SRCS != task.c
include $(AM_HOME)/Makefile.app

#make run编译到某平台运行
make ARCH=x86_64-qemu
make run ARCH=x86_64-qemu

# objdump -d task.out |less