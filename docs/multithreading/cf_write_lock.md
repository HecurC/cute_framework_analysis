# cf_write_lock

Category: [multithreading](https://github.com/RandyGaul/cute_framework/blob/master/docs/api_reference?id=multithreading)  
GitHub: [cute_multithreading.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_multithreading.h)  
---

Locks for writing.

```cpp
void cf_write_lock(CF_ReadWriteLock* rw);
```

Parameters | Description
--- | ---
rw | The read/write lock.

## Remarks

When locked for writing, only one writer can be present with no readers. The writer will sleep/wait for all other
readers and writers to unlock before acquiring exclusive access to the lock.

## Related Pages

[CF_ReadWriteLock](https://github.com/RandyGaul/cute_framework/blob/master/docs/multithreading/cf_readwritelock.md)  
[cf_make_rw_lock](https://github.com/RandyGaul/cute_framework/blob/master/docs/multithreading/cf_make_rw_lock.md)  
[cf_destroy_rw_lock](https://github.com/RandyGaul/cute_framework/blob/master/docs/multithreading/cf_destroy_rw_lock.md)  
[cf_read_lock](https://github.com/RandyGaul/cute_framework/blob/master/docs/multithreading/cf_read_lock.md)  
[cf_read_unlock](https://github.com/RandyGaul/cute_framework/blob/master/docs/multithreading/cf_read_unlock.md)  
[cf_write_unlock](https://github.com/RandyGaul/cute_framework/blob/master/docs/multithreading/cf_write_unlock.md)  