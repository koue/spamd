#	$OpenBSD: Makefile,v 1.11 2015/02/07 10:45:19 henning Exp $

LOCALBASE?=	/usr/local
BINDIR?=	${LOCALBASE}/libexec
PROG=	spamd
SRCS=	spamd.c sdl.c gdcopy.c grey.c sync.c syslog_r.c
MAN=	spamd.8

CFLAGS+= -Werror -Wstrict-prototypes

.ifdef SSLDIR
CFLAGS+=	-I${SSLDIR}/include
LDADD+=		${SSLDIR}/tls/.libs/libtls.a \
		${SSLDIR}/ssl/.libs/libssl.a \
		${SSLDIR}/crypto/.libs/libcrypto.a
.else
CFLAGS+=	-I${LOCALBASE}/include
LDADD+=		/usr/local/lib/libtls.a \
		/usr/local/lib/libssl.a \
		/usr/local/lib/libcrypto.a
.endif
LDADD+=	-lmd
DPADD+=	${LIBTLS} ${LIBSSL} ${LIBCRYPTO}


.include <bsd.prog.mk>
