[](../header.md ':include')

# cf_make_png_cache_animation_table

Category: [png_cache](/api_reference?id=png_cache)  
GitHub: [cute_png_cache.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_png_cache.h)  
---

Constructs an animation table given an array of animations, or returns one from the cache if it already exists.

```cpp
const htbl CF_Animation** cf_make_png_cache_animation_table(const char* sprite_name, const CF_Animation* const* animations, int animations_count);
```

Parameters | Description
--- | ---
sprite_name | A unique name for the animation table.

## Return Value

Returns a [CF_Animation](/sprite/cf_animation.md) hashtable, see [htbl](/hash/htbl.md).

## Remarks

The table returned is a map of animation names to individual [CF_Animation](/sprite/cf_animation.md)'s. This is represents the guts of a sprite
implementation. You may use this function if you wish to implement your own sprites. However, it's recommended to instead use
[cf_make_png_cache_sprite](/png_cache/cf_make_png_cache_sprite.md) and [CF_Sprite](/sprite/cf_sprite.md).

## Related Pages

[CF_Png](/png_cache/cf_png.md)  
[cf_png_cache_load](/png_cache/cf_png_cache_load.md)  
[cf_make_png_cache_animation](/png_cache/cf_make_png_cache_animation.md)  
[cf_make_png_cache_sprite](/png_cache/cf_make_png_cache_sprite.md)  
