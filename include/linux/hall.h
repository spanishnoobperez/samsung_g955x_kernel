#ifndef _HALL_H
#define _HALL_H

//extern struct class *sec_class;
struct hall_platform_data {
	unsigned int rep:1;		/* enable input subsystem auto repeat */
	int gpio_flip_cover;
	int gpio_certify_cover;
};
extern struct device *sec_key;

#if defined(CONFIG_FOLDER_HALL)
extern struct class *sec_class;

void hall_ic_register_notify(struct notifier_block *nb);
void hall_ic_unregister_notify(struct notifier_block *nb);
#endif

#endif /* _HALL_H */
