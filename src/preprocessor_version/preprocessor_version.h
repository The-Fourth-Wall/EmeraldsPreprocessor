#ifndef __PREPROCESSOR_VERSION_H_
#define __PREPROCESSOR_VERSION_H_

#if defined(_MSC_VER)
  #define PREPROCESSOR_C_VERSION 1989
#elif defined(__STDC_VERSION__)
  #if __STDC_VERSION__ >= 202000L
    #define PREPROCESSOR_C_VERSION 2023
  #elif __STDC_VERSION__ >= 201710L
    #define PREPROCESSOR_C_VERSION 2017
  #elif __STDC_VERSION__ >= 201112L
    #define PREPROCESSOR_C_VERSION 2011
  #elif __STDC_VERSION__ >= 199901L
    #define PREPROCESSOR_C_VERSION 1999
  #elif __STDC_VERSION__ >= 199409L
    #define PREPROCESSOR_C_VERSION 1995
  #else
    #define PREPROCESSOR_C_VERSION 1989
  #endif
// Older GCC/Clang without __STDC_VERSION__
#elif defined(__GNUC__) || defined(__clang__)
  #define PREPROCESSOR_C_VERSION 1989
// Oracle Solaris Studio compiler
#elif defined(__SUNPRO_C)
  #if __SUNPRO_C >= 0x5150
    #define PREPROCESSOR_C_VERSION 1999
  #elif __SUNPRO_C >= 0x5000
    #define PREPROCESSOR_C_VERSION 1995
  #else
    #define PREPROCESSOR_C_VERSION 1989
  #endif
// IBM compilers
#elif defined(__xlC__) || defined(__IBMC__) || defined(__IBMCPP__)
  #if __xlC__ >= 0x0A01
    #define PREPROCESSOR_C_VERSION 1999
  #else
    #define PREPROCESSOR_C_VERSION 1989
  #endif
// HP-UX compilers
#elif defined(__HP_cc) || defined(__HP_aCC)
  // HP's compilers are generally C95 compliant
  #define PREPROCESSOR_C_VERSION 1995
// IAR Embedded Workbench
#elif defined(__IAR_SYSTEMS_ICC__)
  #if __IAR_SYSTEMS_ICC__ >= 8
    #define PREPROCESSOR_C_VERSION 1999
  #else
    #define PREPROCESSOR_C_VERSION 1989
  #endif
// Texas Instruments compilers
#elif defined(__TI_COMPILER_VERSION__)
  #if __TI_COMPILER_VERSION__ >= 6000000
    #define PREPROCESSOR_C_VERSION 1999
  #else
    #define PREPROCESSOR_C_VERSION 1989
  #endif
// GCC in strict ANSI mode
#elif defined(__GNUC__) && defined(__STRICT_ANSI__)
  #define PREPROCESSOR_C_VERSION 1989
#else
  #define PREPROCESSOR_C_VERSION 1989
#endif

#endif
