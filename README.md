> Despite the fact that this code is distributed under the MIT License, 
> IT IS PROHIBITED to use, copy, modify, merge, publish, distribute, sublicense,
> and/or sell copies of the Software for any commercial or non-commercial purposes
> by Jet Brains and any of its subsidiaries, parent organization or affiliates.

<p align="center">
    <img src="https://raw.githubusercontent.com/promisedio/promise/main/logo.svg" alt="PromisedIO" />
</p>
<p align="center">
    <b>PromisedIO</b>
</p>

###### PromisedIO is free and open source software released under the permissive MIT license.

# Promises

You can read about promises [here](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise).

## Deferred
```python
promise.deferred() -> Deferred
```
<!--- [start_doc:promise.deferred] -->
Create new [Deferred](#deferred) object.
<!--- [end_doc] -->

```python
Deferred.promise() -> Promise
```
<!--- [start_doc:promise.Deferred.promise] -->
Get related [Promise](#promise) object.
<!--- [end_doc] -->

```python
Deferred.resolve(value: object) -> None
```
<!--- [start_doc:promise.Deferred.resolve] -->
Resolve related [Promise](#promise) object with the given `value`.
<!--- [end_doc] -->

```python
Deferred.reject(exc: Exception) -> None
```
<!--- [start_doc:promise.Deferred.reject] -->
Reject related [Promise](#promise) object with the given exception `exc`.
<!--- [end_doc] -->

## Promise 

```python
Promise.then(fulfilled: Callable[[object], object], rejected: Callable[[Exception], object]) -> Promise
```
<!--- [start_doc:promise.Promise.then] -->
Create new [Promise](#promise).
It takes up to two arguments: callback functions for the success and failure cases of the promise.
<!--- [end_doc] -->

```python
Promise.catch(rejected: Callable[[Exception], object]) -> Promise
```
<!--- [start_doc:promise.Promise.catch] -->
The same as `.then(None, rejected)`
<!--- [end_doc] -->

## Loop
```python
exec_async(coro: Coroutine) -> None
```
<!--- [start_doc:promise.exec_async] -->
Start coroutine.
<!--- [end_doc] -->

```python
process_promise_chain() -> None
```
<!--- [start_doc:promise.process_promise_chain] -->
Process all scheduled (resolved or rejected) promises.
<!--- [end_doc] -->

```python
run_forever() -> None
```
<!--- [start_doc:promise.run_forever] -->
Start simple event loop.
<!--- [end_doc] -->

## Utilities

```python
clearfreelists() -> None
```
<!--- [start_doc:promise.clearfreelists] -->
Clear freelists.
<!--- [end_doc] -->

```python
setfreelistlimits(promise_limit: int = -1, promiseiter_limit: int = -1, deferred_limit: int = -1) -> None
```
<!--- [start_doc:promise.setfreelistlimits] -->
Set new freelist limits
<!--- [end_doc] -->

## Primitives

## Lock
```python
Lock() -> Lock
```
<!--- [start_doc:promise.Lock.__new__] -->
Create new [Lock](#lock) object.
<!--- [end_doc] -->

```python
Lock.acquire() -> Promise
```
<!--- [start_doc:promise.Lock.acquire] -->
Acquire the lock.
<!--- [end_doc] -->

```python
Lock.release() -> None
```
<!--- [start_doc:promise.Lock.release] -->
Release the lock.
<!--- [end_doc] -->
