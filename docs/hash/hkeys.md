[](../header.md ':include')

# hkeys

Category: [hash](/api_reference?id=hash)  
GitHub: [cute_hashtable.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_hashtable.h)  
---

Get a const pointer to the array of keys.

```cpp
#define hkeys(h) cf_hashtable_keys(h)
```

Parameters | Description
--- | ---
h | The hashtable. Can be `NULL`. Needs to be a pointer to the type of items in the table.

## Code Example

> Loop over all {key, item} pairs of a table.

```cpp
htbl CF_V2 table = my_table();
const uint64_t keys = hkeys(table);
for (int i = 0; i < hcount(table); ++i) {
    uint64_t key = keys[i];
    CF_V2 item = table[i];
    // ...
}
```

## Remarks

The keys are type `uint64_t`.

## Related Pages

[htbl](/hash/htbl.md)  
[hset](/hash/hset.md)  
[hadd](/hash/hadd.md)  
[hget](/hash/hget.md)  
[hfind](/hash/hfind.md)  
[hget_ptr](/hash/hget_ptr.md)  
[hfind_ptr](/hash/hfind_ptr.md)  
[hhas](/hash/hhas.md)  
[hdel](/hash/hdel.md)  
[hclear](/hash/hclear.md)  
[hfree](/hash/hfree.md)  
[hitems](/hash/hitems.md)  
[hswap](/hash/hswap.md)  
[hsize](/hash/hsize.md)  
[hcount](/hash/hcount.md)  
