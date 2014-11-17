#ifndef OS_INTRO_H
#define OS_INTRO_H

typedef void (*on_get_processes_t)(CPUState *, OsiProcs **);
typedef void (*on_get_current_process_t)(CPUState *, OsiProc **);
typedef void (*on_get_modules_t)(CPUState *, OsiModules **);
typedef void (*on_get_libraries_t)(CPUState *, OsiProc *, OsiModules**);

#endif 