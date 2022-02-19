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
