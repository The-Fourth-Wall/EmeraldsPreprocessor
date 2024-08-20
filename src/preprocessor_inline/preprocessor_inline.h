#ifndef __PREPROCESSOR_INLINE_H_
#define __PREPROCESSOR_INLINE_H_

#include "../preprocessor_version/preprocessor_version.h"

#if PREPROCESSOR_C_VERSION >= 1999
  #define p_inline inline
#elif defined(__GNUC__)
  #define p_inline __inline__
#else
  #define pp_inline
#endif

#endif
