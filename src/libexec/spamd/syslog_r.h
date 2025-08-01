// libressl/portable/include/compat/syslog.h

#include <syslog.h>
#include <stdarg.h>

struct syslog_data {
	int log_stat;
	const char *log_tag;
	int log_fac;
	int log_mask;
};

#define SYSLOG_DATA_INIT {0, (const char *)0, LOG_USER, 0xff}

void syslog_r(int, struct syslog_data *, const char *, ...);
void vsyslog_r(int, struct syslog_data *, const char *, va_list);
