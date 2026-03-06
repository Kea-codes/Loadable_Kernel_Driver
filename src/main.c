#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("KEAMOGETSE");
MODULE_DESCRIPTION("LOADABLE KERNEL MODULE");

//LOADED IN THE KERNEL
static int __init hello_init(void){

    printk("HELLO KERNEL BUDDY\n");
    return 0;
}

//REMOVED FORM THE KERNEL
static void __exit hello_exit(void){
    printk("BYE KERNEL");
}

//SPECIFYING WHICH FUNCTIONS TO BE USED TO INITTIALIZE OR EXIT
module_init(hello_init);
module_exit(hello_exit);