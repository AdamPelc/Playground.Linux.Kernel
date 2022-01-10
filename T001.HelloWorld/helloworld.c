#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Adam Pelc");
MODULE_DESCRIPTION("A hello world linux kernel module");

int init_module(void) 
{
    printk(KERN_DEBUG "Hello world! EsmundoSU.\n");
    return 0;
}

void cleanup_module(void) 
{
    printk(KERN_DEBUG "Goodbye world! EsmundoSU.\n");
}