#ifndef JavaScriptContextPrivate_h
#define JavaScriptContextPrivate_h

#include "JavaScriptContext.h"

/**
 * @struct JavaScriptContextExceptionHandlerData
 * @since 0.1.0
 */
struct JavaScriptContextExceptionHandlerData {
	JavaScriptContextExceptionHandler handler;
};

/**
 * @typedef JavaScriptContextExceptionHandlerDataRef
 * @since 0.1.0
 */
typedef struct JavaScriptContextExceptionHandlerData* JavaScriptContextExceptionHandlerDataRef;

#endif
