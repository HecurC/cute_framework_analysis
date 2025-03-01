[](../header.md ':include')

# cf_pixel_to_int_rgba

Category: [graphics](/api_reference?id=graphics)  
GitHub: [cute_color.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_color.h)  
---

Converts an RGBA [CF_Pixel](/graphics/cf_pixel.md) to an integer.

```cpp
uint32_t cf_pixel_to_int_rgba(CF_Pixel p)
```

Parameters | Description
--- | ---
p | The pixel.

## Return Value

Returns an unsigned 32-bit integer of the packed pixel components. The first byte is the red component, the second byte is
the green component, the third byte is the blue component, the fourth byte is the alpha component.

## Related Pages

[cf_pixel_to_color](/graphics/cf_pixel_to_color.md)  
[cf_pixel_to_string](/graphics/cf_pixel_to_string.md)  
[cf_pixel_to_int_rgb](/graphics/cf_pixel_to_int_rgb.md)  
