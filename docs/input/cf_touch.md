[](../header.md ':include')

# CF_Touch

Category: [input](/api_reference?id=input)  
GitHub: [cute_input.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_input.h)  
---

Represents a single touch event on the device.

Struct Members | Description
--- | ---
`uint64_t id` | A unique identifier for every touch event.
`float x` | The x-position of the touch event. Normalized from [0,1], where [0,0] is the top-left corner.
`float y` | The y-position of the touch event. Normalized from [0,1], where [0,0] is the top-left corner.
`float pressure` | A number from [0,1] representing the touch pressure.

## Related Pages

[cf_touch_get](/input/cf_touch_get.md)  
[cf_touch_get_all](/input/cf_touch_get_all.md)  
