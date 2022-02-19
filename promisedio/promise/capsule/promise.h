// Auto-generated

#ifndef PROMISEDIO_PROMISE_API
#define PROMISEDIO_PROMISE_API

static int promise_api_65f2d2f421145469d2a87b5eae34970d__api_loaded = 0;
static void *promise_api_65f2d2f421145469d2a87b5eae34970d__api[17];

#define PROMISE_API promise_api_65f2d2f421145469d2a87b5eae34970d

#define PROMISE_STARTLOOP_ID 0
#define Promise_StartLoop(...) \
  ((int (*) (void*, unlockloop unlock_func, void *ctx))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_STARTLOOP_ID]))( \
    _ctx->promise_api_65f2d2f421145469d2a87b5eae34970d__ctx, __VA_ARGS__)

#define PROMISE_STOPLOOP_ID 1
#define Promise_StopLoop(...) \
  ((int (*) (void*, unlockloop unlock_func, void *ctx))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_STOPLOOP_ID]))( \
    _ctx->promise_api_65f2d2f421145469d2a87b5eae34970d__ctx, __VA_ARGS__)

#define PROMISE_NEW_ID 2
#define Promise_New() \
  ((Promise * (*) (void*))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_NEW_ID]))( \
    _ctx->promise_api_65f2d2f421145469d2a87b5eae34970d__ctx)

#define PROMISE_CALLBACK_ID 3
#define Promise_Callback(...) \
  ((void (*) (Promise *self, promisecb fulfilled, promisecb rejected))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_CALLBACK_ID]))( \
    __VA_ARGS__)

#define PROMISE_PYCALLBACK_ID 4
#define Promise_PyCallback(...) \
  ((void (*) (Promise *self, PyObject *fulfilled, PyObject *rejected))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_PYCALLBACK_ID]))( \
    __VA_ARGS__)

#define PROMISE_NEWRESOLVED_ID 5
#define Promise_NewResolved(...) \
  ((Promise * (*) (void*, PyObject *value, PyObject *func))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_NEWRESOLVED_ID]))( \
    _ctx->promise_api_65f2d2f421145469d2a87b5eae34970d__ctx, __VA_ARGS__)

#define PROMISE_THEN_ID 6
#define Promise_Then(...) \
  ((Promise * (*) (Promise *self))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_THEN_ID]))( \
    __VA_ARGS__)

#define _PROMISE_RESOLVEEX_ID 7
#define _Promise_ResolveEx(...) \
  ((void (*) (Promise *self, PyObject *value, int invoke_callback))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[_PROMISE_RESOLVEEX_ID]))( \
    __VA_ARGS__)

#define _PROMISE_REJECTEX_ID 8
#define _Promise_RejectEx(...) \
  ((void (*) (Promise *self, PyObject *value, int invoke_callback))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[_PROMISE_REJECTEX_ID]))( \
    __VA_ARGS__)

#define _PROMISE_REJECTARGSEX_ID 9
#define _Promise_RejectArgsEx(...) \
  ((void (*) (Promise *self, PyObject *exc, PyObject *args, int invoke_callback))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[_PROMISE_REJECTARGSEX_ID]))( \
    __VA_ARGS__)

#define _PROMISE_REJECTSTRINGEX_ID 10
#define _Promise_RejectStringEx(...) \
  ((void (*) (Promise *self, PyObject *exc, const char *msg, int invoke_callback))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[_PROMISE_REJECTSTRINGEX_ID]))( \
    __VA_ARGS__)

#define PROMISE_CLEARCHAIN_ID 11
#define Promise_ClearChain() \
  ((void (*) (void*))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_CLEARCHAIN_ID]))( \
    _ctx->promise_api_65f2d2f421145469d2a87b5eae34970d__ctx)

#define PROMISE_PROCESSCHAIN_ID 12
#define Promise_ProcessChain() \
  ((int (*) (void*))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_PROCESSCHAIN_ID]))( \
    _ctx->promise_api_65f2d2f421145469d2a87b5eae34970d__ctx)

#define PROMISE_GETSTATS_ID 13
#define Promise_GetStats(...) \
  ((int (*) (void*, Py_ssize_t *active_promises))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[PROMISE_GETSTATS_ID]))( \
    _ctx->promise_api_65f2d2f421145469d2a87b5eae34970d__ctx, __VA_ARGS__)

#define LOCK_NEW_ID 14
#define Lock_New() \
  ((Lock * (*) (void*))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[LOCK_NEW_ID]))( \
    _ctx->promise_api_65f2d2f421145469d2a87b5eae34970d__ctx)

#define LOCK_ACQUIRE_ID 15
#define Lock_Acquire(...) \
  ((Promise * (*) (Lock *self))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[LOCK_ACQUIRE_ID]))( \
    __VA_ARGS__)

#define LOCK_RELEASE_ID 16
#define Lock_Release(...) \
  ((void (*) (Lock *self))(promise_api_65f2d2f421145469d2a87b5eae34970d__api[LOCK_RELEASE_ID]))( \
    __VA_ARGS__)

#include "promise.h"

struct promise_s {
    PROMISE_PUBLIC_FIELDS
};

Py_LOCAL_INLINE(int)
Promise_WasScheduled(Promise *promise)
{
    return !!(promise->flags & PROMISE_SCHEDULED);
}

Py_LOCAL_INLINE(void *)
Promise_Data(Promise *promise)
{
    return &(promise->data);
}

#define Promise_DATA(promise, type) \
    ((type *) Promise_Data(promise))

Py_LOCAL_INLINE(PyObject *)
Promise_GetCtx(Promise *promise)
{
    return promise->ctx;
}

Py_LOCAL_INLINE(PyObject *)
Promise_SetCtx(Promise *promise, PyObject *ctx)
{
    PyObject *ret = promise->ctx;
    promise->ctx = ctx;
    return ret;
}

#define Promise_ResolveEx(self, value, invoke_callback)     \
    if (!((self)->flags & PROMISE_SCHEDULED))               \
        _Promise_ResolveEx(self, value, invoke_callback)

#define Promise_Resolve(self, value) Promise_ResolveEx(self, value, 0)

#define Promise_RejectEx(self, value, invoke_callback)      \
    if (!(self->flags & PROMISE_SCHEDULED))                 \
        _Promise_RejectEx(self, value, invoke_callback)

#define Promise_Reject(self, value) Promise_RejectEx(self, value, 0)

#define Promise_RejectArgsEx(self, exc, args, invoke_callback)  \
    if (!(self->flags & PROMISE_SCHEDULED))                     \
        _Promise_RejectArgsEx(self, exc, args, invoke_callback)

#define Promise_RejectArgs(self, exc, args) Promise_RejectArgsEx(self, exc, args, 0)

#define Promise_RejectStringEx(self, exc, msg, invoke_callback)     \
    if (!(self->flags & PROMISE_SCHEDULED))                         \
        _Promise_RejectStringEx(self, exc, msg, invoke_callback)    \

#define Promise_RejectString(self, exc, msg) Promise_RejectStringEx(self, exc, msg, 0)

// Copyright (c) 2021-2022 Andrey Churin <aachurin@gmail.com> Promisedio

#ifndef PROMISEDIO_PROMISE_H
#define PROMISEDIO_PROMISE_H

typedef PyObject *(*promisecb)(PyObject *value, PyObject *promise);
typedef void (*unlockloop)(void* ctx);

enum {
    PROMISE_INITIAL = 0x0000,
    PROMISE_FULFILLED = 0x0001,
    PROMISE_REJECTED = 0x0002,
    PROMISE_RESOLVING = 0x0004,
    PROMISE_RESOLVED = 0x0008,
    PROMISE_INTERIM = 0x0010,
    PROMISE_C_CALLBACK = 0x0020,
    PROMISE_PY_CALLBACK = 0x0040,
    PROMISE_VALUABLE = 0x0100
};

enum {
    PROMISE_HAS_CALLBACK = (PROMISE_C_CALLBACK | PROMISE_PY_CALLBACK),
    PROMISE_SCHEDULED = (PROMISE_FULFILLED | PROMISE_REJECTED),
    PROMISE_FREEZED = (PROMISE_RESOLVING | PROMISE_RESOLVED)
};

#define PROMISE_PUBLIC_FIELDS   \
    PyObject_HEAD               \
    Chain_NODE(Promise);        \
    PyObject *ctx;              \
    void *timer;                \
    char data[24];              \
    int flags;

typedef struct promise_s Promise;

Py_LOCAL_INLINE(PyObject *)
Py_NewError(PyObject *exception, const char *msg)
{
    PyObject *value = PyUnicode_FromString(msg);
    if (!value)
        return NULL;
    PyObject *exc = PyObject_CallOneArg(exception, value);
    Py_DECREF(value);
    return exc;
}

Py_LOCAL_INLINE(PyObject *)
Py_FetchError()
{
    PyObject *exc, *val, *tb;
    PyErr_Fetch(&exc, &val, &tb);
    if (exc == NULL)
        return NULL;
    PyErr_NormalizeException(&exc, &val, &tb);
    if (tb != NULL) {
        PyException_SetTraceback(val, tb);
        Py_DECREF(tb);
    }
    Py_DECREF(exc);
    return val;
}

#endif

#endif
