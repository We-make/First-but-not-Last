#include<stdio.h>

#define _BLOCKEDABLE 1
#define MAXTASKNAME 32

/* 多个任务时占用空间的大小 */
struct task_struct {
    uint64_t taskId;
    struct task_struct *nprev;
    struct task_struct *next;
    char taskName[MAXTASKNAME];
    uint32_t state;
    uint64_t pid;
};

void showtask(struct tast_struct *task, uint64_t taskId)
{
    printf("%d: task state = %d, pid = %d.", taskId, task->state, task->pid);
}

int main(void)
{
    
    return 0;
}