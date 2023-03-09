# cf_kv_val_int64

Category: [serialization](https://github.com/RandyGaul/cute_framework/blob/master/docs/api_reference?id=serialization)  
GitHub: [cute_kv.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_kv.h)  
---

Serializes an signed 64-bit value.

```cpp
bool cf_kv_val_int64(CF_KeyValue* kv, int64_t* val);
```

Parameters | Description
--- | ---
kv | The kv.
val | The value to serialize.

## Return Value

Returns true upon success, false otherwise.

## Remarks

You may call this function after succesfully calling [cf_kv_key](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_kv_key.md). See [CF_KeyValue](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_keyvalue.md) for an overview.

If the `kv` is in write made (made by [cf_kv_write](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_kv_write.md)) this function will write the value from `val`. If the `kv` is in read mode
(created by [cf_kv_read](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_kv_read.md)) then this function read the value and store it in `val`.

## Related Pages

[CF_KeyValue](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_keyvalue.md)  
[cf_kv_key](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_kv_key.md)  
[cf_kv_val_int8](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_kv_val_int8.md)  
[cf_kv_val_int16](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_kv_val_int16.md)  
[cf_kv_val_int32](https://github.com/RandyGaul/cute_framework/blob/master/docs/serialization/cf_kv_val_int32.md)  