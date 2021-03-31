#include	<linux/init.h>
#include	<linux/module.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jagen");
MODULE_DESCRIPTION("first_time");
MODULE_VERSION("1.0");

static	int	__init	first_time_init(void)
{
	printk(KERN_ALERT"Hello, world!\n");
	return 0;
}

static	void	__exit	first_time_exit(void)
{
	printk(KERN_ALERT"Goodbye my lover!\n");
}

module_init(first_time_init);
module_exit(first_time_exit);
