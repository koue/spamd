// libressl/portable/crypto/compat/syslog_r.c

#include "syslog_r.h"

void
syslog_r(int pri, struct syslog_data *data, const char *fmt, ...)
{
    va_list ap;

    va_start(ap, fmt);
    vsyslog_r(pri, data, fmt, ap);
    va_end(ap);
}

void
vsyslog_r(int pri, struct syslog_data *data, const char *fmt, va_list ap)
{
	vsyslog(pri, fmt, ap);
}
