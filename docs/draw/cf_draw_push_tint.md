[](../header.md ':include')

# cf_draw_push_tint

Category: [draw](/api_reference?id=draw)  
GitHub: [cute_draw.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_draw.h)  
---

Pushes a tint color.

```cpp
void cf_draw_push_tint(CF_Color c);
```

Parameters | Description
--- | ---
c | The color.

## Remarks

Sprites and shapes can be tinted. This is useful for certain effects such as damage flashes, or
dynamic color variations. Tint is implemented under the hood with an overlay operation. If you want
to push a no-op, use [cf_color_grey](/graphics/cf_color_grey.md) to apply no tinting at all.

## Related Pages

[cf_draw_peek_tint](/draw/cf_draw_peek_tint.md)  
[cf_draw_pop_tint](/draw/cf_draw_pop_tint.md)  
