#	$OpenBSD: Makefile,v 1.4 2005/05/24 22:23:04 millert Exp $

PROG=	spamd-setup
SRCS=	spamd-setup.c
MAN=	spamd-setup.8

LDADD=	-lz
DPADD=	${LIBZ}

CFLAGS+= -Werror -Wstrict-prototypes
CFLAGS+= -D__dead=''

.include <bsd.prog.mk>
