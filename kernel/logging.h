// by 贺云飞

#ifndef LOG_H
#define LOG_H


#include <stdarg.h>
#include "include/printf.h"
#include "include/string.h"
// 定义 logv 函数原型
void logv(const char *file, int line, const char *fmt, ...);
char* log_pre(char*);
void log_none(char *fmt, ...);

// 定义 print_log 宏
#define log_on 1
#if (log_on > 0)
#define print_log_full(fmt, ...) printf(log_pre(fmt), __FILE__, __LINE__, ##__VA_ARGS__)
#define print_log_add(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#define print_log_full(fmt, ...) log_none(fmt, ##__VA_ARGS__)
#define print_log_add(fmt, ...) log_none(fmt, ##__VA_ARGS__)
#endif






#endif // LOG_H
