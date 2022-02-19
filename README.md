> Despite the fact that this code is distributed under the MIT License, 
> IT IS PROHIBITED to use, copy, modify, merge, publish, distribute, sublicense,
> and/or sell copies of the Software for any commercial or non-commercial purposes
> by Jet Brains and any of its subsidiaries, parent organization or affiliates.

<p align="center">
    <img src="https://raw.githubusercontent.com/aachurin/promisedio/main/logo.svg" alt="PromisedIO" />
</p>
<p align="center">
    <b>PromisedIO</b>
</p>

###### PromisedIO is free and open source software released under the permissive MIT license.

### promisedio.promise (Promises)
You can read about promises [here](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Promise).

```python
deferred() -> Deferred
```
Create new _Deferred_ object.

```python
Deferred.promise() -> Promise
```
Get related _Promise_ object.

```python
Deferred.resolve(value: object) -> None
```
Resolve related _Promise_ object with the given _value_.

```python
Deferred.reject(exc: Exception) -> None
```
Reject related _Promise_ object with the given exception _exc_.

```python
Promise.then(fulfilled: Callable[[object], object], rejected: Callable[[Exception], object]) -> Promise
```
Create new _Promise_.

It takes up to two arguments: callback functions for the success and failure cases of the _Promise_.
 
```python
Promise.catch(rejected: Callable[[Exception], object]) -> Promise
```
Create new _Promise_.

It is the same as `.then(None, rejected)`


```python
exec_async(coro: Coroutine) -> None
```
Start coroutine.
