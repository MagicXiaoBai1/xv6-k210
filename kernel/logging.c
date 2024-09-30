// by 贺云飞
# include "logging.h"
 

_Bool logging_on = 1;
 
void logv(const char *file, int line, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    if (logging_on){
        printf("%s:%d: ", file, line);
    }

    va_end(ap);
}
char* log_pre(char* input_str){
    static char ans[100] = "%s:%d: ";
    int p_input_str = 0;
    int i;

    for (i = 7;; i++){
        ans[i] = input_str[p_input_str];
        ++p_input_str;
        if (p_input_str >= strlen(input_str)){
            break;
        }
    }

    return ans;
}


void log_none(char *fmt, ...){
    return ;
}