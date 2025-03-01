[](../header.md ':include')

# cf_material_set_texture_fs

Category: [graphics](/api_reference?id=graphics)  
GitHub: [cute_graphics.h](https://github.com/RandyGaul/cute_framework/blob/master/include/cute_graphics.h)  
---

Sets up a texture, used for inputs to fragment shaders.

```cpp
void cf_material_set_texture_fs(CF_Material material, const char* name, CF_Texture texture);
```

Parameters | Description
--- | ---
material | The material.
name | The name of the texture, for referring to within a fragment shader.
texture | Data (usually an image) for a shader to access.

## Remarks

See [CF_Texture](/graphics/cf_texture.md) and [CF_TextureParams](/graphics/cf_textureparams.md) for an overview.

## Related Pages

[CF_UniformType](/graphics/cf_uniformtype.md)  
[CF_Material](/graphics/cf_material.md)  
[cf_make_material](/graphics/cf_make_material.md)  
[cf_destroy_material](/graphics/cf_destroy_material.md)  
[cf_material_set_render_state](/graphics/cf_material_set_render_state.md)  
[cf_material_set_texture_vs](/graphics/cf_material_set_texture_vs.md)  
[cf_material_set_uniform_fs](/graphics/cf_material_set_uniform_fs.md)  
[cf_material_set_uniform_vs](/graphics/cf_material_set_uniform_vs.md)  
