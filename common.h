 *
 *
#if defined(__DJGPP__) || defined(__TURBOC__) /* DJGPP */
#  if !defined(__MSYS__) && !defined(_MSC_VER)
#if !defined(__TURBOC__) && !defined(_MSC_VER)
#ifdef __GNUC__
#ifndef strcmpi
#  include <strings.h>
#  define strcmpi(s1, s2) strcasecmp(s1, s2)
#endif
#endif
#ifdef _MSC_VER
#  include <sys/utime.h>
#else
#  include <utime.h>
#endif
#  define _WIN32 1
#define __MSDOS__ 1
#define __MSDOS__ 1
#if defined(ENABLE_NLS) || (defined(D2U_UNICODE) && !defined(__MSDOS__) && !defined(_WIN32) && !defined(__OS2__))
/* setlocale() is also needed for nl_langinfo() */
#include <locale.h>
#if  defined(__TURBOC__) || defined(__DJGPP__) || defined(__MINGW32__) || defined(_MSC_VER)
#if  defined(__TURBOC__) || defined(__DJGPP__) || defined(__MINGW32__) || defined(__WATCOMC__) || defined(_MSC_VER)
/* Microsoft Visual C++ */
#ifdef _MSC_VER
#define S_ISCHR( m )    (((m) & _S_IFMT) == _S_IFCHR)
#define S_ISDIR( m )    (((m) & _S_IFMT) == _S_IFDIR)
#define S_ISFIFO( m )   (((m) & _S_IFMT) == _S_IFIFO)
#define S_ISREG( m )    (((m) & _S_IFMT) == _S_IFREG)
#define NO_CHMOD 1  /* no chmod() available */
#endif

#if defined(__MSDOS__) || defined(_WIN32) || defined(__OS2__)
#if defined(__MSDOS__) || defined(_WIN32) || defined(__OS2__)
#if defined(__MSDOS__) || defined(_WIN32) || defined(__CYGWIN__) || defined(__OS2__) /* DJGPP, MINGW32 and OS/2 */
#if defined(__MSDOS__) || defined(_WIN32) || defined(__CYGWIN__) || defined(__OS2__)
#define CONVMODE_ASCII   0
#define CONVMODE_UTF16LE 1
#define CONVMODE_UTF16BE 2
#define CONVMODE_7BIT    3
#define CONVMODE_437     437
#define CONVMODE_850     850
#define CONVMODE_860     860
#define CONVMODE_863     863
#define CONVMODE_865     865
#define CONVMODE_1252    1252
  int ConvMode;                         /* 0: ascii, 1: 7bit, 2: iso */
  int FromToMode;                       /* 0: dos2unix/unix2dos, 1: mac2unix/unix2mac */