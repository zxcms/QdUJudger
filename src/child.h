#ifndef JUDGER_CHILD_H
#define JUDGER_CHILD_H

#include <string.h>
#include "runner.h"

#define CHILD_ERROR_EXIT(error_code)\
    {\
        LOG_FATAL(log_fp, "Error: System errno: %s; Internal errno: "#error_code, strerror(errno)); \
        raise(SIGUSR1);  \
        exit(EXIT_FAILURE); \
    }


void child_process(FILE *log_fp, struct config *_config);

#endif //JUDGER_CHILD_H
