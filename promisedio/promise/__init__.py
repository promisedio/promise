import os

if os.environ.get("PROMISEDIO_DEBUG"):
    from . _promise_debug import *
else:
    from . _promise import *

del os
