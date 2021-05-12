#include <linux/kernel.h>
#include <linux/module.h>

MODULE_AUTHOR("Haiova Alyona, Khilchuk Olena");  // Подарунок
MODULE_DESCRIPTION("Hello world kernel module"); // Опис фунціоналу
MODULE_LICENSE("MIT"); // ліцензія 

/*
У модулі задані 2 функції, одна з яких 
завантажується при завантаженні модуля, а інша - при його видаленні.
 (hello_init)
 (hello_exit). 
module_init і module_exit використовують специальні макроси 
ядра для задання цих ролей.
*/

static int __init hw_init(void)
{
	printk(KERN_ERR "Hello , Kernel!\n");
	return 0;
}

static void __exit hw_exit(void)
{
	printk(KERN_ERR "Hasta la vista, Kernel!\n");
}
module_init(hw_init);
module_exit(hw_exit);