#	@(#)Makefile.inc	8.1 (Berkeley) 6/4/93
# $FreeBSD: src/lib/libc/i386/gen/Makefile.inc,v 1.23.10.1.6.1 2010/12/21 17:09:25 kensmith Exp $

SRCS+=	_ctx_start.S _setjmp.S _set_tp.c fabs.S \
	flt_rounds.c infinity.c ldexp.c makecontext.c modf.S \
	rfork_thread.S setjmp.S signalcontext.c sigsetjmp.S
