
#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

tid_t process_execute (const char *file_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (void);

	void parse_args(char *buffer, char **args,
			size_t args_size, size_t *nargs);

#endif /* userprog/process.h */
