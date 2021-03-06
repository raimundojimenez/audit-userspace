/* errtab.h --
 * Copyright 2007,2016 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Steve Grubb <sgrubb@redhat.com>
 *      Locations:	/usr/include/asm-generic/errno-base.h
 *      		 /usr/include/asm-generic/errno.h
 */

_S(EPERM,		"EPERM"			) // start of errno-base.h
_S(ENOENT,		"ENOENT"		)
_S(ESRCH,		"ESRCH"			)
_S(EINTR,		"EINTR"			)
_S(EIO,			"EIO"			)
_S(ENXIO,		"ENXIO"			)
_S(E2BIG,		"E2BIG"			)
_S(ENOEXEC,		"ENOEXEC"		)
_S(EBADF,		"EBADF"			)
_S(ECHILD,		"ECHILD"		)
_S(EAGAIN,		"EAGAIN"		)
_S(ENOMEM,		"ENOMEM"		)
_S(EACCES,		"EACCES"		)
_S(EFAULT,		"EFAULT"		)
_S(ENOTBLK,		"ENOTBLK"		)
_S(EBUSY,		"EBUSY"			)
_S(EEXIST,		"EEXIST"		)
_S(EXDEV,		"EXDEV"			)
_S(ENODEV,		"ENODEV"		)
_S(ENOTDIR,		"ENOTDIR"		)
_S(EISDIR,		"EISDIR"		)
_S(EINVAL,		"EINVAL"		)
_S(ENFILE,		"ENFILE"		)
_S(EMFILE,		"EMFILE"		)
_S(ENOTTY,		"ENOTTY"		)
_S(ETXTBSY,		"ETXTBSY"		)
_S(EFBIG,		"EFBIG"			)
_S(ENOSPC,		"ENOSPC"		)
_S(ESPIPE,		"ESPIPE"		)
_S(EROFS,		"EROFS"			)
_S(EMLINK,		"EMLINK"		)
_S(EPIPE,		"EPIPE"			)
_S(EDOM,		"EDOM"			)
_S(ERANGE,		"ERANGE"		)
_S(EDEADLK,		"EDEADLK"		) // start asm-generic/errno.h
_S(ENAMETOOLONG,	"ENAMETOOLONG"		)
_S(ENOLCK,		"ENOLCK"		)
_S(ENOSYS,		"ENOSYS"		)
_S(ENOTEMPTY,		"ENOTEMPTY"		)
_S(ELOOP,		"ELOOP"			)
_S(EWOULDBLOCK,		"EWOULDBLOCK"		)
_S(ENOMSG,		"ENOMSG"		)
_S(EIDRM,		"EIDRM"			)
_S(ECHRNG,		"ECHRNG"		)
_S(EL2NSYNC,		"EL2NSYNC"		)
_S(EL3HLT,		"EL3HLT"		)
_S(EL3RST,		"EL3RST"		)
_S(ELNRNG,		"ELNRNG"		)
_S(EUNATCH,		"EUNATCH"		)
_S(ENOCSI,		"ENOCSI"		)
_S(EL2HLT,		"EL2HLT"		)
_S(EBADE,		"EBADE"			)
_S(EBADR,		"EBADR"			)
_S(EXFULL,		"EXFULL"		)
_S(ENOANO,		"ENOANO"		)
_S(EBADRQC,		"EBADRQC"		)
_S(EBADSLT,		"EBADSLT"		)
_S(EDEADLOCK,		"EDEADLOCK"		)
_S(EBFONT,		"EBFONT"		)
_S(ENOSTR,		"ENOSTR"		)
_S(ENODATA,		"ENODATA"		)
_S(ETIME,		"ETIME"			)
_S(ENOSR,		"ENOSR"			)
_S(ENONET,		"ENONET"		)
_S(ENOPKG,		"ENOPKG"		)
_S(EREMOTE,		"EREMOTE"		)
_S(ENOLINK,		"ENOLINK"		)
_S(EADV,		"EADV"			)
_S(ESRMNT,		"ESRMNT"		)
_S(ECOMM,		"ECOMM"			)
_S(EPROTO,		"EPROTO"		)
_S(EMULTIHOP,		"EMULTIHOP"		)
_S(EDOTDOT,		"EDOTDOT"		)
_S(EBADMSG,		"EBADMSG"		)
_S(EOVERFLOW,		"EOVERFLOW"		)
_S(ENOTUNIQ,		"ENOTUNIQ"		)
_S(EBADFD,		"EBADFD"		)
_S(EREMCHG,		"EREMCHG"		)
_S(ELIBACC,		"ELIBACC"		)
_S(ELIBBAD,		"ELIBBAD"		)
_S(ELIBSCN,		"ELIBSCN"		)
_S(ELIBMAX,		"ELIBMAX"		)
_S(ELIBEXEC,		"ELIBEXEC"		)
_S(EILSEQ,		"EILSEQ"		)
_S(ERESTART,		"ERESTART"		)
_S(ESTRPIPE,		"ESTRPIPE"		)
_S(EUSERS,		"EUSERS"		)
_S(ENOTSOCK,		"ENOTSOCK"		)
_S(EDESTADDRREQ,	"EDESTADDRREQ"		)
_S(EMSGSIZE,		"EMSGSIZE"		)
_S(EPROTOTYPE,		"EPROTOTYPE"		)
_S(ENOPROTOOPT,		"ENOPROTOOPT"		)
_S(EPROTONOSUPPORT,	"EPROTONOSUPPORT"	)
_S(ESOCKTNOSUPPORT,	"ESOCKTNOSUPPORT"	)
_S(EOPNOTSUPP,		"EOPNOTSUPP"		)
_S(EPFNOSUPPORT,	"EPFNOSUPPORT"		)
_S(EAFNOSUPPORT,	"EAFNOSUPPORT"		)
_S(EADDRINUSE,		"EADDRINUSE"		)
_S(EADDRNOTAVAIL,	"EADDRNOTAVAIL"		)
_S(ENETDOWN,		"ENETDOWN"		)
_S(ENETUNREACH,		"ENETUNREACH"		)
_S(ENETRESET,		"ENETRESET"		)
_S(ECONNABORTED,	"ECONNABORTED"		)
_S(ECONNRESET,		"ECONNRESET"		)
_S(ENOBUFS,		"ENOBUFS"		)
_S(EISCONN,		"EISCONN"		)
_S(ENOTCONN,		"ENOTCONN"		)
_S(ESHUTDOWN,		"ESHUTDOWN"		)
_S(ETOOMANYREFS,	"ETOOMANYREFS"		)
_S(ETIMEDOUT,		"ETIMEDOUT"		)
_S(ECONNREFUSED,	"ECONNREFUSED"		)
_S(EHOSTDOWN,		"EHOSTDOWN"		)
_S(EHOSTUNREACH,	"EHOSTUNREACH"		)
_S(EALREADY,		"EALREADY"		)
_S(EINPROGRESS,		"EINPROGRESS"		)
_S(ESTALE,		"ESTALE"		)
_S(EUCLEAN,		"EUCLEAN"		)
_S(ENOTNAM,		"ENOTNAM"		)
_S(ENAVAIL,		"ENAVAIL"		)
_S(EISNAM,		"EISNAM"		)
_S(EREMOTEIO,		"EREMOTEIO"		)
_S(EDQUOT,		"EDQUOT"		)
_S(ENOMEDIUM,		"ENOMEDIUM"		)
_S(EMEDIUMTYPE,		"EMEDIUMTYPE"		)
_S(ECANCELED,		"ECANCELED"		)
_S(ENOKEY,		"ENOKEY"		)
_S(EKEYEXPIRED,		"EKEYEXPIRED"		)
_S(EKEYREVOKED,		"EKEYREVOKED"		)
_S(EKEYREJECTED,	"EKEYREJECTED"		)
_S(EOWNERDEAD,		"EOWNERDEAD"		)
_S(ENOTRECOVERABLE,	"ENOTRECOVERABLE"	)
_S(ERFKILL,		"ERFKILL"		)
_S(EHWPOISON,		"EHWPOISON"		)

